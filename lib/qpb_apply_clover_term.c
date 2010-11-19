#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>
#include <qpb_apply_clover_term_tzyx.h>


void
qpb_apply_clover_term(qpb_spinor_field out_spinor, qpb_spinor_field in_spinor,
		      qpb_clover_term clover_term, qpb_double c_sw)
{
  int lvol = problem_params.l_vol;
#ifdef OPENMP
#pragma omp parallel for
#endif
  for(int lv=0; lv<lvol; lv++)
    {
      int v = blk_to_ext[lv];
      qpb_spinor aux_spinor;
      qpb_complex *sp = (qpb_complex *)&aux_spinor;
      spinor_set_zero(sp);

      qpb_apply_clover_term_xy(sp, in_spinor.index, clover_term.index, v);
      qpb_apply_clover_term_xz(sp, in_spinor.index, clover_term.index, v);
      qpb_apply_clover_term_xt(sp, in_spinor.index, clover_term.index, v);
      qpb_apply_clover_term_yz(sp, in_spinor.index, clover_term.index, v);
      qpb_apply_clover_term_yt(sp, in_spinor.index, clover_term.index, v);
      qpb_apply_clover_term_zt(sp, in_spinor.index, clover_term.index, v);
	  
      qpb_complex *out = (qpb_complex *)out_spinor.index[v];	  	  
      for(int cs=0; cs<NS*NC; cs++)
	{
	  (out+cs)->re -= (sp+cs)->re * c_sw/2.;
	  (out+cs)->im -= (sp+cs)->im * c_sw/2.;
	}
    }
  return;
}
