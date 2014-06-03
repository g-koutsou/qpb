#include <string.h>
#include <math.h>
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_alloc.h>
#include <qpb_spinor_field.h>
#include <qpb_spinor_linalg.h>
#include <qpb_gauge_field.h>
#include <qpb_bicgstab.h>
#include <qpb_comm_halo_spinor_field.h>
#include <qpb_comm_halo_gauge_field.h>
#include <qpb_timebc_set_gauge_field.h>
#include <qpb_dslash_wrappers.h>
#include <qpb_stop_watch.h>
#include <qpb_kl_defs.h>

#define QPB_BICGSTAB_NUMB_TEMP_VECS 7
#define QPB_OP_NUMB_TEMP_VECS 6
#define QPB_MSCONGRAD_NUMB_TEMP_VECS 3
#define MAX_NUMB_SHIFTS 256
#define NUMB_SHIFTS 4

static qpb_spinor_field mscongrad_temp_vecs[QPB_MSCONGRAD_NUMB_TEMP_VECS + MAX_NUMB_SHIFTS];
static char out_pre[QPB_MAX_STRING];
static int precond, n_echo;
static qpb_spinor_field bicgstab_temp_vecs[QPB_BICGSTAB_NUMB_TEMP_VECS];
static qpb_spinor_field op_temp_vecs[QPB_OP_NUMB_TEMP_VECS];
static qpb_overlap_params ov_params;
static qpb_double epsilon;
static qpb_double sigmas[] = {0.03109120412576338,
			      0.3333333333333333,
			      1.420276625461206,
			      7.548632170413030};
static qpb_complex coeffs[] = {{0.2291313786946141, 0.0},
			       {0.2962962962962963, 0.0},
			       {0.5378392501024903, 0.0},
			       {1.8996960378695620, 0.0}};

INLINE void
A(qpb_spinor_field out, qpb_spinor_field in)
{
  qpb_spinor_field y = op_temp_vecs[0];  
  void *dslash_args[4];
  dslash_args[0] = ov_params.gauge_ptr;
  dslash_args[1] = &ov_params.m_bare;
  dslash_args[2] = &ov_params.clover;
  dslash_args[3] = &ov_params.c_sw;
  ov_params.g5_dslash_op(y,in,dslash_args);
  ov_params.g5_dslash_op(out,y,dslash_args);
  return;
}

INLINE void
D(qpb_spinor_field out, qpb_spinor_field in)
{
  void *dslash_args[4];
  dslash_args[0] = ov_params.gauge_ptr;
  dslash_args[1] = &ov_params.m_bare;
  dslash_args[2] = &ov_params.clover;
  dslash_args[3] = &ov_params.c_sw;
  ov_params.dslash_op(out,in,dslash_args);
  return;
}

INLINE void
mscg(qpb_spinor_field x[NUMB_SHIFTS], qpb_spinor_field b, int max_iter) {
  int iters = 0;
  const int n_echo = 25, n_reeval = 100, n_check_conerged = 100000;

  qpb_spinor_field r = mscongrad_temp_vecs[0];
  qpb_spinor_field y = mscongrad_temp_vecs[1];
  qpb_spinor_field w = mscongrad_temp_vecs[2];

  qpb_spinor_field_set_zero(r);
  qpb_spinor_field_set_zero(y);
  qpb_spinor_field_set_zero(w);
  
  for(int i=0; i<NUMB_SHIFTS; i++)
    qpb_spinor_field_set_zero(x[i]);
    

  /*
   *  Sort shifts in assending order
   */
  for(int i=0; i<NUMB_SHIFTS; i++){
    for(int j=i; j<NUMB_SHIFTS; j++){
      if(sigmas[j] < sigmas[i]){
	qpb_double swap = sigmas[i];
	sigmas[i] = sigmas[j];
	sigmas[j] = swap;
      }
    }
  }
  
  /*
  for(int s=0; s<NUMB_SHIFTS; s++)
    {
      print(" %g\n", sigmas[s]);
    }
  */
  int ns = NUMB_SHIFTS - 1;

  /*
   *  Offset shifts by smallest shift
   */
  qpb_complex c_sigma0 = (qpb_complex){sigmas[0], 0.};
  qpb_complex c_sigmas[ns];
  for(int s=1; s<NUMB_SHIFTS; s++)
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
      A(y,p);
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
	  A(y,x[0]);
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
	print("\t MS: iters = %8d, res = %e\n", iters, res_norm / b_norm);

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
		  A(w, x[s+1]);
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
  A(w, x[0]);
  qpb_spinor_axpy(w, c_sigma0, x[0], w);
  qpb_spinor_xmy(r, b, w);
  qpb_spinor_xdotx(&res_norm, r);
  for(int s=0; s<ns; s++)
    {
      qpb_complex shift = (qpb_complex){sigmas[s+1], 0.};
      A(w, x[s+1]);
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
      return;
    }

  print("\t MS: After %d iterrations msCG converged, t = %g secs\n", iters, t);
  print("\t\t Shift = %10g, residual = %e, relative = %e\n", sigmas[0], res_norm, res_norm / b_norm);
  for(int s=0; s<ns; s++)
    print("\t\t Shift = %10g, residual = %e, relative = %e\n", sigmas[s+1], res_s[s], res_s[s] / b_norm);

  return;
}

