#include <string.h>
#include <qpb_types.h>
#include <qpb_errors.h>
#include <qpb_globals.h>
#include <qpb_alloc.h>
#include <qpb_spinor_field.h>
#include <qpb_spinor_linalg.h>
#include <qpb_gauge_field.h>
#include <qpb_comm_halo_spinor_field.h>
#include <qpb_comm_halo_gauge_field.h>
#include <qpb_timebc_set_gauge_field.h>
#include <qpb_dslash_wrappers.h>
#include <qpb_stop_watch.h>
#include <math.h>
#include <qpb.h>

#include <qpb_overlap_Chebyshev_defs.h>
#include <qpb_overlap_Chebyshev.h>

#include <gsl/gsl_vector.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_eigen.h>
#include <gsl/gsl_sort.h>
#include <gsl/gsl_sort_vector.h>

#define OVERLAP_NUMB_TEMP_VECS 13

static int Chebyshev_Tn_numb_vecs;
static qpb_spinor_field ov_temp_vecs[OVERLAP_NUMB_TEMP_VECS];
static qpb_spinor_field *Chebyshev_Tn_vecs;
static qpb_complex *Chebyshev_coeff;
static qpb_double *Chebyshev_TnM2_for_k_array;
static qpb_double *Chebyshev_TnM1_for_k_array;

static qpb_double *discrete_r_values;
static qpb_double *discrete_xk;
static qpb_Chebyshev_overlap_params ov_params;


void
qpb_overlap_Chebyshev_init(void *gauge, qpb_clover_term clover, qpb_double rho, qpb_double c_sw, qpb_double mass, qpb_double epsilon, int max_iters, int N_Cheb)
{
  if(ov_params.initialized != QPB_OVERLAP_INITIALIZED)
    {
      qpb_comm_halo_spinor_field_init();

      /*Number of Chebyshev polynomial terms passed by the user.*/
      Chebyshev_Tn_numb_vecs = N_Cheb;

      Chebyshev_Tn_vecs = qpb_alloc(sizeof(qpb_spinor_field)*Chebyshev_Tn_numb_vecs);
      // for(int i=0; i<Chebyshev_Tn_numb_vecs; i++)
      for(int i=0; i<2; i++)
    	{
    	  Chebyshev_Tn_vecs[i] = qpb_spinor_field_init();
    	  qpb_spinor_field_set_zero(Chebyshev_Tn_vecs[i]);
    	}

      for(int i=0; i<OVERLAP_NUMB_TEMP_VECS; i++)
    	{
    	  ov_temp_vecs[i] = qpb_spinor_field_init();
    	  qpb_spinor_field_set_zero(ov_temp_vecs[i]);
    	}

      qpb_gauge_field gauge_bc;
      if(which_dslash_op == QPB_DSLASH_STANDARD)
      	{
      	  gauge_bc = qpb_gauge_field_init();
      	  qpb_timebc_set_gauge_field(gauge_bc, *(qpb_gauge_field *)gauge, problem_params.timebc);
      	  ov_params.gauge_ptr = qpb_alloc(sizeof(qpb_gauge_field));
      	  memcpy(ov_params.gauge_ptr, &gauge_bc, sizeof(qpb_gauge_field));
      	}
      else
    	  {
    	    ov_params.gauge_ptr = gauge;
    	  }

      ov_params.c_sw = c_sw;
      ov_params.rho = rho;
      ov_params.m_bare = -rho;
      ov_params.mass = mass;
      ov_params.clover = clover;

      /* Calculate the extreme values of the eigenvalues spectrum of H^2.*/
      qpb_double min_eigv_squared;
      qpb_double max_eigv_squared;

      qpb_extreme_eigenvalues_of_H_squared(&min_eigv_squared, &max_eigv_squared, epsilon, max_iters);
      // And then calculate their square root
      ov_params.min_eigv = sqrt(min_eigv_squared);
      // ov_params.min_eigv = 0.010564;
      // ov_params.min_eigv = 0.001903;
      // ov_params.min_eigv = 0.007769;
      ov_params.max_eigv = sqrt(max_eigv_squared);
      // ov_params.max_eigv = 6.730574;
      // ov_params.max_eigv = 2.157000;
      // ov_params.max_eigv = 1.721481;

      print("alpha, beta: %f, %f\n", ov_params.min_eigv, ov_params.max_eigv);

      qpb_double inverse_N = 1./(qpb_double) Chebyshev_Tn_numb_vecs;

      // Caching calculated results
      discrete_r_values = qpb_alloc(sizeof(qpb_double)*Chebyshev_Tn_numb_vecs);
      discrete_xk = qpb_alloc(sizeof(qpb_double)*Chebyshev_Tn_numb_vecs);
      for(int k=0; k<Chebyshev_Tn_numb_vecs; k++)
      {
        qpb_double xk = cos(M_PI*inverse_N*(k+0.5));
        discrete_xk[k] = xk;
        discrete_r_values[k] = Chebyshev_r(xk);
      }

      // Calculate the expansion coefficients
      Chebyshev_TnM2_for_k_array = qpb_alloc(sizeof(qpb_double)*Chebyshev_Tn_numb_vecs);
      Chebyshev_TnM1_for_k_array = qpb_alloc(sizeof(qpb_double)*Chebyshev_Tn_numb_vecs);

      Chebyshev_coeff = qpb_alloc(sizeof(qpb_complex)*Chebyshev_Tn_numb_vecs);
      for(int i=0; i<Chebyshev_Tn_numb_vecs; i++)
    	{
        Chebyshev_coeff[i] = expansion_Chebyshev_coeff_n(i);
    	}

      switch(which_dslash_op)
      	{
      	case QPB_DSLASH_BRILLOUIN:
      	  if(c_sw) {
      	    ov_params.g5_dslash_op = &qpb_gamma5_clover_bri_dslash;
      	    ov_params.dslash_op = &qpb_clover_bri_dslash;
      	  } else {
      	    ov_params.g5_dslash_op = &qpb_gamma5_bri_dslash;	
      	    ov_params.dslash_op = &qpb_bri_dslash;	
      	  }
      	  break;
      	case QPB_DSLASH_STANDARD:
      	  if(c_sw) {
      	    ov_params.g5_dslash_op = &qpb_gamma5_clover_dslash;
      	    ov_params.dslash_op = &qpb_clover_dslash;
      	  } else {
      	    ov_params.g5_dslash_op = &qpb_gamma5_dslash;	
      	    ov_params.dslash_op = &qpb_dslash;	
      	  }
      	  break;
      	}

      ov_params.initialized = QPB_OVERLAP_INITIALIZED;

    }

  return;
}


