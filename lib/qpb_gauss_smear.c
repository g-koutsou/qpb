#ifdef OPENMP
#	include <omp.h>
#endif
#include <string.h>
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_field.h>
#include <qpb_spinor_linalg.h>
#include <qpb_spinor_blas.h>
#include <qpb_comm_halo_spinor_field.h>
#include <qpb_comm_halo_gauge_field.h>

__inline__ void
qpb_apply_gauss_smear_site(qpb_complex *out, void **in, void **gauge, qpb_double delta, int v)
{
  qpb_spinor aux_spinor;
  qpb_complex *link;
  qpb_complex *sp = (qpb_complex *)&aux_spinor;
  qpb_double a = 1./(1.+delta*(2*(ND-1)));
  qpb_double b = delta * a;
  qpb_complex *ptr;

  spinor_set_zero(sp);
  for(int dir=1; dir<ND; dir++)
    {
      link = (qpb_complex *)((qpb_link *) gauge[v] + dir);
      ptr = (qpb_complex *) in[nneigh[dir][v]];
      spinor_sun_peq_mul(sp, link, ptr);
      
      link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
      ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
      spinor_sun_dag_peq_mul(sp, link, ptr);
    }
  ptr = (qpb_complex *) in[v];
  spinor_axpby(out, a, ptr, b, sp);
  return;
}

void 
qpb_gauss_smear_iter(qpb_spinor_field spinor_out, qpb_spinor_field spinor_in,
		     qpb_gauge_field gauge, qpb_double delta)
{
  qpb_comm_halo_spinor_field_z_start(spinor_in);
  qpb_comm_halo_spinor_field_z_wait(spinor_in);

  qpb_comm_halo_spinor_field_y_start(spinor_in);
  qpb_comm_halo_spinor_field_y_wait(spinor_in);

  qpb_comm_halo_spinor_field_x_start(spinor_in);
  qpb_comm_halo_spinor_field_x_wait(spinor_in);

  unsigned short int *l_dim = problem_params.l_dim;
  int x[ND];

#ifdef OPENMP
#pragma omp parallel for private(x)
#endif
  for(int x0=0; x0<l_dim[0]; x0++)
    for(x[1]=0; x[1]<l_dim[1]; x[1]++)
      for(x[2]=0; x[2]<l_dim[2]; x[2]++)
	for(x[3]=0; x[3]<l_dim[3]; x[3]++)
	  {
	    x[0] = x0;
	    int v = blk_to_ext[LEXICO(x, l_dim)];
	    qpb_complex *spinor_ptr = (qpb_complex *)spinor_out.index[v];
	    qpb_apply_gauss_smear_site(spinor_ptr, spinor_in.index, gauge.index, delta, v);	    
	  }
  
  return;
}

void 
qpb_gauss_smear_niter(qpb_spinor_field spinor_out, qpb_spinor_field spinor_in,
		      qpb_gauge_field gauge, qpb_double delta, int niter)
{
  qpb_spinor_field aux[2] = {
    qpb_spinor_field_init(),
    qpb_spinor_field_init()
  };

  qpb_comm_halo_gauge_field(gauge);
  qpb_spinor_xeqy(aux[0], spinor_in);
  for(int iter=0; iter<niter; iter++)
    qpb_gauss_smear_iter(aux[(iter+1)%2], aux[iter%2], gauge, delta);

  qpb_spinor_xeqy(spinor_out, aux[niter%2]);

  qpb_spinor_field_finalize(aux[0]);
  qpb_spinor_field_finalize(aux[1]);
  return;
}

void
qpb_gauss_smear_init()
{
  qpb_comm_halo_spinor_field_init();  
  return;
}

void
qpb_gauss_smear_finalize()
{
  qpb_comm_halo_spinor_field_finalize();
  return;
}
