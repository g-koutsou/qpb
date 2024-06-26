#include <math.h>
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_field.h>
#include <qpb_spinor_linalg.h>
#include <qpb_comm_halo_spinor_field.h>
#include <qpb_dslash_wrappers.h>
#include <qpb_stop_watch.h>

#define QPB_LANCZOS_NUMB_TEMP_VECS 4

int n_lanczos;

qpb_spinor_field lanczos_temp_vecs[QPB_LANCZOS_NUMB_TEMP_VECS];

void
qpb_lanczos_init()
{
  for(int i=0; i<QPB_LANCZOS_NUMB_TEMP_VECS; i++)
    {
      lanczos_temp_vecs[i] = qpb_spinor_field_init();
      qpb_spinor_field_set_zero(lanczos_temp_vecs[i]);
    }
  qpb_comm_halo_spinor_field_init();
  return;
}

void
qpb_lanczos_finalize()
{
  for(int i=0; i<QPB_LANCZOS_NUMB_TEMP_VECS; i++)
    {
      qpb_spinor_field_finalize(lanczos_temp_vecs[i]);
    }
  qpb_comm_halo_spinor_field_finalize();
  return;
}

void
qpb_lanczos(qpb_double *alpha, qpb_double *beta, void *gauge, qpb_clover_term clover,
	    qpb_double kappa, qpb_double c_sw, int niter)
{
  qpb_spinor_field w = lanczos_temp_vecs[0];
  qpb_spinor_field r = lanczos_temp_vecs[1];
  qpb_spinor_field u0 = lanczos_temp_vecs[2];
  qpb_spinor_field u1 = lanczos_temp_vecs[3];
  qpb_double mass = 1./(2.*kappa) - 4.;
  void (* dslash_func)(qpb_spinor_field, qpb_spinor_field, void **) = NULL;

  void *dslash_args[] = 
    {
      gauge,
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

  int restart = (niter>0);
  niter = abs(niter);
  qpb_double a[niter+1], b[niter+1];
  qpb_complex z0;
  if(restart)
    {
      qpb_spinor_field_set_random(r);
      qpb_spinor_field_set_zero(u0);
      n_lanczos = 0;
      
      qpb_complex norm;
      qpb_spinor_xdotx(&norm.re, r);
      norm = (qpb_complex){1./sqrt(norm.re), 0.};
      qpb_spinor_ax(r, norm, r);
      qpb_spinor_xdotx(&z0.re, r);
      b[0] = sqrt(z0.re);
    }
  else
    {
      b[0] = beta[n_lanczos-1];
    }
  
  for(int i=1; i<=niter; i++)
    {
      z0 = (qpb_complex){1./b[i-1], 0.};
      qpb_spinor_ax(u1, z0, r);
      dslash_func(w, u1, dslash_args);
      dslash_func(r, w, dslash_args);

      z0 = (qpb_complex){-b[i-1], 0.};
      qpb_spinor_axpy(r, z0, u0, r);

      qpb_spinor_xdoty(&z0, u1, r);
      a[i] = z0.re;
      z0 = (qpb_complex){-a[i], 0};
      qpb_spinor_axpy(r, z0, u1, r);

      qpb_spinor_xdotx(&z0.re, r);
      b[i] = sqrt(z0.re);
      qpb_spinor_xeqy(u0, u1);
    }

  for(int i=0; i<niter; i++)
    {
      alpha[i+n_lanczos] = a[i+1];
      beta[i+n_lanczos] = b[i+1];
    }

  n_lanczos += niter;
  return;
}

