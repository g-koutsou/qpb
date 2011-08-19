#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_field.h>
#include <qpb_spinor_linalg.h>
#include <qpb_gauge_field.h>
#include <qpb_comm_halo_spinor_field.h>
#include <qpb_comm_halo_gauge_field.h>
#include <qpb_timebc_set_gauge_field.h>
#include <qpb_dslash_wrappers.h>
#include <qpb_stop_watch.h>

#define QPB_CONGRAD_NUMB_TEMP_VECS 4

qpb_spinor_field congrad_temp_vecs[QPB_CONGRAD_NUMB_TEMP_VECS];

void
qpb_congrad_init()
{
  for(int i=0; i<QPB_CONGRAD_NUMB_TEMP_VECS; i++)
    {
      congrad_temp_vecs[i] = qpb_spinor_field_init();
      qpb_spinor_field_set_zero(congrad_temp_vecs[i]);
    }
  qpb_comm_halo_spinor_field_init();
  return;
}

void
qpb_congrad_finalize()
{
  for(int i=0; i<QPB_CONGRAD_NUMB_TEMP_VECS; i++)
    {
      qpb_spinor_field_finalize(congrad_temp_vecs[i]);
    }
  qpb_comm_halo_spinor_field_finalize();
  return;
}

int
qpb_congrad(qpb_spinor_field x, qpb_spinor_field b, void * gauge,
	     qpb_clover_term clover, qpb_double kappa, qpb_double c_sw,
	     qpb_double epsilon, int max_iter)
{
  qpb_spinor_field p = congrad_temp_vecs[0];
  qpb_spinor_field r = congrad_temp_vecs[1];
  qpb_spinor_field y = congrad_temp_vecs[2];
  qpb_spinor_field w = congrad_temp_vecs[3];

  int iters = 0;
  const int n_echo = 1, n_reeval = 10;
  qpb_double res_norm, b_norm;
  qpb_complex_double alpha = {1, 0}, omega = {1, 0};
  qpb_complex_double beta, gamma;
  qpb_double mass = 1./(2.*kappa) - 4.;
  void (* dslash_func)() = NULL;

  /* set boundary condition in time
     !!! currently not implemented for diagonal links !!! */
  void * gauge_bc_ptr;
  qpb_gauge_field gauge_bc;
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


  void *dslash_args[] = 
    {
      gauge_bc_ptr,
      &mass,
      &clover,
      &c_sw
    };

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
  
  qpb_spinor_gamma5(r, b);
  dslash_func(p, r, dslash_args);
  qpb_spinor_xeqy(b, p);

  qpb_spinor_xdotx(&b_norm, b);
  dslash_func(p, x, dslash_args);
  dslash_func(r, p, dslash_args);
  qpb_spinor_xmy(r, b, r);
  qpb_spinor_xdotx(&gamma.re, r);
  gamma.im = 0;
  res_norm = gamma.re;
  qpb_spinor_xeqy(p, r);
  qpb_double t = qpb_stop_watch(0);
  for(iters=1; iters<max_iter; iters++)
    {
      if(res_norm / b_norm <= epsilon)
	break;
    
      dslash_func(y, p, dslash_args);
      dslash_func(w, y, dslash_args);

      qpb_spinor_xdoty(&omega, p, w);
      alpha = CDEV(gamma, omega);
      qpb_spinor_axpy(x, alpha, p, x);
      if(iters % n_reeval == 0) 
	{
	  dslash_func(y, x, dslash_args); 
	  dslash_func(w, y, dslash_args); 
	  qpb_spinor_xmy(r, b, w);
	}
      else
	{
	  alpha.re = -CDEVR(gamma, omega);
	  alpha.im = -CDEVI(gamma, omega);
	  qpb_spinor_axpy(r, alpha, w, r);
	}
      qpb_spinor_xdotx(&res_norm, r);
      if((iters % n_echo == 0))
	print(" iters = %8d, res = %e\n", iters, res_norm / b_norm);
      beta.re = res_norm / gamma.re;
      beta.im = 0.;
      qpb_spinor_axpy(p, beta, p, r);
      gamma.re = res_norm;
      gamma.im = 0.;
    }
  t = qpb_stop_watch(t);
  dslash_func(y, x, dslash_args);
  dslash_func(w, y, dslash_args);
  qpb_spinor_xmy(r, b, w);
  qpb_spinor_xdotx(&res_norm, r);

  if(iters==max_iter)
    {
      error(" !\n");
      error(" CG *did not* converge, after %d iterrations\n", iters);
      error(" residual = %e, relative = %e, t = %g secs\n", res_norm, res_norm / b_norm, t);
      error(" !\n");
      return -1;
    }

  print(" After %d iterrations CG converged\n", iters);
  print(" residual = %e, relative = %e, t = %g secs\n", res_norm, res_norm / b_norm, t);
  
  if(which_dslash_op == QPB_DSLASH_STANDARD)
    {
      qpb_gauge_field_finalize(gauge_bc);
    }

  return iters;
}
