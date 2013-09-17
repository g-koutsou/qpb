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
#include <qpb_kl_defs.h>

#define OVERLAP_NUMB_TEMP_VECS 3
#define CG_NUMB_TEMP_VECS 4

static qpb_spinor_field ov_temp_vecs[OVERLAP_NUMB_TEMP_VECS];
static qpb_spinor_field cg_temp_vecs[CG_NUMB_TEMP_VECS];
static qpb_overlap_params ov_params;

void
qpb_overlap_kl_init(void * gauge, qpb_clover_term clover, qpb_double rho, qpb_double c_sw, qpb_double mass)
{
  if(ov_params.initialized != QPB_OVERLAP_INITIALIZED)
    {
      qpb_comm_halo_spinor_field_init();
      for(int i=0; i<OVERLAP_NUMB_TEMP_VECS; i++)
	{
	  ov_temp_vecs[i] = qpb_spinor_field_init();
	  qpb_spinor_field_set_zero(ov_temp_vecs[i]);
	}

      for(int i=0; i<CG_NUMB_TEMP_VECS; i++)
	{
	  cg_temp_vecs[i] = qpb_spinor_field_init();
	  qpb_spinor_field_set_zero(cg_temp_vecs[i]);
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
qpb_overlap_kl_finalize()
{
  qpb_comm_halo_spinor_field_finalize();
  for(int i=0; i<OVERLAP_NUMB_TEMP_VECS; i++)
    {
      qpb_spinor_field_finalize(ov_temp_vecs[i]);
    }
  for(int i=0; i<CG_NUMB_TEMP_VECS; i++)
    {
      qpb_spinor_field_finalize(cg_temp_vecs[i]);
    }
  
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

INLINE void
A_op(qpb_spinor_field y, qpb_spinor_field x)
{
  qpb_spinor_field z = ov_temp_vecs[0];
  void *dslash_args[4];
  dslash_args[0] = ov_params.gauge_ptr;
  dslash_args[1] = &ov_params.m_bare;
  dslash_args[2] = &ov_params.clover;
  dslash_args[3] = &ov_params.c_sw;
  ov_params.g5_dslash_op(z, x, dslash_args);
  ov_params.g5_dslash_op(y, z, dslash_args);
  return;
}

int
qpb_congrad_1p3A(qpb_spinor_field x, qpb_spinor_field b, qpb_double epsilon, int max_iter, int n_echo)
{  
  qpb_spinor_field p = cg_temp_vecs[0];
  qpb_spinor_field r = cg_temp_vecs[1];
  qpb_spinor_field y = cg_temp_vecs[2];
  qpb_spinor_field w = cg_temp_vecs[3];

  int n_reeval = 100;
  int iters = 0;
  qpb_double res_norm, b_norm;
  qpb_complex_double alpha = {1, 0}, omega = {1, 0};
  qpb_complex_double beta, gamma;
  qpb_complex_double three = {3.0, 0.0};
  qpb_spinor_xdotx(&b_norm, b);
  /* r = Ax */
  A_op(r, x);
  /* p = 3*Ax + x */
  qpb_spinor_axpy(p, three, r, x);
  /* r = b - (3*Ax + x) */
  qpb_spinor_xmy(r, b, p);
  qpb_spinor_xdotx(&gamma.re, r);
  gamma.im = 0;
  res_norm = gamma.re;
  qpb_spinor_xeqy(p, r);
  qpb_double t = qpb_stop_watch(0);
  for(iters=1; iters<max_iter; iters++)
    {
      if(res_norm / b_norm <= epsilon)
	break;
      /* w = Ap */
      A_op(w, p);
      /* y = 3*Ap + p */
      qpb_spinor_axpy(y, three, w, p);

      /* omega = dot(p, (1+3*A)p) */
      qpb_spinor_xdoty(&omega, p, y);
      /* alpha = dot(r, r)/omega */
      alpha = CDEV(gamma, omega);
      /* x <- x + alpha*p */
      qpb_spinor_axpy(x, alpha, p, x);
      if(iters % n_reeval == 0) 
	{
	  A_op(w, x);
	  qpb_spinor_axpy(y, three, w, x);
	  qpb_spinor_xmy(r, b, y);
	}
      else
	{
	  alpha.re = -CDEVR(gamma, omega);
	  alpha.im = -CDEVI(gamma, omega);
	  qpb_spinor_axpy(r, alpha, y, r);
	}
      qpb_spinor_xdotx(&res_norm, r);
      if((iters % n_echo == 0))
	print(" \t iters = %8d, res = %e\n", iters, res_norm / b_norm);

      beta.re = res_norm / gamma.re;
      beta.im = 0.;
      qpb_spinor_axpy(p, beta, p, r);
      gamma.re = res_norm;
      gamma.im = 0.;
    }
  t = qpb_stop_watch(t);
  A_op(w, x);
  qpb_spinor_axpy(y, three, w, x);
  qpb_spinor_xmy(r, b, y);
  qpb_spinor_xdotx(&res_norm, r);

  if(iters==max_iter)
    {
      error(" !\n");
      error(" CG *did not* converge, after %d iterrations\n", iters);
      error(" residual = %e, relative = %e, t = %g secs\n", res_norm, res_norm / b_norm, t);
      error(" !\n");
      return -1;
    }

  print(" \t After %d iters, CG converged, res = %e, relative = %e, t = %g secs\n", 
	iters, res_norm, res_norm / b_norm, t);
  
  return iters;
}

void
qpb_overlap_kl(qpb_spinor_field y, qpb_spinor_field x, 
	       enum qpb_kl_classes kl_class, int kl_iters, qpb_double epsilon, int max_iter)
{
  qpb_double mass = ov_params.mass;
  qpb_double rho = ov_params.rho;
  qpb_double factor = (1-mass/(2*rho));
  qpb_double mass_tilde = mass/factor;

  qpb_spinor_field z = ov_temp_vecs[1];
  qpb_spinor_field w = ov_temp_vecs[2];
  qpb_spinor_field_set_zero(z);
  switch(kl_class)
    {
    case KL_CLASS_11:
      if(kl_iters == 1) {
	int n_echo = 100;
	/* Compute z = [1+3*A]^-1 x */
	qpb_congrad_1p3A(z, x, epsilon, max_iter, n_echo);
	/* Multiply by 8 and add 1: 8*y+1 */
	qpb_complex eight = {8.0, 0.0};
	qpb_spinor_axpy(w,eight,z,x);
	/* Apply the kernel */
	D_op(z,w);
	/* Mutiply by 1/3 and add mass-term */
	qpb_complex one_third = {1.0/3.0, 0.0};
	qpb_complex m_term = {1.0+mass_tilde/rho, 0.0};
	qpb_spinor_axpby(w,one_third,z,m_term,x);
	/* Remove the "tilde": multiply by rho and "factor" */
	qpb_complex a = {factor*rho, 0.0};
	qpb_spinor_ax(y,a,w);
      }else{
	error(" Error in: %s, only one iteration currently implemented\n", __func__);
	exit(QPB_NOT_IMPLEMENTED_ERROR); 	
      }
      break;
    default:
      error(" Error in: %s, only KL11 currently implemented\n", __func__);
      exit(QPB_NOT_IMPLEMENTED_ERROR);
      break;
    }
  return;
}

void
qpb_gamma5_overlap_kl(qpb_spinor_field y, qpb_spinor_field x, 
		      enum qpb_kl_classes kl_class, int kl_iters, qpb_double epsilon, int max_iter)
{
  qpb_overlap_kl(y, x, kl_class, kl_iters, epsilon, max_iter);
  qpb_spinor_gamma5(y, y);
  return;
}
