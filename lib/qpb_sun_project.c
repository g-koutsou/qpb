#include <math.h>

#include <gsl/gsl_vector.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_eigen.h>
#include <gsl/gsl_complex.h>
#include <gsl/gsl_complex_math.h>
#include <gsl/gsl_multiroots.h>
#include <gsl/gsl_multimin.h>
#include <gsl/gsl_linalg.h>
#include <gsl/gsl_blas.h>

#include <qpb_types.h>

/*
  struct with function arguments, to be passed
  to the gsl minimizer
*/

struct func_params {
  qpb_double s[NC];
  qpb_double phi;
};

/*
  internal functions, called by the minimization function
 */
double 
func(const gsl_vector * th, void * params)
{
  qpb_double *s = ((struct func_params *) params) -> s;
  qpb_double phi = ((struct func_params *) params) -> phi;
  const qpb_double th0 = gsl_vector_get(th,0);
  const qpb_double th1 = gsl_vector_get(th,1);

  const qpb_double s0 = s[0] * cos( th0 );
  const qpb_double s1 = s[1] * cos( th1 );
  const qpb_double s2 = s[2] * cos( th0 + th1 + phi );

  return -(s0 + s1 + s2);
}

void 
dfunc(const gsl_vector * th, void * params, gsl_vector * g)
{
  qpb_double *s = ((struct func_params *) params) -> s;
  qpb_double phi = ((struct func_params *) params) -> phi;
  const qpb_double th0 = gsl_vector_get(th, 0);
  const qpb_double th1 = gsl_vector_get(th, 1);

  const qpb_double s0 = s[0] * sin( th0 );
  const qpb_double s1 = s[1] * sin( th1 );
  const qpb_double s2 = s[2] * sin( th0 + th1 + phi );

  gsl_vector_set(g, 0, (s0+s2));
  gsl_vector_set(g, 1, (s1+s2));
  return;
}

void 
funcdfunc(const gsl_vector * th, void * params, double * f, gsl_vector * g){
  qpb_double *s = ((struct func_params *) params) -> s;
  qpb_double phi = ((struct func_params *) params) -> phi;
  const qpb_double th0 = gsl_vector_get(th,0);
  const qpb_double th1 = gsl_vector_get(th,1);


  qpb_double s0 = s[0] * cos( th0 );
  qpb_double s1 = s[1] * cos( th1 );
  qpb_double s2 = s[2] * cos( th0 + th1 + phi );

  *f = -(s0 + s1 + s2);

  s0 = s[0] * sin( th0 );
  s1 = s[1] * sin( th1 );
  s2 = s[2] * sin( th0 + th1 + phi );

  gsl_vector_set(g,0,(s0+s2));
  gsl_vector_set(g,1,(s1+s2));
  return;
}

/*
  internal function used by get_theta_matrix(). Minimizes
  the function func(): 
  e0*cos(th0) + e1*cos(th1) + e2*cos(th0+th1+phi) for th0, th1
*/
void
minimize_for_thetas(gsl_vector *th, struct func_params *f_params)
{
  const int niter = 1000;
  const double eps = 1.e-3;
  const gsl_multimin_fdfminimizer_type *minimizer_type;
  gsl_multimin_fdfminimizer *minimizer;
  int status;
  size_t iter = 0;
  const size_t n = 2;
  gsl_multimin_function_fdf fdf = 
    {
      &func,
      &dfunc,
      &funcdfunc,
      n,
      (void *)f_params
    };
  minimizer_type = gsl_multimin_fdfminimizer_vector_bfgs2;
  minimizer = gsl_multimin_fdfminimizer_alloc (minimizer_type, 2);
  gsl_multimin_fdfminimizer_set (minimizer, &fdf, th, 100*eps, eps);
  do{
    iter++;
    status = gsl_multimin_fdfminimizer_iterate (minimizer);
    if(status)
      break;
    status = gsl_multimin_test_gradient (minimizer->gradient, eps);
  }while(status == GSL_CONTINUE && iter < niter);

  if(status == GSL_CONTINUE){
    fprintf(stderr," failed to find minimum in %s(), quitting\n", __func__);
    exit(-3);
  }

  gsl_vector_set (th, 0, gsl_vector_get (minimizer->x, 0));
  gsl_vector_set (th, 1, gsl_vector_get (minimizer->x, 1));

  gsl_multimin_fdfminimizer_free (minimizer);
  return;
}

