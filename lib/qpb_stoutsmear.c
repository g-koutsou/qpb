#ifdef OPENMP
#include <omp.h>
#endif
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_gauge_field.h>
#include <qpb_gauge_field_copy.h>
#include <qpb_sun_linalg.h>
#include <qpb_comm_halo_gauge_field.h>
#include <qpb_plaquette.h>
#include <gsl/gsl_vector.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_complex.h>
#include <gsl/gsl_complex_math.h>
#include <gsl/gsl_linalg.h>
#include <gsl/gsl_blas.h>

#define NUMB_GSL_MATRICES 13
#define NUMB_GSL_VECTORS 2


static double exp_eps = 1e-8;
/*
  Temp variables for exponentiation. The matrix exponentiation is not
  thread-safe because it relies on these static variables, which are
  dynamically allocated
*/

static gsl_matrix_complex *aux_matrices[NUMB_GSL_MATRICES];
static gsl_vector_complex *aux_vectors[NUMB_GSL_VECTORS];
static gsl_permutation *perm;

static inline void
sun_exp_init()
{
  for(int i=0; i<NUMB_GSL_MATRICES; i++)
    aux_matrices[i] = gsl_matrix_complex_alloc(NC, NC);
  
  for(int i=0; i<NUMB_GSL_VECTORS; i++)
    aux_vectors[i] = gsl_vector_complex_alloc(NC);

  perm = gsl_permutation_alloc(NC);
  return;
}

static inline void
sun_exp_finalize()
{
  for(int i=0; i<NUMB_GSL_MATRICES; i++)
    gsl_matrix_complex_free(aux_matrices[i]);
  
  for(int i=0; i<NUMB_GSL_VECTORS; i++)
    gsl_vector_complex_free(aux_vectors[i]);

  gsl_permutation_free(perm);
  return;
}

static inline void
solve(gsl_matrix_complex *A, gsl_matrix_complex *X, gsl_matrix_complex *B)
{
  /*
    Solves A X = B for unknown X given A, B by LU decomposing A
  */
  int sgn;
  gsl_matrix_complex *LU = aux_matrices[0];
  gsl_vector_complex *x = aux_vectors[0];
  gsl_vector_complex *b = aux_vectors[1];

  gsl_matrix_complex_memcpy(LU, A);
  gsl_linalg_complex_LU_decomp(LU, perm, &sgn);
  for(int col=0; col<NC; col++) {
    gsl_matrix_complex_get_col(b, B, col);
    gsl_linalg_complex_LU_solve(LU, perm, b, x);
    gsl_matrix_complex_set_col(X, col, x);
  }
  return;
}

static inline void
sun_exp_n(gsl_matrix_complex *Uout, gsl_matrix_complex *A, int n)
{
  /*
   * Returns exp(A) in U via
   * [exp(A/2**(n+1))*inv(exp(-A/2**(n+1)))]**(2**n), with the exp()
   * computed via Taylor expansion up to order 2*n
   */
  gsl_matrix_complex *S = aux_matrices[1];
  gsl_matrix_complex *L = aux_matrices[2];
  gsl_matrix_complex *R = aux_matrices[3];
  gsl_matrix_complex *X = aux_matrices[4];
  gsl_matrix_complex *Y = aux_matrices[5];
  gsl_matrix_complex *X0 = aux_matrices[6];
  gsl_matrix_complex *Y0 = aux_matrices[7];
  gsl_matrix_complex *E = aux_matrices[8];
  gsl_matrix_complex *U[2] = {Uout,
			      aux_matrices[9]};

  gsl_matrix_complex_memcpy(S,A);
  gsl_matrix_complex_scale(S, gsl_complex_rect(1.0/pow(2,n+1),0));  

  gsl_matrix_complex_set_identity(X);
  gsl_matrix_complex_set_identity(Y);
  gsl_matrix_complex_set_identity(R);
  gsl_matrix_complex_set_identity(L);
  gsl_complex cz = gsl_complex_rect(0.0, 0.0);
  gsl_complex co = gsl_complex_rect(1.0, 0.0);
  for(int i=1; i<=2*n; i++) {
    gsl_complex kp = gsl_complex_rect(+1./(double)i, 0.0);
    gsl_complex km = gsl_complex_rect(-1./(double)i, 0.0);
    gsl_blas_zgemm(CblasNoTrans, CblasNoTrans, kp, X, S, cz, X0);
    gsl_blas_zgemm(CblasNoTrans, CblasNoTrans, km, Y, S, cz, Y0);
    gsl_matrix_complex_add(L,X0);
    gsl_matrix_complex_add(R,Y0);
    gsl_matrix_complex_memcpy(X,X0);
    gsl_matrix_complex_memcpy(Y,Y0);
  }
  
  solve(R,E,L);
  gsl_matrix_complex_set_identity(U[0]);
  for(int i=0; i<pow(2,n); i++) {
    gsl_blas_zgemm(CblasNoTrans, CblasNoTrans, co, E, U[i%2], cz, U[(i+1)%2]);
  }

  return;
}