void
qpb_overlap_Chebyshev_finalize()
{
  qpb_comm_halo_spinor_field_finalize();

  for(int i=0; i<OVERLAP_NUMB_TEMP_VECS; i++)
    {
      qpb_spinor_field_finalize(ov_temp_vecs[i]);
    }

  // for(int i=0; i<Chebyshev_Tn_numb_vecs; i++)
  for(int i=0; i<2; i++)
    {
      qpb_spinor_field_finalize(Chebyshev_Tn_vecs[i]);
    }

  free(Chebyshev_coeff);
  free(discrete_r_values);
  free(discrete_xk);
  
  if(which_dslash_op == QPB_DSLASH_STANDARD)
    {
      qpb_gauge_field_finalize(*(qpb_gauge_field *)ov_params.gauge_ptr);
    }

  ov_params.initialized = 0;

  return;
}


INLINE void
D_op(qpb_spinor_field y, qpb_spinor_field x)
{
  void *dslash_args[4];

  dslash_args[0] = ov_params.gauge_ptr;
  dslash_args[1] = &ov_params.m_bare;
  dslash_args[2] = &ov_params.clover;
  dslash_args[3] = &ov_params.c_sw;

  ov_params.dslash_op(y, x, dslash_args);

  return;
}


void
qpb_massive_overlap_Chebyshev(qpb_spinor_field y, qpb_spinor_field x)
{
  /* Implements: Dov,m(x) = (1-m/(2ρ))*Dov(x) + m x. */
  
  qpb_spinor_field z = ov_temp_vecs[0];

  qpb_double mass = ov_params.mass;
  qpb_double rho = ov_params.rho;

  qpb_massless_overlap_Chebyshev(z, x);

  qpb_complex a = {(1-mass/(2*rho)), 0.};
  qpb_complex b = {mass, 0.};
  qpb_spinor_axpby(y, a, z, b, x);

  return;
}


