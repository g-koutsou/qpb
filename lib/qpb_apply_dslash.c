#ifdef OPENMP
#	include <omp.h>
#endif
#include <string.h>
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_gammas.h>
#include <qpb_spinor_linalg.h>
#include <qpb_apply_dslash_site.h>
#include <qpb_comm_halo_spinor_field.h>

void 
qpb_apply_dslash(qpb_spinor_field spinor_out, qpb_spinor_field spinor_in,
		 void *U, qpb_double mass)
{
  qpb_gauge_field gauge = *(qpb_gauge_field *)U;
  qpb_comm_halo_spinor_field_start(spinor_in);
  int lvol = problem_params.l_vol;
  unsigned short int *y = problem_params.par_dir;
  unsigned short int *l_dim = problem_params.l_dim;
  int x[ND];

#ifdef OPENMP
#pragma omp parallel for private(x)
#endif
  for(int x0=y[0]; x0<l_dim[0]-y[0]; x0++)
    for(x[1]=y[1]; x[1]<l_dim[1]-y[1]; x[1]++)
      for(x[2]=y[2]; x[2]<l_dim[2]-y[2]; x[2]++)
	for(x[3]=y[3]; x[3]<l_dim[3]-y[3]; x[3]++)
	  {
	    x[0] = x0;
	    int v = blk_to_ext[LEXICO(x, l_dim)];
	    qpb_complex *spinor_ptr = (qpb_complex *)spinor_out.index[v];

	    qpb_apply_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);
	  }

  qpb_comm_halo_spinor_field_wait(spinor_in);

  for(int dir=0; dir<ND; dir++)
    if(problem_params.par_dir[dir])
      {
#ifdef OPENMP
#pragma omp parallel for
#endif
	for(int i=0; i<lvol/l_dim[dir]; i++)
	  {
	    int v;
	    qpb_complex *spinor_ptr;

	    v = skin_to_ext[dir+ND][i];
	    spinor_ptr = (qpb_complex *)spinor_out.index[v];

	    qpb_apply_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);
	    /*
	     */
	    v = skin_to_ext[dir][i];
	    spinor_ptr = (qpb_complex *)spinor_out.index[v];

	    qpb_apply_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);
	  }
      }

#ifdef OPENMP
#pragma omp parallel for
#endif
  for(int lv=0; lv<lvol; lv++)
    {
      qpb_complex *out = (qpb_complex *)(spinor_out.bulk[lv]);
      qpb_complex *in = (qpb_complex *)(spinor_in.bulk[lv]);
      spinor_ax(out, 0.5, out);
      spinor_axpy(out, (mass+4.0), in, out);
    }
  
  return;
}

/*
  Same but multiply by gamma_5 to the left
*/
void 
qpb_apply_gamma5_dslash(qpb_spinor_field spinor_out, qpb_spinor_field spinor_in,
		 void *U, qpb_double mass)
{
  qpb_gauge_field gauge = *(qpb_gauge_field *)U;
  qpb_comm_halo_spinor_field_start(spinor_in);
  int lvol = problem_params.l_vol;
  unsigned short int *y = problem_params.par_dir;
  unsigned short int *l_dim = problem_params.l_dim;
  int x[ND];

#ifdef OPENMP
#pragma omp parallel for private(x)
#endif
  for(int x0=y[0]; x0<l_dim[0]-y[0]; x0++)
    for(x[1]=y[1]; x[1]<l_dim[1]-y[1]; x[1]++)
      for(x[2]=y[2]; x[2]<l_dim[2]-y[2]; x[2]++)
	for(x[3]=y[3]; x[3]<l_dim[3]-y[3]; x[3]++)
	  {
	    x[0] = x0;
	    int v = blk_to_ext[LEXICO(x, l_dim)];
	    qpb_complex *spinor_ptr = (qpb_complex *)spinor_out.index[v];

	    qpb_apply_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);
	  }

  qpb_comm_halo_spinor_field_wait(spinor_in);

  for(int dir=0; dir<ND; dir++)
    if(problem_params.par_dir[dir])
      {
#ifdef OPENMP
#pragma omp parallel for
#endif
	for(int i=0; i<lvol/l_dim[dir]; i++)
	  {
	    int v;
	    qpb_complex *spinor_ptr;

	    v = skin_to_ext[dir+ND][i];
	    spinor_ptr = (qpb_complex *)spinor_out.index[v];

	    qpb_apply_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);
	    /*
	     */
	    v = skin_to_ext[dir][i];
	    spinor_ptr = (qpb_complex *)spinor_out.index[v];

	    qpb_apply_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);
	  }
      }

#ifdef OPENMP
#pragma omp parallel for
#endif
  for(int lv=0; lv<lvol; lv++)
    {
      qpb_complex *out = (qpb_complex *)(spinor_out.bulk[lv]);
      qpb_complex *in = (qpb_complex *)(spinor_in.bulk[lv]);
      spinor_ax(out, 0.5, out);
      qpb_complex aux[NC*NS];
      memcpy(aux, out, NC*NS*sizeof(qpb_complex));
      for(int cs=0; cs<NC*NS/2; cs++)
	{
	  out[cs].re = in[NC*NS/2+cs].re*(mass+4.0) + aux[NC*NS/2+cs].re;
	  out[cs].im = in[NC*NS/2+cs].im*(mass+4.0) + aux[NC*NS/2+cs].im;
	}
      for(int cs=NC*NS/2; cs<NC*NS; cs++)
	{
	  out[cs].re = in[cs-NC*NS/2].re*(mass+4.0) + aux[cs-NC*NS/2].re;
	  out[cs].im = in[cs-NC*NS/2].im*(mass+4.0) + aux[cs-NC*NS/2].im;
	}
    }
  
  return;
}
