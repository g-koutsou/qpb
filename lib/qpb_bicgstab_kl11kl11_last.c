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
#include <qpb_bicgstab_kl11_last.h>

#define QPB_BICGSTAB_NUMB_TEMP_VECS 9
#define QPB_OP_NUMB_TEMP_VECS 8
#define CG_INNER_NUMB_TEMP_VECS 3

static char out_pre[QPB_MAX_STRING];
static int precond, n_echo;
static qpb_spinor_field bicgstab_temp_vecs[QPB_BICGSTAB_NUMB_TEMP_VECS];
static qpb_spinor_field cg_inner_temp_vecs[CG_INNER_NUMB_TEMP_VECS];
static qpb_spinor_field op_temp_vecs[QPB_OP_NUMB_TEMP_VECS];
static qpb_overlap_params ov_params;

INLINE void
A0(qpb_spinor_field out, qpb_spinor_field in)
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
D0(qpb_spinor_field out, qpb_spinor_field in)
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
cg_inner(qpb_spinor_field x, qpb_spinor_field b)
{
  qpb_spinor_field p = cg_inner_temp_vecs[0];
  qpb_spinor_field r = cg_inner_temp_vecs[1];
  qpb_spinor_field y = cg_inner_temp_vecs[2];

  qpb_double epsilon = 1e-8;
  int iters = 0, max_iter = 1000;
  const int n_echo = 100, n_reeval = 10;
  qpb_double res_norm, b_norm;
  qpb_complex_double alpha = {1, 0}, omega = {1, 0};
  qpb_complex_double beta, gamma;
  qpb_complex_double one_third = {1./3., 0.};
  
  qpb_spinor_xdotx(&b_norm, b);
  A0(r, x);
  qpb_spinor_axpy(r, one_third, x, r);  
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
    
      A0(y, p);
      qpb_spinor_axpy(y, one_third, p, y);  
      
      qpb_spinor_xdoty(&omega, p, y);
      alpha = CDEV(gamma, omega);
      qpb_spinor_axpy(x, alpha, p, x);
      if(iters % n_reeval == 0) 
	{
	  A0(r, x);
	  qpb_spinor_axpy(r, one_third, x, r);  
	  qpb_spinor_xmy(r, b, r);
	}
      else
	{
	  alpha.re = -CDEVR(gamma, omega);
	  alpha.im = -CDEVI(gamma, omega);
	  qpb_spinor_axpy(r, alpha, y, r);
	}
      qpb_spinor_xdotx(&res_norm, r);
      if((iters % n_echo == 0))
      	print("\t\t CG: iters = %8d, res = %e\n", iters, res_norm/b_norm);

      beta.re = res_norm / gamma.re;
      beta.im = 0.;
      qpb_spinor_axpy(p, beta, p, r);
      gamma.re = res_norm;
      gamma.im = 0.;
    }
  t = qpb_stop_watch(t);
  A0(y,x);
  qpb_spinor_axpy(y, one_third, x, y);      
  qpb_spinor_xmy(r, b, y);
  qpb_spinor_xdotx(&res_norm, r);

  if(iters==max_iter)
    {
      error(" !\n");
      error(" CG *did not* converge, after %d iterrations\n", iters);
      error(" residual = %e, relative = %e, t = %g secs\n", res_norm, res_norm / b_norm, t);
      error(" !\n");
      return;
    }

  print(" \t\t CG: After %d iterrations CG converged\n", iters);
  print(" \t\t CG: residual = %e, relative = %e, t = %g secs\n", res_norm, res_norm / b_norm, t);
  return;
}

INLINE void
XA(qpb_spinor_field out, qpb_spinor_field in)
{
  qpb_complex_double a = {8./3., 0.};
  qpb_spinor_field iAp1o3x = op_temp_vecs[1];
  cg_inner(iAp1o3x, in);
  qpb_spinor_axpy(out, a, iAp1o3x, in);  
  return;
}

INLINE void
Op(qpb_spinor_field out, qpb_spinor_field in)
{
  qpb_double mass = ov_params.mass;
  qpb_double rho = ov_params.rho;
  qpb_double mass_tilde = mass/(1-mass/(2*rho));
  qpb_complex mt = {(1+mass_tilde/rho), 0};
  qpb_spinor_field y = op_temp_vecs[2];
  qpb_spinor_field z = op_temp_vecs[3];
  qpb_spinor_field A1x = op_temp_vecs[4];
  qpb_spinor_field D1x = op_temp_vecs[5];
  qpb_spinor_field I3pA1x = op_temp_vecs[6];
  qpb_spinor_field Ip3A1x = op_temp_vecs[7];
  XA(y, in);
  qpb_spinor_ax(y, (qpb_complex){9.0,0.}, y);
  A0(z, y);
  XA(A1x, z);
  qpb_spinor_axpy(Ip3A1x, (qpb_complex){3.0,0}, A1x, in);
  qpb_spinor_axpy(I3pA1x, (qpb_complex){3.0,0}, in, A1x);
  XA(z, I3pA1x);
  D0(D1x, z);
  qpb_spinor_ax(D1x, (qpb_complex){1.0/3.0, 0}, D1x);
  qpb_spinor_axpy(out, mt, Ip3A1x, D1x);
  return;
}