void
qpb_massless_overlap_Chebyshev(qpb_spinor_field y, qpb_spinor_field x)
{
  /* Implements: Dov(x) = x + γ5 sign(H(x)). */

  qpb_spinor_field z = ov_temp_vecs[1];

  qpb_Chebyshev_sign_function_of_H(z, x);
  qpb_spinor_gamma5(z, z);
  qpb_spinor_xpy(y, x, z);

  return;
}


void
qpb_Chebyshev_sign_function_of_H(qpb_spinor_field y, qpb_spinor_field x)
{
  /* Implements: sign(H(x)) = H(Sum_{n=0}^N c_n T_n(x)). */

  qpb_spinor_field Tn = ov_temp_vecs[2];
  qpb_spinor_field sum = ov_temp_vecs[3];

  qpb_spinor_field_set_zero(sum);
  for (int n=0; n < Chebyshev_Tn_numb_vecs; ++n)
  {
    qpb_Chebyshev_polynomial_term(Tn, x, n);
    qpb_spinor_axpy(sum, Chebyshev_coeff[n], Tn, sum);
  }

  qpb_overlap_H(y, sum);

  return;
}


void
qpb_Chebyshev_polynomial_term_without_caching(qpb_spinor_field y, qpb_spinor_field x, int n)
{
  /* Implements: T_{n=0}(X) = x, T_{n=1}(X) = X, 
        T_n(X) = 2*X(T_{n-1}(X)) - T_{n-2}(X)
    NOTE: Without storing an calculated results. */

  qpb_spinor_field temp = ov_temp_vecs[4];
  qpb_spinor_field Tnm1 = ov_temp_vecs[5];
  qpb_spinor_field Tn = ov_temp_vecs[6];

  qpb_spinor_xeqy(Tnm1, x);
  qpb_overlap_X(Tn, x);

  qpb_complex a = {2., 0.};
  qpb_complex b = {-1., 0.};
  for (int i = 1; i <= n; ++i)
  {
    qpb_spinor_xeqy(temp, Tn);
    qpb_overlap_X(y, Tn);
    qpb_spinor_axpby(Tn, a, y, b, Tnm1);
    qpb_spinor_xeqy(Tnm1, temp);
  }

  qpb_spinor_xeqy(y, Tn);

  return;
}


void
qpb_Chebyshev_polynomial_term(qpb_spinor_field y, qpb_spinor_field x, int n)
{
  /* Implements: T_{n=0}(X) = x, T_{n=1}(X) = X, 
        T_n(X) = 2*X(T_{n-1}(X)) - T_{n-2}(X)
     NOTE: The Chebyshev polynomial terms are calculated
     inside the weighted sum in increasing order,
     therefore no need to check if the last two previous degrees 
     have already been calculated. */ 

  if (n == 0)
  {
    qpb_spinor_xeqy(y, x);
    qpb_spinor_xeqy(Chebyshev_Tn_vecs[0], y);
  }
  else if(n == 1)
  {
    qpb_overlap_X(y, x);
    qpb_spinor_xeqy(Chebyshev_Tn_vecs[1], y);
  }
  else
  {
    qpb_spinor_field z = ov_temp_vecs[7];
    
    qpb_spinor_field Tnm1 = ov_temp_vecs[8];
    qpb_spinor_field Tn = ov_temp_vecs[9];

    // qpb_spinor_xeqy(Tnm1, Chebyshev_Tn_vecs[n-2]);
    // qpb_spinor_xeqy(Tn, Chebyshev_Tn_vecs[n-1]);

    qpb_spinor_xeqy(Tnm1, Chebyshev_Tn_vecs[0]);
    qpb_spinor_xeqy(Tn, Chebyshev_Tn_vecs[1]);

    qpb_complex a = {2., 0.};
    qpb_overlap_X(z, Tn);
    qpb_spinor_ax(Tn, a, z);
    qpb_spinor_xmy(y, Tn, Tnm1);
    // qpb_spinor_xeqy(Chebyshev_Tn_vecs[n], y);

    qpb_spinor_xeqy(Chebyshev_Tn_vecs[0], Chebyshev_Tn_vecs[1]);
    qpb_spinor_xeqy(Chebyshev_Tn_vecs[1], y);

  }

  return;
}