/*
  internal function used by qpb_sun_project(). Gets the 
  diagonal matrix D, which contains the phases to be used 
  in the back-projection to SU(3)
 */
void
get_theta_matrix(gsl_matrix_complex *D, gsl_vector *S, qpb_double phi){
  qpb_double pi = 4. * atan2(1.0, 1.0);
  qpb_double theta_step = pi/2.0;
  qpb_double th_initial[NC-1] = {0, 0};
  qpb_double max_f = -1e10;
  gsl_vector *th_trial = gsl_vector_alloc(NC-1);
  struct func_params f_params;
  f_params.phi = phi;
  for(int i=0; i<NC; i++)
    f_params.s[i] = gsl_vector_get(S, i);

  for(qpb_double th1 = pi; th1 > -pi; th1-=theta_step)
    for(qpb_double th2 = pi; th2 > -pi; th2-=theta_step)
      {
	gsl_vector_set(th_trial, 0, th1);
	gsl_vector_set(th_trial, 1, th2);
	qpb_double f_trial = -func(th_trial, &f_params);
	if(f_trial > max_f){
	  max_f = f_trial;
	  th_initial[0] = gsl_vector_get(th_trial, 0);
	  th_initial[1] = gsl_vector_get(th_trial, 1);
	}
      }
  gsl_vector_set(th_trial, 0, th_initial[0]);
  gsl_vector_set(th_trial, 1, th_initial[1]);
  minimize_for_thetas(th_trial, &f_params);
  gsl_matrix_complex_set_zero(D);
  qpb_double th_sum = 0;
  for(int i=0; i<NC-1; i++)
    {
      gsl_matrix_complex_set(D, i, i, 
			     gsl_complex_polar(1., gsl_vector_get(th_trial, i)));
      th_sum += gsl_vector_get(th_trial, i);
    }

  gsl_matrix_complex_set(D, NC-1, NC-1, gsl_complex_polar (1., -phi-th_sum));
  gsl_vector_free(th_trial);
  return;
}

/*
  computes the svd of a complex matrix. Missing in gsl.
 */
int
svd(gsl_matrix_complex *A, gsl_matrix_complex *V, gsl_vector *S)
{
  int n = A->size1;
  gsl_eigen_hermv_workspace *gsl_work = gsl_eigen_hermv_alloc(n);
  gsl_matrix_complex *Asq = gsl_matrix_complex_alloc(n, n);
  gsl_complex zero = gsl_complex_rect(0., 0.);
  gsl_complex one = gsl_complex_rect(1., 0.);
  gsl_vector *e = gsl_vector_alloc(n);
  gsl_matrix_complex *U = gsl_matrix_complex_alloc(n, n);

  gsl_blas_zgemm(CblasNoTrans, CblasConjTrans, one, A, A, zero, Asq);  
  gsl_eigen_hermv(Asq, e, U, gsl_work);
  gsl_eigen_hermv_sort(e, U, GSL_EIGEN_SORT_VAL_DESC);

  gsl_blas_zgemm(CblasConjTrans, CblasNoTrans, one, A, A, zero, Asq);  
  gsl_eigen_hermv(Asq, e, V, gsl_work);
  gsl_eigen_hermv_sort(e, V, GSL_EIGEN_SORT_VAL_DESC);
  
  gsl_blas_zgemm(CblasNoTrans, CblasNoTrans, one, A, V, zero, Asq);  
  gsl_blas_zgemm(CblasConjTrans, CblasNoTrans, one, U, Asq, zero, A);
  for(int i=0; i<n; i++){
    gsl_complex x = gsl_matrix_complex_get(A, i, i);
    double phase = gsl_complex_arg(gsl_complex_mul_real(x, 1./sqrt(e->data[i])));
    gsl_vector_complex_view U_col = gsl_matrix_complex_column(U, i);
    gsl_vector_complex_scale(&U_col.vector, gsl_complex_polar(1., phase));
    gsl_vector_set(S, i, sqrt(gsl_vector_get(e, i)));
  }

  gsl_matrix_complex_memcpy(A, U);
  gsl_vector_free(e);
  gsl_matrix_complex_free(U);
  gsl_matrix_complex_free(Asq);
  gsl_eigen_hermv_free(gsl_work);
  return 0;
}