static void
sun_exp(qpb_link *u)
{
  gsl_matrix_complex *A = aux_matrices[10];
  gsl_matrix_complex *U[2] = {aux_matrices[11],
			      aux_matrices[12]};
  qpb_complex *a = (qpb_complex *)u;
  
  for(int i=0; i<NC; i++)
    for(int j=0; j<NC; j++)
      gsl_matrix_complex_set(A, i, j, gsl_complex_rect(a[j + i*NC].re, a[j + i*NC].im));
 
  int n = 2;
  for(; n<8; n++) {
    sun_exp_n(U[n%2], A, n);
    gsl_matrix_complex_sub(U[(n+1)%2], U[n%2]);
    double norm = 0.0;
    for(int i=0; i<NC; i++)
      for(int j=0; j<NC; j++) {
	gsl_complex z = gsl_matrix_complex_get(U[(n+1)%2], i, j);
	norm += GSL_REAL(z)*GSL_REAL(z) + GSL_IMAG(z)*GSL_IMAG(z);
      }
    if(norm < exp_eps)
      break;
  }

  for(int i=0; i<NC; i++)
    for(int j=0; j<NC; j++){
      a[j + i*NC].re = GSL_REAL(gsl_matrix_complex_get(U[n%2], i, j));
      a[j + i*NC].im = GSL_IMAG(gsl_matrix_complex_get(U[n%2], i, j));
    }    
  
  return;
}

/*
 * Stout smear once
 *
 * Performs: exp[ rho/2 A ]*U
 * with A = \sum {[plaq - h.c] - 1/3 Tr[.]}
 *
 */
