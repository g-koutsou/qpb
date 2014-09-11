#include <gsl/gsl_vector.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_complex.h>
#include <gsl/gsl_complex_math.h>
#include <gsl/gsl_linalg.h>
#include <gsl/gsl_blas.h>

#include <qpb_types.h>

#define N_CHEAP_PROJ_ITER 8

static gsl_vector_complex *x;
static gsl_vector_complex *b;
static gsl_permutation *perm;
static gsl_matrix_complex *LU;
static gsl_matrix_complex *AdA; 
static gsl_matrix_complex *I3pA;
static gsl_matrix_complex *Ip3A;
static gsl_matrix_complex *Y;   

static void
sun_cheap_proj_init()
{
  /* For solve() */
  x = gsl_vector_complex_alloc(NC);
  b = gsl_vector_complex_alloc(NC);
  perm = gsl_permutation_alloc(NC);
  LU = gsl_matrix_complex_alloc(NC, NC);

  /* For sun_cheap_proj_iter() */
  AdA = gsl_matrix_complex_alloc(NC, NC);
  I3pA = gsl_matrix_complex_alloc(NC, NC);
  Ip3A = gsl_matrix_complex_alloc(NC, NC);
  Y = gsl_matrix_complex_alloc(NC, NC);
  return;
}

static void
solve(gsl_matrix_complex *A, gsl_matrix_complex *X, gsl_matrix_complex *B)
{
  /*
    Solves A X = B for unknown X given A, B by LU decomposing A
  */
  int sgn;

  gsl_matrix_complex_memcpy(LU, A);
  gsl_linalg_complex_LU_decomp(LU, perm, &sgn);
  for(int col=0; col<NC; col++) {
    gsl_matrix_complex_get_col(b, B, col);
    gsl_linalg_complex_LU_solve(LU, perm, b, x);
    gsl_matrix_complex_set_col(X, col, x);
  }
  return;
}

static void
sun_cheap_proj_iter(gsl_matrix_complex *U, gsl_matrix_complex *A)
{
  /*
   * Returns in U (1+3A)\(3+A)
   */

  gsl_matrix_complex_set_zero(AdA);
  gsl_matrix_complex_set_zero(U);
  gsl_complex cone = gsl_complex_rect(1.0,0.0);
  gsl_complex czero = gsl_complex_rect(0.0,0.0);
  gsl_blas_zgemm(CblasConjTrans, CblasNoTrans, cone, A, A, czero, AdA);
  gsl_complex three = gsl_complex_rect(3.0,0.0);
  gsl_matrix_complex_set_identity(I3pA);
  gsl_matrix_complex_set_identity(Ip3A);
  gsl_matrix_complex_scale(I3pA, three);
  gsl_matrix_complex_add(I3pA, AdA);
  gsl_matrix_complex_scale(AdA, three);
  gsl_matrix_complex_add(Ip3A, AdA);
  
  solve(Ip3A, Y, I3pA);
  gsl_blas_zgemm(CblasNoTrans, CblasNoTrans, cone, A, Y, czero, U);  
  return;
}

static void
sun_cheap_proj_finalize()
{
  /* For solve() */
  gsl_vector_complex_free(x);
  gsl_vector_complex_free(b);
  gsl_permutation_free(perm);

  /* For sun_cheap_proj_iter() */
  gsl_matrix_complex_free(I3pA);  
  gsl_matrix_complex_free(AdA);  
  gsl_matrix_complex_free(Y);  
  gsl_matrix_complex_free(Ip3A);  
};

static void
normalize(gsl_matrix_complex *U)
{
  /*
   * Make det == 1
   */
  gsl_matrix_complex *LU = gsl_matrix_complex_alloc(NC, NC);
  gsl_permutation *perm = gsl_permutation_alloc(NC);
  int sgn;

  gsl_matrix_complex_memcpy(LU, U);
  gsl_linalg_complex_LU_decomp(LU, perm, &sgn);
  gsl_complex det = gsl_linalg_complex_LU_det(LU, sgn);
  det = gsl_complex_pow_real(det, -1.0/(double)NC);
  gsl_matrix_complex_scale(U, det);

  gsl_permutation_free(perm);
  gsl_matrix_complex_free(LU);
  return;
}

void 
qpb_sun_cheap_project(qpb_link *u, int n)
{
  gsl_matrix_complex *A[2] = {gsl_matrix_complex_alloc(NC, NC),
			      gsl_matrix_complex_alloc(NC, NC)};

  sun_cheap_proj_init();
  for(int k=0; k<n; k++){
    qpb_complex *a = (qpb_complex *)(u + k);
    
    for(int i=0; i<NC; i++)
      for(int j=0; j<NC; j++)
	gsl_matrix_complex_set(A[0], i, j, gsl_complex_rect(a[j + i*NC].re, a[j + i*NC].im));

    for(int i=0; i<N_CHEAP_PROJ_ITER; i++)
      sun_cheap_proj_iter(A[(i+1)%2], A[i%2]);
    
    normalize(A[N_CHEAP_PROJ_ITER%2]);

    for(int i=0; i<NC; i++)
      for(int j=0; j<NC; j++){
        a[j + i*NC].re = GSL_REAL(gsl_matrix_complex_get(A[N_CHEAP_PROJ_ITER%2], i, j));
        a[j + i*NC].im = GSL_IMAG(gsl_matrix_complex_get(A[N_CHEAP_PROJ_ITER%2], i, j));
      }    
  }
  sun_cheap_proj_finalize();
  gsl_matrix_complex_free(A[0]);
  gsl_matrix_complex_free(A[1]);
  return;
}
