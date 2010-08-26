#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>
#include <qpb_apply_dirac_tzyx.h>

void 
qpb_apply_dirac(qpb_spinor_field spinor_out, qpb_spinor_field spinor_in,
	  qpb_gauge_field gauge, qpb_double mass)
{
  int lvol = problem_params.l_vol;
  for(int lv=0; lv<lvol; lv++)
    {
      int v = blk_to_ext[lv];
      qpb_spinor sp;
      qpb_complex *sp_ptr = sp;
      COLSPIN_ZERO(sp_ptr);

      qpb_apply_dirac_t(sp_ptr, spinor_in.index, gauge.index, v);
      qpb_apply_dirac_z(sp_ptr, spinor_in.index, gauge.index, v);
      qpb_apply_dirac_y(sp_ptr, spinor_in.index, gauge.index, v);
      qpb_apply_dirac_x(sp_ptr, spinor_in.index, gauge.index, v);

      qpb_complex *out = (qpb_complex *) spinor_out.index[v];
      COLSPIN_SCALE(out, 0.5, sp_ptr);
    }

  for(int lv=0; lv<lvol; lv++)
    {
      qpb_complex *out = (qpb_complex *)(spinor_out.bulk[lv]);
      qpb_complex *in = (qpb_complex *)(spinor_in.bulk[lv]);
      COLSPIN_AXPY(out, mass, in, out);
    }
  
  return;
}