void
qpb_stoutsmear(qpb_gauge_field out, qpb_gauge_field in, qpb_double rho)
{
  int lvol = problem_params.l_vol;
  qpb_complex u0[NC*NC], u1[NC*NC], stapl[NC*NC];

  for(int mu=0; mu<ND; mu++) {    
#ifdef OPENMP
#pragma omp parallel for private(u0, u1, stapl)
#endif
    for(int lv=0; lv<lvol; lv++)
      {
	int v = blk_to_ext[lv];	
	for(int c=0; c<NC*NC; c++)
	  stapl[c] = (qpb_complex){0.0, 0.0};

	/* create the staple for this mu direction */
	for(int nu=mu==0?1:0; nu<ND; nu==mu-1?nu+=2:nu++)
	  {
	    qpb_complex *u, *w;
	    u = (qpb_complex *)((qpb_link *) in.index[v] + nu);
	    w = (qpb_complex *)((qpb_link *) in.index[nneigh[nu][v]] + mu);
	    sun_mul_uu(u0, u, w);
	    u = (qpb_complex *)((qpb_link *) in.index[nneigh[mu][v]] + nu);
	    sun_mul_ud(u1, u0, u);

	    sun_upequ(stapl, u1);

	    u = (qpb_complex *)((qpb_link *) in.index[nneigh[nu+ND][v]] + nu);
	    w = (qpb_complex *)((qpb_link *) in.index[nneigh[nu+ND][v]] + mu);
	    sun_mul_du(u0, u, w);
	    u = (qpb_complex *)((qpb_link *) in.index[nneigh[nu+ND][nneigh[mu][v]]] + nu);
	    sun_mul_uu(u1, u0, u);

	    sun_upequ(stapl, u1);
	  }	
	/* so far we have the staple. Multiply with u^+ to form plaquette */
	qpb_complex plaq[NC*NC];
	qpb_complex *u = (qpb_complex *)((qpb_link *) in.index[v] + mu);
	qpb_complex *w = (qpb_complex *)((qpb_link *) out.index[v] + mu);
	sun_mul_ud(plaq, stapl, u);	// plaq = staple * u^+
	/* Anti-hermitize */
	sun_ueqd(u0, plaq);		// u0 = plaq^+		
	sun_umequ(plaq, u0);		// plaq = plaq - u0 = plaq - plaq^+
	/* Make this traceless */
	qpb_complex trace = sun_trace(plaq);
	for(int i=0; i<NC; i++) {
	  plaq[i*NC+i].re -= 1./3.*trace.re;
	  plaq[i*NC+i].im -= 1./3.*trace.im;
	}
	// scale by \rho/2
	sun_mul_au(w, (qpb_complex){rho/2.0, 0}, plaq);
      }
  }
  // Need to exponentiate outside omp region because exponentiation is not thread-safe
  sun_exp_init();
  for(int mu=0; mu<ND; mu++)
    for(int lv=0; lv<lvol; lv++)
      {
	int v = blk_to_ext[lv];
	qpb_complex *w = (qpb_complex *)((qpb_link *) out.index[v] + mu);
	qpb_complex *u = (qpb_complex *)((qpb_link *) in.index[v] + mu);
	qpb_complex u0[NC*NC];
	sun_uequ(u0, w);
	// exponentiate	
	sun_exp((qpb_link *)u0);

	// Multiply with u
	sun_mul_uu(w, u0, u);
      }
  sun_exp_finalize();
  return;
};

/*
 * Stout smear niter times
 *
 * wraps qpb_stoutsmear for arbitrary number of iterations
 * "aux" is required if "in" is to be left untouched
 */
void
qpb_stoutsmear_niter(qpb_gauge_field out, qpb_gauge_field in, qpb_double rho, int niter)
{
  qpb_gauge_field aux = qpb_gauge_field_init();
  qpb_gauge_field_copy(aux, in);
  qpb_gauge_field U[2] = {aux, out};

  for(int i=0; i<niter; i++)
    {
      qpb_comm_halo_gauge_field(U[i%2]);
      qpb_stoutsmear(U[(i+1)%2], U[i%2], rho);
    }

  qpb_gauge_field_copy(out, U[niter%2]);
  qpb_gauge_field_finalize(aux);
  return;
};

/*
 * Stout smear once in 3D. See 4d version above for details
 */
