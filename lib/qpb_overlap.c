#include <qpb_types.h>
#include <qpb_errors.h>
#include <qpb_globals.h>
#include <qpb_spinor_field.h>
#include <qpb_spinor_linalg.h>
#include <qpb_gauge_field.h>
#include <qpb_comm_halo_spinor_field.h>
#include <qpb_comm_halo_gauge_field.h>
#include <qpb_timebc_set_gauge_field.h>
#include <qpb_dslash_wrappers.h>
#include <qpb_stop_watch.h>
#include <qpb_kl_defs.h>

static void (* dslash_func)();

/* set boundary condition in time
   !!! currently not implemented for diagonal links !!! */
static void * gauge_bc_ptr;
static qpb_spinor_field temp_vecs[4];
/*
 * Finds x in:
 *
 * x = (1+3*A)^-1(b)
 *
 * with A = g5Dg5D
 */
int
qpb_congrad_kl11_inner(qpb_spinor_field x, qpb_spinor_field b,
		       qpb_clover_term clover, qpb_double rho, qpb_double c_sw,
		       qpb_double epsilon, int max_iter, int n_echo)
{
  
  qpb_spinor_field p = temp_vecs[0];
  qpb_spinor_field r = temp_vecs[1];
  qpb_spinor_field y = temp_vecs[2];
  qpb_spinor_field w = temp_vecs[3];
  
  int n_reeval = 100;
  int iters = 0;
  qpb_double res_norm, b_norm;
  qpb_complex_double alpha = {1, 0}, omega = {1, 0};
  qpb_complex_double beta, gamma;
  qpb_double m_bare = rho;

  void * dslash_args[4];
  dslash_args[0] = gauge_bc_ptr;
  dslash_args[1] = &m_bare;
  dslash_args[2] = &clover;
  dslash_args[3] = &c_sw;
  
  qpb_spinor_xdotx(&b_norm, b);
  /* r = Ax */
  dslash_func(p, x, dslash_args);
  dslash_func(r, p, dslash_args);
  /* p = 3*Ax + x */
  qpb_spinor_axpy(p, (qpb_complex){3.0, 0.0}, r, x);
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
      dslash_func(y, p, dslash_args);
      dslash_func(w, y, dslash_args);

      /* y = 3*Ap + p */
      qpb_spinor_axpy(y, (qpb_complex){3.0, 0.0}, w, p);

      /* omega = dot(p, (1+3*A)p) */
      qpb_spinor_xdoty(&omega, p, y);
      /* alpha = dot(r, r)/omega */
      alpha = CDEV(gamma, omega);
      /* x <- x + alpha*p */
      qpb_spinor_axpy(x, alpha, p, x);
      if(iters % n_reeval == 0) 
	{
	  dslash_func(y, x, dslash_args); 
	  dslash_func(w, y, dslash_args); 
	  qpb_spinor_axpy(y, (qpb_complex){3.0, 0.0}, w, p);
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
  dslash_func(y, x, dslash_args);
  dslash_func(w, y, dslash_args);
  qpb_spinor_axpy(y, (qpb_complex){3.0, 0.0}, w, x);
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
qpb_overlap_apply(qpb_spinor_field y, qpb_spinor_field x, void * gauge, 
		  qpb_clover_term clover, qpb_double rho, qpb_double mass, qpb_double c_sw, 
		  enum qpb_kl_classes kl_class, int kl_iters,
		  qpb_double epsilon, int max_iter)
{
  qpb_gauge_field gauge_bc;
  qpb_comm_halo_spinor_field_init();
  if(which_dslash_op == QPB_DSLASH_STANDARD)
    {
      gauge_bc = qpb_gauge_field_init();
      qpb_timebc_set_gauge_field(gauge_bc, *(qpb_gauge_field *)gauge, problem_params.timebc);
      gauge_bc_ptr = (void *)&gauge_bc;
    }
  else
    {
      gauge_bc_ptr = gauge;
    }

  qpb_double m_bare = -rho;
  void * dslash_args[4];
  dslash_args[0] = gauge_bc_ptr;
  dslash_args[1] = &m_bare;
  dslash_args[2] = &clover;
  dslash_args[3] = &c_sw;
  
  switch(which_dslash_op)
    {
    case QPB_DSLASH_BRILLOUIN:
      if(c_sw)
	dslash_func = &qpb_gamma5_clover_bri_dslash;
      else
	dslash_func = &qpb_gamma5_bri_dslash;	
      break;
    case QPB_DSLASH_STANDARD:
      if(c_sw)
	dslash_func = &qpb_gamma5_clover_dslash;
      else
	dslash_func = &qpb_gamma5_dslash;	
      break;
    }

  qpb_double factor = (1-mass/(2*rho));
  qpb_double mass_tilde = mass/factor;

  switch(kl_class)
    {
    case KL_CLASS_11:
      if(kl_iters != 1)
	{
	  error(" Error in: %s, only one iteration currently implemented\n", __func__);
	  exit(QPB_NOT_IMPLEMENTED_ERROR); 
	}

      for(int i=0; i<4; i++)
	{
	  temp_vecs[i] = qpb_spinor_field_init();
	  qpb_spinor_field_set_zero(temp_vecs[i]);
	}

      qpb_spinor_field x_tilde = qpb_spinor_field_init();
      qpb_spinor_field_set_zero(x_tilde);
      int n_echo = 100;
      /* Compute x_tilde = [1+3*A]^-1 x */
      qpb_congrad_kl11_inner(x_tilde, x, clover, -rho, c_sw, epsilon, max_iter, n_echo);
      /* Apply: D(3+A) + (1+m_tilde/rho)(1+3A) on x_tilde */
      qpb_spinor_field oD_3pAx = temp_vecs[0];
      qpb_spinor_field o1p3Ax = temp_vecs[1];
      qpb_spinor_field Ax = temp_vecs[2];
      qpb_spinor_field w = temp_vecs[3];
      dslash_func(w, x_tilde, dslash_args);
      dslash_func(Ax, w, dslash_args);
      /* w = (3+A) x_tilde */
      qpb_spinor_axpy(w, (qpb_complex){3.0, 0.0}, x_tilde, Ax);
      /* oD_3pAx = g5(g5D(w)) */
      dslash_func(y, w, dslash_args);
      qpb_spinor_gamma5(oD_3pAx, y);
      /* o1p3Ax = (1+3*A) x_tilde */
      qpb_spinor_axpy(o1p3Ax, (qpb_complex){3.0, 0.0}, Ax, x_tilde);
      /* y = oD_3pAx + (1+m_tilde/rho)*o1p3Ax */
      qpb_spinor_axpy(y, (qpb_complex){1+mass_tilde/rho, 0}, o1p3Ax, oD_3pAx);
      /* y is now equal to 1/rho b_tilde. We want y = b, with b_tilde = b/(1-m/(2*rho)) */
      qpb_spinor_ax(y, (qpb_complex){rho*factor,0}, y);

      qpb_spinor_field_finalize(x_tilde);
      for(int i=0; i<4; i++)
	qpb_spinor_field_finalize(temp_vecs[i]);
      break;
    default:
      error(" Error in: %s, only KL11 currently implemented\n", __func__);
      exit(QPB_NOT_IMPLEMENTED_ERROR);
      break;
    }
  

  if(which_dslash_op == QPB_DSLASH_STANDARD)
    {
      qpb_gauge_field_finalize(gauge_bc);
    }

  qpb_comm_halo_spinor_field_finalize();
  return;
}
