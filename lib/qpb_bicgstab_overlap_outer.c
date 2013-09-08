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
#include <qpb_kl_defs.h>

#define QPB_BICGSTAB_NUMB_TEMP_VECS 6
#define QPB_OP_NUMB_TEMP_VECS 4

static qpb_spinor_field bicgstab_temp_vecs[QPB_BICGSTAB_NUMB_TEMP_VECS];
static qpb_spinor_field op_temp_vecs[QPB_OP_NUMB_TEMP_VECS];
/* set boundary condition in time
   !!! currently not implemented for diagonal links !!! */
static  void (* dslash_func)();
static  void *gauge_bc_ptr;
static  void *dslash_args[4];
static  qpb_double mass_tilde, rho_ov;

INLINE void
Op(qpb_spinor_field out, qpb_spinor_field in)
{
  qpb_spinor_field Ax = op_temp_vecs[0];  
  qpb_spinor_field y = op_temp_vecs[1];  
  qpb_spinor_field I3pAx = op_temp_vecs[2];
  qpb_spinor_field Ip3Ax = op_temp_vecs[3];
  qpb_complex mt = {3*(1+mass_tilde/rho_ov), 0};

  dslash_func(y,in,dslash_args);
  dslash_func(Ax,y,dslash_args);
  qpb_spinor_axpy(Ip3Ax, mt, Ax, in);
  qpb_spinor_axpy(I3pAx, (qpb_complex){3.0, 0}, in, Ax);
  dslash_func(y, I3pAx, dslash_args);
  qpb_spinor_gamma5(Ip3Ax, Ip3Ax);
  qpb_spinor_xpy(out, Ip3Ax, y);
  return;
}

void
qpb_bicgstab_overlap_outer_init()
{
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
  qpb_comm_halo_spinor_field_init();
  return;
}

void
qpb_bicgstab_overlap_outer_finalize()
{
  for(int i=0; i<QPB_BICGSTAB_NUMB_TEMP_VECS; i++)
    {
      qpb_spinor_field_finalize(bicgstab_temp_vecs[i]);
    }
  for(int i=0; i<QPB_OP_NUMB_TEMP_VECS; i++)
    {
      qpb_spinor_field_finalize(op_temp_vecs[i]);
    }
  qpb_comm_halo_spinor_field_finalize();
  return;
}

int
qpb_bicgstab_overlap_outer(qpb_spinor_field x, qpb_spinor_field b, void * gauge,
			   qpb_clover_term clover, qpb_double rho_in, qpb_double mass,
			   qpb_double c_sw, enum qpb_kl_classes kl_class, int kl_iters, 
			   qpb_double epsilon, int max_iter)
{
  qpb_spinor_field r0 = bicgstab_temp_vecs[0];
  qpb_spinor_field r = bicgstab_temp_vecs[1];
  qpb_spinor_field p = bicgstab_temp_vecs[2];
  qpb_spinor_field u = bicgstab_temp_vecs[3];
  qpb_spinor_field v = bicgstab_temp_vecs[4];
  qpb_spinor_field b_tilde = bicgstab_temp_vecs[5];
 
  int iters = 0;
  const int n_echo = 1, n_reeval = 10;
  qpb_double res_norm, b_norm;
  qpb_complex_double alpha = {1, 0}, omega = {1, 0};
  qpb_complex_double beta, gamma, zeta, rho;
  rho_ov = rho_in;
  qpb_double factor = 1 - mass / (2*rho_ov);
  qpb_gauge_field gauge_bc;
  qpb_double m_bare = -rho_in;
  mass_tilde = mass / factor;
  
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

  dslash_args[0] = gauge_bc_ptr;
  dslash_args[1] = &m_bare;
  dslash_args[2] = &clover;
  dslash_args[3] = &c_sw;

  switch(which_dslash_op)
    {
    case QPB_DSLASH_BRILLOUIN:
      if(c_sw) {
	dslash_func = &qpb_gamma5_clover_bri_dslash;
      } else {
	dslash_func = &qpb_gamma5_bri_dslash;	
      }
      break;
    case QPB_DSLASH_STANDARD:
      if(c_sw) {
	dslash_func = &qpb_gamma5_clover_dslash;
      } else {
	dslash_func = &qpb_gamma5_dslash;;	
      }
      break;
    }

  qpb_spinor_ax(r, (qpb_complex){1.0/(rho_ov*factor), 0.0}, b);
  qpb_spinor_gamma5(b_tilde, r);

  qpb_spinor_xdotx(&b_norm, b_tilde);
  Op(r, x);
  qpb_spinor_xmy(r, b_tilde, r);
  qpb_spinor_xeqy(r0, r);
  qpb_spinor_xdotx(&gamma.re, r);
  gamma.im = 0;
  res_norm = gamma.re;
  rho = gamma;
  qpb_double t = qpb_stop_watch(0);
  for(iters=1; iters<max_iter; iters++)
    {
      if(res_norm / b_norm <= epsilon)
	break;
      
      qpb_spinor_xdoty(&gamma, r0, r);
      beta = CMUL(CDEV(gamma, rho), CDEV(alpha, omega));
      omega = CNEGATE(omega);
      qpb_spinor_axpy(p, omega, u, p);
      qpb_spinor_axpy(p, beta, p, r);
      Op(u, p);
      qpb_spinor_xdoty(&beta, r0, u);
      rho = gamma;
      alpha = CDEV(rho, beta);
      alpha = CNEGATE(alpha);
      qpb_spinor_axpy(r, alpha, u, r);
      Op(v, r);
      qpb_spinor_xdoty(&zeta, v, r);
      qpb_spinor_xdotx(&beta.re, v);
      beta.im = 0;
      omega = CDEV(zeta, beta);
      alpha = CNEGATE(alpha);
      qpb_spinor_axpy(x, omega, r, x);
      qpb_spinor_axpy(x, alpha, p, x);
      if(iters % n_reeval == 0)
	{
	  Op(r, x);
	  qpb_spinor_xmy(r, b_tilde, r);
	}
      else
	{
	  omega = CNEGATE(omega);
	  qpb_spinor_axpy(r, omega, v, r);
	  omega = CNEGATE(omega);
	}
      qpb_spinor_xdotx(&res_norm, r);
      if((iters % n_echo == 0))
	print(" iters = %8d, res = %e\n", iters, res_norm / b_norm);
    }
  Op(r, x);
  qpb_spinor_xmy(r, b_tilde, r);
  qpb_spinor_xdotx(&res_norm, r);
  
  /* We now have x_tilde, apply (1+3A) to get x */
  dslash_func(r, x, dslash_args);
  dslash_func(p, r, dslash_args);
  qpb_spinor_axpy(r, (qpb_complex){3.0, 0.0}, p, x);
  qpb_spinor_xeqy(x, r);

  t = qpb_stop_watch(t);
  if(iters==max_iter)
    {
      error(" !\n");
      error(" BiCGStab *did not* converge, after %d iterrations\n", iters);
      error(" residual = %e, relative = %e, t = %g secs\n", res_norm, res_norm / b_norm, t);
      error(" !\n");
      return -1;
    }

  print(" After %d iterrations BiCGStab converged\n", iters);
  print(" residual = %e, relative = %e, t = %g secs\n", res_norm, res_norm / b_norm, t);


  if(which_dslash_op == QPB_DSLASH_STANDARD)
    {
      qpb_gauge_field_finalize(gauge_bc);
    }
  
  return iters;
}