#if NC == 1
void 
qpb_sun_project(qpb_link *u, int n)
{
  for(int k=0; k<n; k++)
    {
      qpb_complex *u_ptr =(qpb_complex *)(u + k);
      qpb_double norm = CNORM(*u_ptr);
      *u_ptr = (qpb_complex){
	u_ptr->re/norm,
	u_ptr->im/norm
      };
    }
  return;
}

#elif NC == 3
void 
qpb_sun_project(qpb_link *u, int n)
{
/* #ifdef OPENMP */
/* #pragma omp parallel */
/* #endif   */
/*   { */
  gsl_eigen_hermv_workspace *gsl_work = gsl_eigen_hermv_alloc(NC);
  gsl_matrix_complex *B = gsl_matrix_complex_alloc(NC, NC);
  gsl_matrix_complex *A = gsl_matrix_complex_alloc(NC, NC);
  gsl_matrix_complex *V = gsl_matrix_complex_alloc(NC, NC);
  gsl_matrix_complex *U = gsl_matrix_complex_alloc(NC, NC);
  gsl_matrix_complex *D = gsl_matrix_complex_alloc(NC, NC);
  gsl_vector *S = gsl_vector_alloc(NC);
  gsl_permutation *perm = gsl_permutation_alloc(NC);

/* #ifdef OPENMP */
/* #pragma omp for */
/* #endif   */
  for(int k=0; k<n; k++){
    qpb_complex *a = (qpb_complex *)(u + k);
    
    for(int i=0; i<NC; i++)
      for(int j=0; j<NC; j++)
	gsl_matrix_complex_set(A, i, j, gsl_complex_rect(a[j + i*NC].re, a[j + i*NC].im));
    gsl_matrix_complex_memcpy(U, A);

    int sgn;
    gsl_linalg_complex_LU_decomp(U, perm, &sgn);
    gsl_complex det_A = gsl_linalg_complex_LU_det(U, sgn);    
    qpb_double phi = gsl_complex_arg(det_A);
    gsl_complex one = gsl_complex_rect(1., 0.);
    gsl_complex zero = gsl_complex_rect(0., 0.);

    gsl_matrix_complex_memcpy(U, A);
    svd(U, V, S);

    get_theta_matrix(D, S, phi);

    gsl_blas_zgemm(CblasNoTrans, CblasNoTrans, one, U, D, zero, B);
    gsl_blas_zgemm(CblasNoTrans, CblasConjTrans, one, B, V, zero, A);

    for(int i=0; i<NC; i++)
      for(int j=0; j<NC; j++){
        a[j + i*NC].re = GSL_REAL(gsl_matrix_complex_get(A, i, j));
        a[j + i*NC].im = GSL_IMAG(gsl_matrix_complex_get(A, i, j));
      }
  }
  gsl_matrix_complex_free(A);
  gsl_matrix_complex_free(B);
  gsl_matrix_complex_free(V);
  gsl_matrix_complex_free(U);
  gsl_matrix_complex_free(D);
  gsl_permutation_free(perm);
  gsl_vector_free(S);
  gsl_eigen_hermv_free(gsl_work);
  /* } */
  return;
}
#endif
