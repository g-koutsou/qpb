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
  for(int lv=0; lv<lvol; lv++)
    {
      int v = blk_to_ext[lv];
      qpb_spinor sp_dirac, sp_laplace;
      qpb_complex *sp_dirac_ptr = sp_dirac;
      qpb_complex *sp_laplace_ptr = sp_laplace;

      COLSPIN_ZERO(sp_dirac_ptr);
      COLSPIN_ZERO(sp_laplace_ptr);

      qpb_apply_dirac_t(sp_dirac_ptr, spinor_in.index0, gauge.index, v);
      qpb_apply_dirac_z(sp_dirac_ptr, spinor_in.index0, gauge.index, v);
      qpb_apply_dirac_y(sp_dirac_ptr, spinor_in.index0, gauge.index, v);
      qpb_apply_dirac_x(sp_dirac_ptr, spinor_in.index0, gauge.index, v);

      qpb_apply_laplace_t(sp_laplace_ptr, spinor_in.index0, gauge.index, v);
      qpb_apply_laplace_z(sp_laplace_ptr, spinor_in.index0, gauge.index, v);
      qpb_apply_laplace_y(sp_laplace_ptr, spinor_in.index0, gauge.index, v);
      qpb_apply_laplace_x(sp_laplace_ptr, spinor_in.index0, gauge.index, v);

      qpb_complex *out = (qpb_complex *) spinor_out.index[v];
      COLSPIN_SUB(out, sp_dirac_ptr, sp_laplace_ptr);
    }

  unsigned short int *l_dim = problem_params.l_dim;

  int dim[ND];
  for(int d=0; d<ND; d++)
    dim[d] = problem_params.l_dim[d];

  qpb_comm_halo_spinor_field_wait(spinor_in);
  if(problem_params.par_dir[1])
    {
      int dir = 1;
      dim[dir] = 1;
      for(int i=0; i<lvol/l_dim[dir]; i++)
	{
	  int v;
	  int x[ND];
	  qpb_complex *out;

	  qpb_spinor aux_spinor0, aux_spinor1;
	  qpb_complex *link;
	  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
	  qpb_complex *sp1 = (qpb_complex *)&aux_spinor1;
	  qpb_complex *ptr;

	  x[3] = X_INDEX(i, dim);
	  x[2] = Y_INDEX(i, dim);
	  x[1] = Z_INDEX(i, dim);
	  x[0] = T_INDEX(i, dim);
	  v = blk_to_ext[LEXICO(x, l_dim)];

	  out = (qpb_complex *) spinor_out.index[v];	  
	  link = (qpb_complex *)((qpb_link *) gauge.index[nneigh[dir+ND][v]] + dir);
	  ptr = (qpb_complex *) spinor_in.index[nneigh[dir+ND][v]];
	  COL_MPLY_DAG(sp0, link, ptr);
	  GAMMAZ(sp1, sp0);
	  COLSPIN_SUB(out, out, sp0);
	  COLSPIN_SUB(out, out, sp1);

	  x[dir] = l_dim[dir]-1;
	  v = blk_to_ext[LEXICO(x, l_dim)];

	  out = (qpb_complex *) spinor_out.index[v];	  
	  link = (qpb_complex *)((qpb_link *) gauge.index[v] + dir);
	  ptr = (qpb_complex *) spinor_in.index[nneigh[dir][v]];
	  COL_MPLY(sp0, link, ptr);
	  GAMMAZ_PEQ(out, sp0);	  
	  COLSPIN_SUB(out, out, sp0);
	}
      dim[dir] = l_dim[dir];
    }

  if(problem_params.par_dir[2])
    {
      int dir = 2;
      dim[dir] = 1;
      for(int i=0; i<lvol/l_dim[dir]; i++)
	{
	  int v;
	  int x[ND];
	  qpb_complex *out;

	  qpb_spinor aux_spinor0, aux_spinor1;
	  qpb_complex *link;
	  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
	  qpb_complex *sp1 = (qpb_complex *)&aux_spinor1;
	  qpb_complex *ptr;

	  x[3] = X_INDEX(i, dim);
	  x[2] = Y_INDEX(i, dim);
	  x[1] = Z_INDEX(i, dim);
	  x[0] = T_INDEX(i, dim);
	  v = blk_to_ext[LEXICO(x, l_dim)];

	  out = (qpb_complex *) spinor_out.index[v];	  
	  link = (qpb_complex *)((qpb_link *) gauge.index[nneigh[dir+ND][v]] + dir);
	  ptr = (qpb_complex *) spinor_in.index[nneigh[dir+ND][v]];
	  COL_MPLY_DAG(sp0, link, ptr);
	  GAMMAY(sp1, sp0);
	  COLSPIN_SUB(out, out, sp0);
	  COLSPIN_SUB(out, out, sp1);

	  x[dir] = l_dim[dir]-1;
	  v = blk_to_ext[LEXICO(x, l_dim)];

	  out = (qpb_complex *) spinor_out.index[v];	  
	  link = (qpb_complex *)((qpb_link *) gauge.index[v] + dir);
	  ptr = (qpb_complex *) spinor_in.index[nneigh[dir][v]];
	  COL_MPLY(sp0, link, ptr);
	  GAMMAY_PEQ(out, sp0);	  
	  COLSPIN_SUB(out, out, sp0);
	}
      dim[dir] = l_dim[dir];
    }

  if(problem_params.par_dir[3])
    {
      int dir = 3;
      dim[dir] = 1;
      for(int i=0; i<lvol/l_dim[dir]; i++)
	{
	  int v;
	  int x[ND];
	  qpb_complex *out;

	  qpb_spinor aux_spinor0, aux_spinor1;
	  qpb_complex *link;
	  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
	  qpb_complex *sp1 = (qpb_complex *)&aux_spinor1;
	  qpb_complex *ptr;

	  x[3] = X_INDEX(i, dim);
	  x[2] = Y_INDEX(i, dim);
	  x[1] = Z_INDEX(i, dim);
	  x[0] = T_INDEX(i, dim);
	  v = blk_to_ext[LEXICO(x, l_dim)];

	  out = (qpb_complex *) spinor_out.index[v];	  
	  link = (qpb_complex *)((qpb_link *) gauge.index[nneigh[dir+ND][v]] + dir);
	  ptr = (qpb_complex *) spinor_in.index[nneigh[dir+ND][v]];
	  COL_MPLY_DAG(sp0, link, ptr);
	  GAMMAX(sp1, sp0);
	  COLSPIN_SUB(out, out, sp0);
	  COLSPIN_SUB(out, out, sp1);

	  x[dir] = l_dim[dir]-1;
	  v = blk_to_ext[LEXICO(x, l_dim)];

	  out = (qpb_complex *) spinor_out.index[v];	  
	  link = (qpb_complex *)((qpb_link *) gauge.index[v] + dir);
	  ptr = (qpb_complex *) spinor_in.index[nneigh[dir][v]];
	  COL_MPLY(sp0, link, ptr);
	  GAMMAX_PEQ(out, sp0);	  
	  COLSPIN_SUB(out, out, sp0);
	}
      dim[dir] = l_dim[dir];
    }

  for(int lv=0; lv<lvol; lv++)
    {
      qpb_complex *out = (qpb_complex *)(spinor_out.bulk[lv]);
      qpb_complex *in = (qpb_complex *)(spinor_in.bulk[lv]);
      COLSPIN_SCALE(out, 0.5, out)
      COLSPIN_AXPY(out, (mass+4.0), in, out);
    }
  
  return;
}
