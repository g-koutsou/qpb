#include <math.h>
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

#define QPB_MSCONGRAD_NUMB_TEMP_VECS 3
#define MAX_NUMB_SHIFTS 256

qpb_spinor_field mscongrad_temp_vecs[QPB_MSCONGRAD_NUMB_TEMP_VECS + MAX_NUMB_SHIFTS];

void
qpb_mscongrad_init(int numb_shifts)
{
  for(int i=0; i<QPB_MSCONGRAD_NUMB_TEMP_VECS+numb_shifts; i++)
    {
      mscongrad_temp_vecs[i] = qpb_spinor_field_init();
      qpb_spinor_field_set_zero(mscongrad_temp_vecs[i]);
    }
  qpb_comm_halo_spinor_field_init();
  return;
}

void
qpb_mscongrad_finalize(int numb_shifts)
{
  for(int i=0; i<QPB_MSCONGRAD_NUMB_TEMP_VECS+numb_shifts; i++)
    {
      qpb_spinor_field_finalize(mscongrad_temp_vecs[i]);
    }
  qpb_comm_halo_spinor_field_finalize();
  return;
}

/*
 * Original multi-shifted CG tracks solution with zero shift.
 * This version redefines the bare operator to be:  M <- M + s_min, 
 * i.e. adds the smallest shift. Thus we have one less shift, and so
 * we need "n_shift" number of p-vectors instead of "(n_shift+1)".
 */