INLINE void
Ip3A(qpb_spinor_field out, qpb_spinor_field in)
{
  qpb_spinor_field y = op_temp_vecs[2];
  qpb_spinor_field z = op_temp_vecs[3];
  qpb_spinor_field A1x = op_temp_vecs[4];
  XA(y, in);
  qpb_spinor_ax(y, (qpb_complex){9.0,0.}, y);
  A0(z, y);
  XA(A1x, z);
  qpb_spinor_axpy(out, (qpb_complex){3.0,0}, A1x, in);
  return;
}

void
qpb_bicgstab_kl11kl11_last_init(void * gauge, qpb_clover_term clover, 
				qpb_double rho, qpb_double c_sw, qpb_double mass, int precondition,
				char output_prefix[], int echo_freq)
{
  if(precondition)
    precond = 1;
  else
    precond = 0;
  
  n_echo = echo_freq;
  strcpy(out_pre, output_prefix);  
  if(precond) {
    char aux_pre[QPB_MAX_STRING];
    sprintf(aux_pre, "\t%s", out_pre);
    qpb_bicgstab_kl11_last_init(gauge, clover, rho, c_sw, mass, precondition, aux_pre, 10000);
  }

  for(int i=0; i<QPB_BICGSTAB_NUMB_TEMP_VECS; i++)
    {
      bicgstab_temp_vecs[i] = qpb_spinor_field_init();
      qpb_spinor_field_set_zero(bicgstab_temp_vecs[i]);
    }

  for(int i=0; i<CG_INNER_NUMB_TEMP_VECS; i++)
    {
      cg_inner_temp_vecs[i] = qpb_spinor_field_init();
      qpb_spinor_field_set_zero(cg_inner_temp_vecs[i]);
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
qpb_bicgstab_kl11kl11_last_finalize()
{
  if(precond)
    qpb_bicgstab_kl11_last_finalize();
  
  for(int i=0; i<QPB_BICGSTAB_NUMB_TEMP_VECS; i++)
    {
      qpb_spinor_field_finalize(bicgstab_temp_vecs[i]);
    }
  for(int i=0; i<CG_INNER_NUMB_TEMP_VECS; i++)
    {
      qpb_spinor_field_finalize(cg_inner_temp_vecs[i]);
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
qpb_bicgstab_kl11kl11_last(qpb_spinor_field x, qpb_spinor_field b, qpb_double epsilon, int max_iter)
{
  qpb_spinor_field r0 = bicgstab_temp_vecs[0];
  qpb_spinor_field r = bicgstab_temp_vecs[1];
  qpb_spinor_field p = bicgstab_temp_vecs[2];
  qpb_spinor_field y = bicgstab_temp_vecs[3];
  qpb_spinor_field s = bicgstab_temp_vecs[4];
  qpb_spinor_field z = bicgstab_temp_vecs[5];
  qpb_spinor_field b_tilde = bicgstab_temp_vecs[6];
  // For preconditioned version
  qpb_spinor_field q = bicgstab_temp_vecs[7];
  qpb_spinor_field t = bicgstab_temp_vecs[8];

  int iters = 0;
  const int n_reeval = 100;
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
      beta.re = CMULR((CDEV(rho_new, rho_old)), (CDEV(alpha, omega)));
      beta.im = CMULI((CDEV(rho_new, rho_old)), (CDEV(alpha, omega)));
      qpb_spinor_axpy(p, beta, r, p);
      qpb_spinor_axpy(p, CNEGATE(CMUL(beta,omega)), q, p);
      if(precond) {
	//qpb_spinor_ax(q, (qpb_complex){rho_ov*factor, 0}, p);
	qpb_bicgstab_kl11_last(y, p, sqrt(sqrt(epsilon)), max_iter);
	Op(q, y);
      }else{
	Op(q, p);
      }
      qpb_complex_double r0q = {0.,0.};
      qpb_spinor_xdoty(&r0q, r0, q);
      alpha = CDEV(rho_new,r0q);
      qpb_spinor_axpy(s, CNEGATE(alpha), q, r);
      if(precond) {
	//qpb_spinor_ax(t, (qpb_complex){rho_ov*factor, 0}, s);
	qpb_bicgstab_kl11_last(z, s, sqrt(sqrt(epsilon)), max_iter);
	Op(t, z);
      }else{
	Op(t, s);
      }
      qpb_complex_double tt = {0.,0.};
      qpb_complex_double ts = {0.,0.};      
      qpb_spinor_xdoty(&ts, t, s);
      qpb_spinor_xdotx(&tt.re, t);
      omega = CDEV(ts, tt);
      if(precond) {       
	qpb_spinor_axpy(x, omega, z, x);
	qpb_spinor_axpy(x, alpha, y, x);		
      }else{
	qpb_spinor_axpy(x, omega, s, x);
	qpb_spinor_axpy(x, alpha, p, x);	
      }
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
  
  /* We now have x_tilde, apply (1+3A) to get x */
  Ip3A(r,x);
  qpb_spinor_xeqy(x, r);

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