void
qpb_overlap_X(qpb_spinor_field y, qpb_spinor_field x)
{
  /* Implements: X = [2*H(H(x)) - (β^2+α^2)x]/(β^2-α^2). */

  qpb_spinor_field z = ov_temp_vecs[10];

  qpb_double alpha = ov_params.min_eigv;
  qpb_double beta = ov_params.max_eigv;

  qpb_double prefactor = 1./(beta*beta - alpha*alpha);
  qpb_complex a = {2*prefactor, 0.0};
  qpb_complex b = {-prefactor*(beta*beta + alpha*alpha), 0.0};
  
  qpb_overlap_H(y, x);
  qpb_overlap_H(z, y);
  
  qpb_spinor_axpby(y, a, z, b, x);

  return;
}


void
qpb_overlap_H(qpb_spinor_field y, qpb_spinor_field x)
{
  /* Implements: H = γ5(Kernel(x)). */

  // qpb_overlap_kernel(y, x);
  D_op(y, x); // D operator has its mass term already shifted by -1.
  qpb_spinor_gamma5(y, y);

  return;
}


void
qpb_overlap_kernel(qpb_spinor_field y, qpb_spinor_field x)
{
  /* Implements explicit construction of kernel: Kernel(x) = D(x) - (1+s)x. */

  qpb_spinor_field z = ov_temp_vecs[11];
  qpb_spinor_field w = ov_temp_vecs[12];

  qpb_double s = 0.;

  qpb_complex factor = {-(1.+s), 0.0};

  D_op(z, x); // Check mass term, no additional shifts!
  qpb_spinor_ax(w, factor, x);
  qpb_spinor_xmy(y, z, w);

  return;
}

/* SCALAR CHEBYSHEV POLYNOMIAL TERMS FUNCTIONS */

qpb_complex
expansion_Chebyshev_coeff_n(int n)
{
  qpb_double inverse_N = 1./(qpb_double) Chebyshev_Tn_numb_vecs;

  qpb_double prefactor = inverse_N;
  if (n != 0)
    prefactor *= 2;

  qpb_double sum = 0.;
  for (int k = 0; k < Chebyshev_Tn_numb_vecs; ++k)
  {
    // qpb_double xk = discrete_xk[k];
    // sum += discrete_r_values[k]*scalar_Chebyshev_polynomial_term(xk, n);
    sum += discrete_r_values[k]*scalar_Chebyshev_polynomial_term_with_caching(k, n);
  }
  qpb_complex result = {prefactor*sum, 0};

  return result;
}


qpb_double
Chebyshev_r(qpb_double x)
{
  qpb_double alpha = ov_params.min_eigv;
  qpb_double beta = ov_params.max_eigv;

  qpb_double result = sqrt(0.5*(beta*beta + alpha*alpha) + 0.5*x*(beta*beta - alpha*alpha));

  return 1./result;
}


qpb_double
scalar_Chebyshev_polynomial_term(qpb_double x, int n)
{
  qpb_double Tn;

  if (n == 0)
  {
    Tn = 1.;
  }
  else
  {
    qpb_double temp;
    qpb_double Tnm1 = 1.;
    Tn = x;

    for (int i = 1; i < n; ++i)
    {
      temp = Tn;
      Tn = 2*x*Tn - Tnm1;
      Tnm1 = temp;
    }
  }

  return Tn;
}

// qpb_double
// scalar_Chebyshev_polynomial_term_with_caching(qpb_double x, int n)
// {
//   qpb_double Tn;

//   if (n == 0)
//   {
//     Tn = 1.;
//   }
//   else
//   {
//     qpb_double temp;
//     qpb_double Tnm1 = 1.;
//     Tn = x;