INLINE void
Op(qpb_spinor_field out, qpb_spinor_field in)
{
  qpb_double mass = ov_params.mass;
  qpb_double rho = ov_params.rho;
  qpb_double mass_tilde = mass/(1-mass/(2*rho));
  qpb_complex mt = {(1+mass_tilde/rho), 0};
  qpb_spinor_field y[NUMB_SHIFTS] = {op_temp_vecs[1],
				     op_temp_vecs[2],
				     op_temp_vecs[3],
				     op_temp_vecs[4]};
  qpb_spinor_field z = op_temp_vecs[5];
  mscg(y,in,10000);
  qpb_spinor_axpby(z,coeffs[0],y[0],(qpb_complex){1.0/9.0,0.0},in);
  qpb_spinor_axpy(z,coeffs[1],y[1],z);
  qpb_spinor_axpy(z,coeffs[2],y[2],z);
  qpb_spinor_axpy(z,coeffs[3],y[3],z);
  D(out,z);
  qpb_spinor_axpy(out,mt,in,out);
  return;
}

void
qpb_bicgstab_kl44_rational_init(void * gauge, qpb_clover_term clover, 
				qpb_double rho, qpb_double c_sw, qpb_double mass, int precondition,
				char output_prefix[], int echo_freq)
{
  if(precondition)
    precond = 1;
  else
    precond = 0;
  
  n_echo = echo_freq;
  strcpy(out_pre, output_prefix);  

  for(int i=0; i<QPB_MSCONGRAD_NUMB_TEMP_VECS+NUMB_SHIFTS; i++)
    {
      mscongrad_temp_vecs[i] = qpb_spinor_field_init();
      qpb_spinor_field_set_zero(mscongrad_temp_vecs[i]);
    }

  for(int i=0; i<QPB_BICGSTAB_NUMB_TEMP_VECS; i++)
    {
      bicgstab_temp_vecs[i] = qpb_spinor_field_init();
      qpb_spinor_field_set_zero(bicgstab_temp_vecs[i]);
    }

  for(int i=0; i<QPB_OP_NUMB_TEMP_VECS; i++)
    {
      op_temp_vecs[i] = qpb_spinor_field_init();
      qpb_spinor_field_set_zero(op_temp_vecs[i]);
    }

  if(ov_params.initialized != QPB_OVERLAP_INITIALIZED)
    {
      qpb_comm_halo_spinor_field_init();
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
qpb_bicgstab_kl44_rational_finalize()
{ 
  for(int i=0; i<QPB_BICGSTAB_NUMB_TEMP_VECS; i++)
    {
      qpb_spinor_field_finalize(bicgstab_temp_vecs[i]);
    }
  for(int i=0; i<QPB_MSCONGRAD_NUMB_TEMP_VECS+NUMB_SHIFTS; i++)
    {
      qpb_spinor_field_finalize(mscongrad_temp_vecs[i]);
    }
  for(int i=0; i<QPB_OP_NUMB_TEMP_VECS; i++)
    {
      qpb_spinor_field_finalize(op_temp_vecs[i]);
    }
  if(which_dslash_op == QPB_DSLASH_STANDARD)
    {
      qpb_gauge_field_finalize(*(qpb_gauge_field *)ov_params.gauge_ptr);
    }
  ov_params.initialized = 0;
  qpb_comm_halo_spinor_field_finalize();
  return;
}

int
qpb_bicgstab_kl44_rational(qpb_spinor_field x, qpb_spinor_field b, qpb_double eps_in, int max_iter)
{
  epsilon = eps_in;
  qpb_spinor_field r0 = bicgstab_temp_vecs[0];
  qpb_spinor_field r = bicgstab_temp_vecs[1];
  qpb_spinor_field p = bicgstab_temp_vecs[2];
  qpb_spinor_field s = bicgstab_temp_vecs[3];
  qpb_spinor_field b_tilde = bicgstab_temp_vecs[4];
  // For preconditioned version
  qpb_spinor_field q = bicgstab_temp_vecs[5];
  qpb_spinor_field t = bicgstab_temp_vecs[6];

  int iters = 0;
  const int n_reeval = 200;
  qpb_double res_norm, b_norm;
  qpb_complex_double alpha = {1, 0}, omega = {1, 0}, rho_new = {1, 0};
  qpb_complex_double beta, rho_old;
  qpb_double rho_ov = ov_params.rho;
  qpb_double mass = ov_params.mass;  
  qpb_double factor = 1 - mass / (2*rho_ov);
  qpb_spinor_field_set_zero(x);
  qpb_spinor_field_set_zero(p);
  qpb_spinor_field_set_zero(q);
  qpb_spinor_field_set_zero(s);
  qpb_spinor_field_set_zero(t);
  qpb_spinor_ax(b_tilde, (qpb_complex){1.0/(rho_ov*factor), 0.0}, b);
  qpb_spinor_xdotx(&b_norm, b_tilde);
  qpb_spinor_xeqy(r, b_tilde);
  qpb_spinor_xeqy(r0, r);
  qpb_spinor_xdotx(&res_norm, r);
  qpb_double secs = qpb_stop_watch(0);
  for(iters=1; iters<max_iter; iters++)
    {
      if((iters % n_echo == 0))
	print("%s iters = %8d, res = %e\n", out_pre, iters, res_norm/b_norm);

      rho_old = rho_new;
      qpb_spinor_xdoty(&rho_new, r0, r);
      beta = CMUL((CDEV(rho_new, rho_old)), (CDEV(alpha, omega)));
      qpb_spinor_axpy(p, beta, p, r);
      qpb_spinor_axpy(p, CNEGATE(CMUL(beta,omega)), q, p);
      Op(q, p);
      qpb_complex_double r0q = {0.,0.};
      qpb_spinor_xdoty(&r0q, r0, q);
      alpha = CDEV(rho_new,r0q);
      qpb_spinor_axpy(s, CNEGATE(alpha), q, r);
      Op(t, s);
      qpb_complex_double tt = {0.,0.};
      qpb_complex_double ts = {0.,0.};      
      qpb_spinor_xdoty(&ts, t, s);
      qpb_spinor_xdotx(&tt.re, t);
      omega = CDEV(ts, tt);
      qpb_spinor_axpy(x, omega, s, x);
      qpb_spinor_axpy(x, alpha, p, x);	
      qpb_spinor_axpy(r, CNEGATE(omega), t, s);
      if(iters % n_reeval == 0)
	{
	  Op(r, x);
	  qpb_spinor_xmy(r, b_tilde, r);
	}
      qpb_spinor_xdotx(&res_norm, r);
      if(res_norm / b_norm <= epsilon)
	break;
    }
  Op(r, x);
  qpb_spinor_xmy(r, b_tilde, r);
  qpb_spinor_xdotx(&res_norm, r);
  
  secs = qpb_stop_watch(secs);
  if(iters==max_iter)
    {
      error(" !\n");
      error(" BiCGStab *did not* converge, after %d iterrations\n", iters);
      error(" residual = %e, relative = %e, t = %g secs\n", res_norm, res_norm / b_norm, secs);
      error(" !\n");
      return -1;
    }

  print(" %s After %d iterrations BiCGStab converged\n", out_pre, iters);
  print(" %s residual = %e, relative = %e, t = %g secs\n", out_pre, res_norm, res_norm / b_norm, secs);

  return iters;
}