void
qpb_stoutsmear_3d(qpb_gauge_field out, qpb_gauge_field in, qpb_double rho)
{
  qpb_complex u0[NC*NC], u1[NC*NC], stapl[NC*NC];
  int lvol = problem_params.l_vol;

  for(int mu=1; mu<ND; mu++) {    
#ifdef OPENMP
#pragma omp parallel for private(u0, u1, stapl)
#endif  
    for(int lv=0; lv<lvol; lv++)
      {
	int v = blk_to_ext[lv];
	
	for(int c=0; c<NC*NC; c++)
	  stapl[c] = (qpb_complex){0.0, 0.0};

	/* create the staple for this mu direction */
	for(int nu=mu==1?2:1; nu<ND; nu==mu-1?nu+=2:nu++)
	  {
	    qpb_complex *u, *w;
	    u = (qpb_complex *)((qpb_link *) in.index[v] + nu);
	    w = (qpb_complex *)((qpb_link *) in.index[nneigh[nu][v]] + mu);
	    sun_mul_uu(u0, u, w);
	    u = (qpb_complex *)((qpb_link *) in.index[nneigh[mu][v]] + nu);
	    sun_mul_ud(u1, u0, u);

	    sun_upequ(stapl, u1);

	    u = (qpb_complex *)((qpb_link *) in.index[nneigh[nu+ND][v]] + nu);
	    w = (qpb_complex *)((qpb_link *) in.index[nneigh[nu+ND][v]] + mu);
	    sun_mul_du(u0, u, w);
	    u = (qpb_complex *)((qpb_link *) in.index[nneigh[nu+ND][nneigh[mu][v]]] + nu);
	    sun_mul_uu(u1, u0, u);

	    sun_upequ(stapl, u1);
	  }
	
	/* so far we have the staple. Multiply with u^+ to form plaquette */
	qpb_complex plaq[NC*NC];
	qpb_complex *u = (qpb_complex *)((qpb_link *) in.index[v] + mu);
	qpb_complex *w = (qpb_complex *)((qpb_link *) out.index[v] + mu);
	sun_mul_ud(plaq, stapl, u);	// plaq = staple * u^+
	/* Anti-hermitize */
	sun_ueqd(u0, plaq);		// u0 = plaq^+		
	sun_umequ(plaq, u0);		// plaq = plaq - u0 = plaq - plaq^+
	/* Make this traceless */
	qpb_complex trace = sun_trace(plaq);
	for(int i=0; i<NC; i++) {
	  plaq[i*NC+i].re -= 1./3.*trace.re;
	  plaq[i*NC+i].im -= 1./3.*trace.im;
	}

	// scale by \rho/2
	sun_mul_au(w, (qpb_complex){rho/2.0, 0}, plaq);
      }
    
  }
  // Need to exponentiate outside omp region because exponentiation is not thread-safe
  sun_exp_init();
  for(int mu=0; mu<ND; mu++)
    for(int lv=0; lv<lvol; lv++)
      {
	int v = blk_to_ext[lv];
	qpb_complex *w = (qpb_complex *)((qpb_link *) out.index[v] + mu);
	qpb_complex *u = (qpb_complex *)((qpb_link *) in.index[v] + mu);
	if(mu != 0) {
	  qpb_complex u0[NC*NC];
	  sun_uequ(u0, w);
	  // exponentiate	
	  sun_exp((qpb_link *)u0);
	  
	  // Multiply with u
	  sun_mul_uu(w, u0, u);	
	} else {
	  sun_uequ(w, u);
	}
      }
  sun_exp_finalize();
  return;
};

/*
 * Stout smear niter times
 *
 * wraps qpb_stoutsmear for arbitrary number of iterations
 * "aux" is required if "in" is to be left untouched
 */
void
qpb_stoutsmear_3d_niter(qpb_gauge_field out, qpb_gauge_field in, qpb_double rho, int niter)
{
  qpb_gauge_field aux = qpb_gauge_field_init();
  qpb_gauge_field_copy(aux, in);
  qpb_gauge_field U[2] = {aux, out};

  for(int i=0; i<niter; i++)
    {
      qpb_comm_halo_gauge_field(U[i%2]);
      qpb_double plaquette = qpb_plaquette(U[i%2]);
      qpb_double p3d = qpb_plaquette_3d(U[i%2]);
      print(" %4d plaquette (3D) = %10.8f (%10.8f)\n", i, plaquette, p3d);
      qpb_stoutsmear_3d(U[(i+1)%2], U[i%2], rho);
    }
  qpb_comm_halo_gauge_field(U[niter%2]);
  qpb_double plaquette = qpb_plaquette(U[niter%2]);
  qpb_double p3d = qpb_plaquette_3d(U[niter%2]);
  print(" %4d plaquette (3D) = %10.8f (%10.8f)\n", niter, plaquette, p3d);

  qpb_gauge_field_copy(out, U[niter%2]);
  qpb_gauge_field_finalize(aux);
  return;
};