int
qpb_mscongrad(qpb_spinor_field *x, qpb_spinor_field b, void * gauge,
	      qpb_clover_term clover, qpb_double kappa, int numb_shifts, qpb_double *sigmas,
	      qpb_double c_sw, qpb_double epsilon, int max_iter)
{
  int iters = 0;
  const int n_echo = 1, n_reeval = 10, n_check_conerged = 100000;

  qpb_spinor_field r = mscongrad_temp_vecs[0];
  qpb_spinor_field y = mscongrad_temp_vecs[1];
  qpb_spinor_field w = mscongrad_temp_vecs[2];

  /*
   *  Sort shifts in assending order
   */
  for(int i=0; i<numb_shifts; i++){
    for(int j=i; j<numb_shifts; j++){
      if(sigmas[j] < sigmas[i]){
	qpb_double swap = sigmas[i];
	sigmas[i] = sigmas[j];
	sigmas[j] = swap;
      }
    }
  }
  
  /*
  for(int s=0; s<numb_shifts; s++)
    {
      print(" %g\n", sigmas[s]);
    }
  */
  int ns = numb_shifts - 1;

  /*
   *  Offset shifts by smallest shift
   */
  qpb_complex c_sigma0 = (qpb_complex){sigmas[0], 0.};
  qpb_complex c_sigmas[ns];
  for(int s=1; s<numb_shifts; s++)
    c_sigmas[s-1] = (qpb_complex){sigmas[s] - sigmas[0], 0.};

  qpb_spinor_field p_s[ns];
  qpb_spinor_field p;

  p = mscongrad_temp_vecs[3];
  for(int s=0; s<ns; s++)
    p_s[s] = mscongrad_temp_vecs[4+s];
  
  qpb_double res_norm, b_norm;
  qpb_complex_double alpha_s[ns], alpha;
  qpb_complex_double beta_s[ns], beta0, beta1;
  qpb_complex_double zeta_s[ns][3];
  qpb_complex_double gamma, delta, omega;
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
  
  /* qpb_spinor_gamma5(r, b); */
  /* dslash_func(p[0], r, dslash_args); */
  /* qpb_spinor_xeqy(b, p[0]); */


  /*
   * Initialize
   */
  qpb_spinor_xdotx(&b_norm, b);
  qpb_spinor_xeqy(r, b);

  qpb_spinor_xeqy(p, b);
  for(int s=0; s<ns; s++)
    {
      qpb_spinor_xeqy(p_s[s], b);      
    }
  beta0 = (qpb_complex){1., 0.};
  alpha = (qpb_complex){0., 0.};

  for(int s=0; s<ns; s++)
    {
      zeta_s[s][0] = (qpb_complex){1., 0.};
      zeta_s[s][1] = (qpb_complex){1., 0.};
      alpha_s[s] = (qpb_complex){0., 0.};
    }

  qpb_spinor_xdotx(&res_norm, r);

  /* 
     Tracks whether we've converged for each 
     shift indipendantly
  */
  int converged[ns];
  for(int s=0; s<ns; s++)
    converged[s] = 0;

  qpb_double t = qpb_stop_watch(0);
  for(iters=1; iters<max_iter; iters++)
    {
      /*
       * res_norm is the residual of the zero-shift solution
       */
      if(res_norm / b_norm <= epsilon)
	break;
    
      /*
       * D^+ D on p[0] and add min(shift)
       */
      dslash_func(w, p, dslash_args);
      dslash_func(y, w, dslash_args);

      qpb_spinor_axpy(w, c_sigma0, p, y);

      qpb_spinor_xdoty(&delta, p, w);
      gamma = (qpb_complex){res_norm, 0.};
      beta1 = CNEGATE(CDEV(gamma, delta));
      
      /*
       * Compute the zetas, betas and update x
       */
      for(int s=0; s<ns; s++)
	{
	  qpb_complex one = (qpb_complex){1.0, 0.0};
	  qpb_complex c1 = CMUL(zeta_s[s][0], CMUL(zeta_s[s][1], beta0));
	  qpb_complex c2 = CMUL(CMUL(CSUB(zeta_s[s][0], zeta_s[s][1]), beta1), alpha);
	  qpb_complex c3 = CMUL(zeta_s[s][0], CMUL(beta0, (CSUB(one, CMUL(c_sigmas[s], beta1)))));
	  
	  zeta_s[s][2] = CDEV(c1, (CADD(c2, c3)));
	  beta_s[s] = CMUL(beta1, CDEV(zeta_s[s][2], zeta_s[s][1]));
	  
	  /*** 
	       x[0] is the solution, to the modified operator D^+D + shift0, 
	       so there are ns+1 elements in x[], x[1] corresponds to c_sigmas[0], etc.
	  ***/
	  if(!converged[s])
	    qpb_spinor_axpy(x[s+1], CNEGATE(beta_s[s]), p_s[s], x[s+1]); 
	}
      qpb_spinor_axpy(x[0], CNEGATE(beta1), p, x[0]); 

      /*
       * Update the residual
       */
      if(iters % n_reeval == 0)
	{
	  dslash_func(w, x[0], dslash_args);
	  dslash_func(y, w, dslash_args);
	  qpb_spinor_axpy(y, c_sigma0, x[0], y);
	  qpb_spinor_xmy(r, b, y);
	}
      else
	{
	  qpb_spinor_axpy(r, beta1, w, r);
	}
      qpb_spinor_xdotx(&omega.re, r);
      omega.im = 0.;
      alpha = CDEV(omega, gamma);
      res_norm = omega.re;

      /* 
       * compute alpha_s and update p-vector 
       */
      for(int s=0; s<ns; s++)
	{
	  alpha_s[s] = CMUL(alpha, CDEV(CMUL(zeta_s[s][2], beta_s[s]), CMUL(zeta_s[s][1], beta1)));
	  qpb_spinor_axpby(p_s[s], zeta_s[s][2], r, alpha_s[s], p_s[s]);
	}
    
      qpb_spinor_axpy(p, alpha, p, r);
      if(iters%n_echo == 0)
	print(" iters = %8d, res = %e\n", iters, res_norm / b_norm);

      beta0 = beta1;
      for(int s=0; s<ns; s++)
	{
	  zeta_s[s][0] = zeta_s[s][1];
	  zeta_s[s][1] = zeta_s[s][2];
	}      

      /*
	Check if one of the shifts has converged
       */
      if(iters % n_check_conerged == 0)
	for(int s=0; s<ns; s++)
	  if(!converged[s])
	    {
	      qpb_double p_norm;
	      qpb_spinor_xdotx(&p_norm, p_s[s]);
	      if(CNORM2(beta_s[s])*p_norm < epsilon)
		{
		  qpb_complex shift = (qpb_complex){sigmas[s+1], 0.};
		  qpb_double res_s;
		  dslash_func(y, x[s+1], dslash_args);
		  dslash_func(w, y, dslash_args);
		  qpb_spinor_axpy(w, shift, x[s+1], w);
		  qpb_spinor_xmy(y, b, w);
		  qpb_spinor_xdotx(&res_s, y);
		  if(res_s / b_norm <= epsilon)
		    converged[s] = 1;
		  
		}	    
	    }
    }
  t = qpb_stop_watch(t);
  qpb_double res_s[ns];

  dslash_func(y, x[0], dslash_args);
  dslash_func(w, y, dslash_args);
  qpb_spinor_axpy(w, c_sigma0, x[0], w);
  qpb_spinor_xmy(r, b, w);
  qpb_spinor_xdotx(&res_norm, r);
  for(int s=0; s<ns; s++)
    {
      qpb_complex shift = (qpb_complex){sigmas[s+1], 0.};
      dslash_func(y, x[s+1], dslash_args);
      dslash_func(w, y, dslash_args);
      qpb_spinor_axpy(w, shift, x[s+1], w);
      qpb_spinor_xmy(r, b, w);
      qpb_spinor_xdotx(&res_s[s], r);
    }

  if(iters==max_iter)
    {
      error(" !\n");
      error(" msCG *did not* converge, after %d iterrations\n", iters);
      error(" residual = %e, relative = %e, t = %g secs\n", res_norm, res_norm / b_norm, t);
      error(" !\n");
      return -1;
    }

  print(" After %d iterrations msCG converged, t = %g secs\n", iters, t);
  print(" Shift = %10g, residual = %e, relative = %e\n", sigmas[0], res_norm, res_norm / b_norm);
  for(int s=0; s<ns; s++)
    print(" Shift = %10g, residual = %e, relative = %e\n", sigmas[s+1], res_s[s], res_s[s] / b_norm);
  
  if(which_dslash_op == QPB_DSLASH_STANDARD)
    {
      qpb_gauge_field_finalize(gauge_bc);
    }

  return iters;
}
