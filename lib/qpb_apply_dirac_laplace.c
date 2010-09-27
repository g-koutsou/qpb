#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>
#include <qpb_apply_dirac_tzyx.h>
#include <qpb_apply_laplace_tzyx.h>
#include <qpb_comm_halo_spinor_field.h>

void 
qpb_apply_dirac_laplace(qpb_spinor_field spinor_out, qpb_spinor_field spinor_in,
			qpb_gauge_field gauge, qpb_double mass)
{
  qpb_comm_halo_spinor_field_start(spinor_in);
  int lvol = problem_params.l_vol;
  unsigned short int *y = problem_params.par_dir;
  unsigned short int *l_dim = problem_params.l_dim;

  int x[ND];
  for(x[0]=y[0]; x[0]<l_dim[0]-y[0]; x[0]++)
    for(x[1]=0; x[1]<l_dim[1]; x[1]++)
      for(x[2]=0; x[2]<l_dim[2]; x[2]++)
	for(x[3]=0; x[3]<l_dim[3]; x[3]++)
	  {
	    int v = blk_to_ext[LEXICO(x, l_dim)];
	    qpb_complex *spinor_ptr = (qpb_complex *)spinor_out.index[v];

	    qpb_apply_dirac_t(spinor_ptr, spinor_in.index0, gauge.index, v);
	    qpb_apply_laplace_t(spinor_ptr, spinor_in.index0, gauge.index, v);
	  }

  for(x[0]=0; x[0]<l_dim[0]; x[0]++)
    for(x[1]=y[1]; x[1]<l_dim[1]-y[1]; x[1]++)
      for(x[2]=0; x[2]<l_dim[2]; x[2]++)
	for(x[3]=0; x[3]<l_dim[3]; x[3]++)
	  {
	    int v = blk_to_ext[LEXICO(x, l_dim)];
	    qpb_complex *spinor_ptr = (qpb_complex *)spinor_out.index[v];

	    qpb_apply_dirac_z(spinor_ptr, spinor_in.index0, gauge.index, v);
	    qpb_apply_laplace_z(spinor_ptr, spinor_in.index0, gauge.index, v);
	  }

  for(x[0]=0; x[0]<l_dim[0]; x[0]++)
    for(x[1]=0; x[1]<l_dim[1]; x[1]++)
      for(x[2]=y[2]; x[2]<l_dim[2]-y[2]; x[2]++)
	for(x[3]=0; x[3]<l_dim[3]; x[3]++)
	  {
	    int v = blk_to_ext[LEXICO(x, l_dim)];
	    qpb_complex *spinor_ptr = (qpb_complex *)spinor_out.index[v];

	    qpb_apply_dirac_y(spinor_ptr, spinor_in.index0, gauge.index, v);
	    qpb_apply_laplace_y(spinor_ptr, spinor_in.index0, gauge.index, v);
	  }

  for(x[0]=0; x[0]<l_dim[0]; x[0]++)
    for(x[1]=0; x[1]<l_dim[1]; x[1]++)
      for(x[2]=0; x[2]<l_dim[2]; x[2]++)
	for(x[3]=y[3]; x[3]<l_dim[3]-y[3]; x[3]++)
	  {
	    int v = blk_to_ext[LEXICO(x, l_dim)];
	    qpb_complex *spinor_ptr = (qpb_complex *)spinor_out.index[v];

	    qpb_apply_dirac_x(spinor_ptr, spinor_in.index0, gauge.index, v);
	    qpb_apply_laplace_x(spinor_ptr, spinor_in.index0, gauge.index, v);
	  }

  qpb_comm_halo_spinor_field_wait(spinor_in);
  if(problem_params.par_dir[1])
    {
      int dir = 1;
      for(int i=0; i<lvol/l_dim[dir]; i++)
	{
	  int v;
	  v = skin_to_ext[dir+ND][i];
	  qpb_apply_dirac_z((qpb_complex *) spinor_out.index[v],
			    spinor_in.index, gauge.index, v);
	  qpb_apply_laplace_z((qpb_complex *) spinor_out.index[v],
			      spinor_in.index, gauge.index, v);

	  v = skin_to_ext[dir][i];
	  qpb_apply_dirac_z((qpb_complex *) spinor_out.index[v],
			    spinor_in.index, gauge.index, v);
	  qpb_apply_laplace_z((qpb_complex *) spinor_out.index[v],
			      spinor_in.index, gauge.index, v);
	}
    }

  if(problem_params.par_dir[2])
    {
      int dir = 2;
      for(int i=0; i<lvol/l_dim[dir]; i++)
	{
	  int v;
	  v = skin_to_ext[dir+ND][i];
	  qpb_apply_dirac_y((qpb_complex *) spinor_out.index[v],
			    spinor_in.index, gauge.index, v);
	  qpb_apply_laplace_y((qpb_complex *) spinor_out.index[v],
			      spinor_in.index, gauge.index, v);
	  
	  v = skin_to_ext[dir][i];
	  qpb_apply_dirac_y((qpb_complex *) spinor_out.index[v],
			    spinor_in.index, gauge.index, v);
	  qpb_apply_laplace_y((qpb_complex *) spinor_out.index[v],
			      spinor_in.index, gauge.index, v);
	}
    }

  if(problem_params.par_dir[3])
    {
      int dir = 3;
      for(int i=0; i<lvol/l_dim[dir]; i++)
	{
	  int v;
	  v = skin_to_ext[dir+ND][i];
	  qpb_apply_dirac_x((qpb_complex *) spinor_out.index[v],
			    spinor_in.index, gauge.index, v);
	  qpb_apply_laplace_x((qpb_complex *) spinor_out.index[v],
			      spinor_in.index, gauge.index, v);

	  v = skin_to_ext[dir][i];
	  qpb_apply_dirac_x((qpb_complex *) spinor_out.index[v],
			    spinor_in.index, gauge.index, v);
	  qpb_apply_laplace_x((qpb_complex *) spinor_out.index[v],
			      spinor_in.index, gauge.index, v);
	}
    }

  for(int lv=0; lv<lvol; lv++)
    {
      qpb_complex *out = (qpb_complex *)(spinor_out.bulk[lv]);
      qpb_complex *in = (qpb_complex *)(spinor_in.bulk[lv]);
      COLSPIN_SCALE(out, 0.5, out);
      COLSPIN_AXPY(out, (mass+4.0), in, out);
    }
  
  return;
}
