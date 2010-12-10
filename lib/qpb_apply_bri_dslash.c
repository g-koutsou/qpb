#ifdef OPENMP
#	include <omp.h>
#endif
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_gammas.h>
#include <qpb_spinor_linalg.h>
#include <qpb_apply_bri_dslash_site.h>
#include <qpb_comm_halo_spinor_field.h>

void 
qpb_apply_bri_dslash(qpb_spinor_field spinor_out, qpb_spinor_field spinor_in,
		     qpb_diagonal_links gauge, qpb_double mass)
{
  qpb_comm_halo_spinor_field_start(spinor_in);
  qpb_comm_halo_spinor_field_wait(spinor_in);

  int lvol = problem_params.l_vol;
  unsigned short int *y = problem_params.par_dir;
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

/*
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

	    qpb_apply_bri_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);
	  }


  for(int dir=1; dir<ND; dir++)
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
	    qpb_apply_bri_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);

	    v = skin_to_ext[dir][i];
	    spinor_ptr = (qpb_complex *)spinor_out.index[v];
	    qpb_apply_bri_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);
	  }
      }
*/
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
