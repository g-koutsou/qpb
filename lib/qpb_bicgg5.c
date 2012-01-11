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

#define QPB_BICGG5_NUMB_TEMP_VECS 4

qpb_spinor_field bicgg5_temp_vecs[QPB_BICGG5_NUMB_TEMP_VECS];

void
qpb_bicgg5_init()
{
  for(int i=0; i<QPB_BICGG5_NUMB_TEMP_VECS; i++)
    {
      bicgg5_temp_vecs[i] = qpb_spinor_field_init();
      qpb_spinor_field_set_zero(bicgg5_temp_vecs[i]);
    }
  qpb_comm_halo_spinor_field_init();
  return;
}

void
qpb_bicgg5_finalize()
{
  for(int i=0; i<QPB_BICGG5_NUMB_TEMP_VECS; i++)
    {
      qpb_spinor_field_finalize(bicgg5_temp_vecs[i]);
    }
  qpb_comm_halo_spinor_field_finalize();
  return;
}

/*
 * BiCGγ5, as expressed in hep-lat/9509082
 */
int
qpb_bicgg5(qpb_spinor_field x, qpb_spinor_field b, void * gauge,
	     qpb_clover_term clover, qpb_double kappa, qpb_double c_sw,
	     qpb_double epsilon, int max_iter)
{
  qpb_spinor_field r = bicgg5_temp_vecs[0];
  qpb_spinor_field p = bicgg5_temp_vecs[1];
  qpb_spinor_field Ap = bicgg5_temp_vecs[2];
  qpb_spinor_field x0 = bicgg5_temp_vecs[3]; /* remembers the closest
						solution in the iterations */

  int iters = 1;
  const int n_echo = 1, n_reeval = 50, n_restart_after = 125;
  qpb_double res_norm, b_norm;
  qpb_complex_double delta0, delta1, gamma, omega;
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
	dslash_func = &qpb_clover_bri_dslash;
      else
	dslash_func = &qpb_bri_dslash;	
      break;
    case QPB_DSLASH_STANDARD:
      if(c_sw)
	dslash_func = &qpb_clover_dslash;
      else
	dslash_func = &qpb_dslash;	
      break;
    }
  
  {
    qpb_double xnorm;
    qpb_spinor_xdotx(&xnorm, x);
    if(xnorm == 0)
      qpb_spinor_xeqy(x, b);
  }

  int restart = 0;
  qpb_double t = qpb_stop_watch(0);
  do {
    qpb_double res_norm0 = 1e8; /* keeps track of the smallest residual */
    int iter_res_norm0 = iters; /* the iteration at which res_norm0 was reached */
    restart = 0;

    dslash_func(p, x, dslash_args);
    qpb_spinor_xmy(r, b, p);
    qpb_spinor_xeqy(p, r);
    qpb_spinor_xdotg5y(&delta0, r, r);
    
    qpb_spinor_xdotx(&b_norm, b);
    qpb_spinor_xdotx(&res_norm, r);
    for(; iters<max_iter; iters++)
      {
	if(res_norm / b_norm <= epsilon)
	  break;
    
	dslash_func(Ap, p, dslash_args);
	qpb_spinor_xdotg5y(&gamma, p, Ap);
	omega = CDEV(delta0, gamma);

	qpb_spinor_axpy(x, omega, p, x);
	if(iters % n_reeval == 0) 
	  {
	    dslash_func(r, x, dslash_args); 
	    qpb_spinor_xmy(r, b, r);
	  }
	else
	  {
	    omega = CNEGATE(omega);
	    qpb_spinor_axpy(r, omega, Ap, r);
	    omega = CNEGATE(omega);
	  }
	qpb_spinor_xdotx(&res_norm, r);
	if((iters % n_echo == 0))
	  print(" iters = %8d, res = %e\n", iters, res_norm / b_norm);

	if(res_norm < res_norm0)
	  {
	    res_norm0 = res_norm;
	    iter_res_norm0 = iters;
	    qpb_spinor_xeqy(x0, x);
	  }
	qpb_spinor_xdotg5y(&delta1, r, r);
	gamma = CDEV(delta1, delta0);
	qpb_spinor_axpy(p, gamma, p, r);
	delta0 = delta1;
	
	if(iters > iter_res_norm0 + n_restart_after)
	  {
	    qpb_spinor_xeqy(x, x0);
	    restart = 1;
	    print(" Restarting: iter = %8d, res = %e\n", iter_res_norm0, res_norm0);
	    break;
	  }
      }
  } while( restart );
  
  t = qpb_stop_watch(t);
  dslash_func(r, x, dslash_args);
  qpb_spinor_xmy(r, b, r);
  qpb_spinor_xdotx(&res_norm, r);

  if(iters==max_iter)
    {
      error(" !\n");
      error(" BiCGγ5 *did not* converge, after %d iterrations\n", iters);
      error(" residual = %e, relative = %e, t = %g secs\n", res_norm, res_norm / b_norm, t);
      error(" !\n");
      return -1;
    }

  print(" After %d iterrations BiCGγ5 converged\n", iters);
  print(" residual = %e, relative = %e, t = %g secs\n", res_norm, res_norm / b_norm, t);
  
  if(which_dslash_op == QPB_DSLASH_STANDARD)
    {
      qpb_gauge_field_finalize(gauge_bc);
    }

  return iters;
}