//     for (int i = 1; i < n; ++i)
//     {
//       temp = Tn;
//       Tn = 2*x*Tn - Tnm1;
//       Tnm1 = temp;
//     }
//   }

//   return Tn;
// }


qpb_double
scalar_Chebyshev_polynomial_term_with_caching(int k, int n)
{
  qpb_double Tn;

  if (n == 0)
  {
    Tn = 1.;
    Chebyshev_TnM2_for_k_array[k] = Tn;
  }
  else if(n == 1)
  {
    Tn = discrete_xk[k];
    Chebyshev_TnM1_for_k_array[k] = Tn;
  }
  else
  {
    qpb_double TnM2, TnM1, x;
    TnM2 = Chebyshev_TnM2_for_k_array[k];
    TnM1 = Chebyshev_TnM1_for_k_array[k];
    x = discrete_xk[k];

    Tn = 2*x*TnM1 - TnM2;

    Chebyshev_TnM2_for_k_array[k] = Chebyshev_TnM1_for_k_array[k];
    Chebyshev_TnM1_for_k_array[k] = Tn;
  }

  return Tn;
}

/* EXTREME EIGENVALUES FUNCTIONS */

void
tridiag_eigenv(double *eig, double *a, double *b, int n)
{
  gsl_matrix *A = gsl_matrix_calloc(n, n);
  gsl_matrix_set (A, 0, 0, a[0]);
  gsl_matrix_set (A, 0, 0+1, b[0]);
  for(int i=1; i<n-1; i++)
    {
      gsl_matrix_set(A, i, i, a[i]);
      gsl_matrix_set(A, i, i+1, b[i]);
      gsl_matrix_set(A, i, i-1, b[i-1]);
    }
  gsl_matrix_set(A, n-1, n-1, a[n-1]);
  gsl_matrix_set(A, n-1, n-1-1, b[n-1-1]);

  gsl_vector *e = gsl_vector_alloc(n);
  gsl_eigen_symm_workspace *w = gsl_eigen_symm_alloc(n);
  gsl_eigen_symm(A, e, w);
  gsl_eigen_symm_free(w);
  gsl_matrix_free(A);

  gsl_sort_vector(e);

  for(int i=0; i<n; i++)
    eig[i] = gsl_vector_get(e, i);
  
  gsl_vector_free(e);
  return;
}


void
qpb_extreme_eigenvalues_of_H_squared(qpb_double *min_eigv, qpb_double *max_eigv, qpb_double epsilon, int max_iters)
{
  qpb_lanczos_init();

  qpb_double s=0.;
  qpb_clover_term clover_term = ov_params.clover;
  qpb_double c_sw = ov_params.c_sw;
  qpb_double mass = -1;//ov_params.mass;
  // qpb_double mass = 0.;//ov_params.mass;
  qpb_double kappa = 1./(2*mass+8.);
  void *solver_arg_links = ov_params.gauge_ptr;
  
  qpb_double *a, *b, *eig;
  a = qpb_alloc(sizeof(qpb_double)*max_iters);
  b = qpb_alloc(sizeof(qpb_double)*max_iters);
  eig = qpb_alloc(sizeof(qpb_double)*max_iters);

  qpb_lanczos(a, b, solver_arg_links, clover_term, kappa, c_sw, 1);
  qpb_double lambda = 0, dlambda, lambda0 = 1e3;
  int i = 0;
  for(i=1; 1<max_iters; i++)
    {
      qpb_lanczos(a, b, solver_arg_links, clover_term, kappa, c_sw, -1);
      tridiag_eigenv(eig, a, b, i+1);

      lambda = eig[i] / eig[0];
      dlambda = fabs(lambda - lambda0) / fabs(lambda + lambda0);
      if (i%100==0)
        print(" iter = %4d, CN = %e/%e = %e (change = %e, target = %e)\n", i+1, eig[i], eig[0], eig[i]/eig[0], dlambda, epsilon);
      if(dlambda < epsilon*0.5)
	      break;
      lambda0 = lambda;
    }

    *min_eigv = (qpb_double) eig[0];
    *max_eigv = (qpb_double) eig[i-1];

  return;
}