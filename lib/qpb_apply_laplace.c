#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>
#include <qpb_apply_laplace_tzyx.h>

void 
qpb_apply_laplace(qpb_spinor_field spinor_out, qpb_spinor_field spinor_in, 
	    qpb_gauge_field gauge)
{
  int lvol = problem_params.l_vol;
  for(int lv=0; lv<lvol; lv++)
    {
      int v = blk_to_ext[lv];
      qpb_spinor sp;
      qpb_complex *sp_ptr = sp;
      COLSPIN_ZERO(sp_ptr);

      qpb_apply_laplace_t(sp_ptr, spinor_in.index, gauge.index, v);
      qpb_apply_laplace_z(sp_ptr, spinor_in.index, gauge.index, v);
      qpb_apply_laplace_y(sp_ptr, spinor_in.index, gauge.index, v);
      qpb_apply_laplace_x(sp_ptr, spinor_in.index, gauge.index, v);

      qpb_complex *out = (qpb_complex *) spinor_out.index[v];
      COLSPIN_AXPY(out, -0.5, sp_ptr, out);

      qpb_complex *in = (qpb_complex *) spinor_in.index[v];
      COLSPIN_AXPY(out, 4.0, in, out);
    }
  return;
}
