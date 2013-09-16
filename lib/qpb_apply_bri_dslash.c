#ifdef OPENMP
#	include <omp.h>
#endif
#include <string.h>
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_gammas.h>
#include <qpb_spinor_linalg.h>
#include <qpb_apply_bri_dslash_site.h>
#include <qpb_comm_halo_spinor_field.h>

void 
qpb_apply_bri_dslash(qpb_spinor_field spinor_out, qpb_spinor_field spinor_in,
		     void * U, qpb_double mass)
{
  qpb_diagonal_links gauge = *(qpb_diagonal_links *)U;
  qpb_comm_halo_spinor_field_z_start(spinor_in);
  qpb_comm_halo_spinor_field_z_wait(spinor_in);

  qpb_comm_halo_spinor_field_y_start(spinor_in);
  qpb_comm_halo_spinor_field_y_wait(spinor_in);

  qpb_comm_halo_spinor_field_x_start(spinor_in);
  qpb_comm_halo_spinor_field_x_wait(spinor_in);
  int lvol = problem_params.l_vol;
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
	    
	    qpb_apply_bri_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);
	  }

#ifdef OPENMP
#pragma omp parallel for
#endif
  for(int lv=0; lv<lvol; lv++)
    {
      qpb_complex *out = (qpb_complex *)(spinor_out.bulk[lv]);
      qpb_complex *in = (qpb_complex *)(spinor_in.bulk[lv]);
      spinor_axpy(out, mass, in, out);
    }
  
  return;
}

/*
  Same but multiply by gamma_5 to the left
*/
void 
qpb_apply_gamma5_bri_dslash(qpb_spinor_field spinor_out, qpb_spinor_field spinor_in,
			    void * U, qpb_double mass)
{
  qpb_diagonal_links gauge = *(qpb_diagonal_links *)U;

  qpb_comm_halo_spinor_field_z_start(spinor_in);
  qpb_comm_halo_spinor_field_z_wait(spinor_in);

  qpb_comm_halo_spinor_field_y_start(spinor_in);
  qpb_comm_halo_spinor_field_y_wait(spinor_in);

  qpb_comm_halo_spinor_field_x_start(spinor_in);
  qpb_comm_halo_spinor_field_x_wait(spinor_in);

  int lvol = problem_params.l_vol;
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
	    
	    qpb_apply_bri_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);
	  }

#ifdef OPENMP
#pragma omp parallel for
#endif
  for(int lv=0; lv<lvol; lv++)
    {
      qpb_complex *out = (qpb_complex *)(spinor_out.bulk[lv]);
      qpb_complex *in = (qpb_complex *)(spinor_in.bulk[lv]);

      qpb_complex aux[NC*NS];
      memcpy(aux, out, NC*NS*sizeof(qpb_complex));
      for(int cs=0; cs<NC*NS/2; cs++)
	{
	  out[cs].re = in[NC*NS/2+cs].re*mass + aux[NC*NS/2+cs].re;
	  out[cs].im = in[NC*NS/2+cs].im*mass + aux[NC*NS/2+cs].im;
	}
      for(int cs=NC*NS/2; cs<NC*NS; cs++)
	{
	  out[cs].re = in[cs-NC*NS/2].re*mass + aux[cs-NC*NS/2].re;
	  out[cs].im = in[cs-NC*NS/2].im*mass + aux[cs-NC*NS/2].im;
	}
    }
  
  return;
}
  
