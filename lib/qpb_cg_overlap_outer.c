#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_field.h>
#include <qpb_spinor_linalg.h>
#include <qpb_gauge_field.h>
#include <qpb_comm_halo_spinor_field.h>
#include <qpb_overlap.h>
#include <qpb_stop_watch.h>

#define QPB_CONGRAD_NUMB_TEMP_VECS 4

qpb_spinor_field congrad_temp_vecs[QPB_CONGRAD_NUMB_TEMP_VECS];

void
qpb_cg_overlap_outer_init()
{
  for(int i=0; i<QPB_CONGRAD_NUMB_TEMP_VECS; i++)
    {
      congrad_temp_vecs[i] = qpb_spinor_field_init();
      qpb_spinor_field_set_zero(congrad_temp_vecs[i]);
    }
  /* 
     This is called every time in qpb_apply_overlap 
     Calling it here also will cause problems
  */
  //qpb_comm_halo_spinor_field_init();
  return;
}

void
qpb_cg_overlap_outer_finalize()
{
  for(int i=0; i<QPB_CONGRAD_NUMB_TEMP_VECS; i++)
    {
      qpb_spinor_field_finalize(congrad_temp_vecs[i]);
    }
  /* 
     This is called every time in qpb_apply_overlap 
     Calling it here also will cause problems
  */
  //qpb_comm_halo_spinor_field_init();
  return;
}

#define D(out,in)							\
  qpb_overlap_apply(out, in, gauge, clover, rho_ov, mass, c_sw, kl_class, kl_iters, epsilon, max_iter); \
  qpb_spinor_gamma5(out, out);

#define DD(out,in)							\
  D(y, in);								\
  D(out, y);

int
qpb_cg_overlap_outer(qpb_spinor_field x, qpb_spinor_field b, void * gauge,
		     qpb_clover_term clover, qpb_double rho_ov, qpb_double mass,
		     qpb_double c_sw, enum qpb_kl_classes kl_class, int kl_iters, 
		     qpb_double epsilon, int max_iter)
{
  qpb_spinor_field p = congrad_temp_vecs[0];
  qpb_spinor_field r = congrad_temp_vecs[1];
  qpb_spinor_field w = congrad_temp_vecs[2];
  qpb_spinor_field y = congrad_temp_vecs[3];

  int iters = 0;
  const int n_echo = 1, n_reeval = 50;
  qpb_double res_norm, b_norm;
  qpb_complex_double alpha = {1, 0}, omega = {1, 0};
  qpb_complex_double beta, gamma;
  qpb_spinor_field_set_random(x);
  qpb_spinor_gamma5(w, b);
  D(b, w);

  qpb_spinor_xdotx(&b_norm, b);
  DD(r, x);
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
    
      DD(w, p);
      qpb_spinor_xdoty(&omega, p, w);
      alpha = CDEV(gamma, omega);
      qpb_spinor_axpy(x, alpha, p, x);
      if(iters % n_reeval == 0) 
	{
	  DD(w, x); 
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
  DD(w, x);
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
  
  return iters;
}
