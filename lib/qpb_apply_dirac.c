#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>

void 
qpb_apply_dirac(qpb_spinor_field spinor_out, qpb_spinor_field spinor_in,
	  qpb_gauge_field gauge, qpb_double mass)
{
  int lvol = problem_params.l_vol;
  for(int lv=0; lv<lvol; lv++)
    {
      int v = blk_to_ext[lv];
      int dir;
      qpb_complex *out = (qpb_complex *) spinor_out.index[v];
      qpb_spinor aux_spinor0, aux_spinor1;
      qpb_complex *link;
      qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
      qpb_complex *sp1 = (qpb_complex *)&aux_spinor1;
      qpb_complex *ptr0;

      dir = 0;
      link = (qpb_complex *)((qpb_link *) gauge.index[v] + dir);
      ptr0 = (qpb_complex *) spinor_in.index[nneigh[dir][v]];
      COL_MPLY(sp0, link, ptr0);
      link = (qpb_complex *)((qpb_link *) gauge.index[nneigh[dir+ND][v]] + dir);
      ptr0 = (qpb_complex *) spinor_in.index[nneigh[dir+ND][v]];
      COL_MPLY_DAG(sp1, link, ptr0);
      COLSPIN_SUB(sp0, sp0, sp1);
      GAMMAT(out, sp0);

      dir = 1;
      link = (qpb_complex *)((qpb_link *) gauge.index[v] + dir);
      ptr0 = (qpb_complex *) spinor_in.index[nneigh[dir][v]];
      COL_MPLY(sp0, link, ptr0);
      link = (qpb_complex *)((qpb_link *) gauge.index[nneigh[dir+ND][v]] + dir);
      ptr0 = (qpb_complex *) spinor_in.index[nneigh[dir+ND][v]];
      COL_MPLY_DAG(sp1, link, ptr0);
      COLSPIN_SUB(sp0, sp0, sp1);
      GAMMAZ_PEQ(out, sp0);

      dir = 2;
      link = (qpb_complex *)((qpb_link *) gauge.index[v] + dir);
      ptr0 = (qpb_complex *) spinor_in.index[nneigh[dir][v]];
      COL_MPLY(sp0, link, ptr0);
      link = (qpb_complex *)((qpb_link *) gauge.index[nneigh[dir+ND][v]] + dir);
      ptr0 = (qpb_complex *) spinor_in.index[nneigh[dir+ND][v]];
      COL_MPLY_DAG(sp1, link, ptr0);
      COLSPIN_SUB(sp0, sp0, sp1);
      GAMMAY_PEQ(out, sp0);

      dir = 3;
      link = (qpb_complex *)((qpb_link *) gauge.index[v] + dir);
      ptr0 = (qpb_complex *) spinor_in.index[nneigh[dir][v]];
      COL_MPLY(sp0, link, ptr0);
      link = (qpb_complex *)((qpb_link *) gauge.index[nneigh[dir+ND][v]] + dir);
      ptr0 = (qpb_complex *) spinor_in.index[nneigh[dir+ND][v]];
      COL_MPLY_DAG(sp1, link, ptr0);
      COLSPIN_SUB(sp0, sp0, sp1);
      GAMMAX_PEQ(out, sp0);

      COLSPIN_SCALE(out, 0.5, out);
    }

  for(int lv=0; lv<lvol; lv++)
    {
      qpb_complex *out = (qpb_complex *)(spinor_out.bulk[lv]);
      qpb_complex *in = (qpb_complex *)(spinor_in.bulk[lv]);
      COLSPIN_AXPY(out, mass, in, out);
    }
  
  return;
}
