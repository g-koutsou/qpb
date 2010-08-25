#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>

void
qpb_spinor_xmy(qpb_spinor_field z, qpb_spinor_field x, qpb_spinor_field y)
{
  int lvol = problem_params.l_vol;
  for(int v=0; v<lvol; v++)
    for(int cs=0; cs<NC*NS; cs++)
      {
	qpb_complex *x_ptr = (qpb_complex *)x.bulk[v]+cs;
	qpb_complex *y_ptr = (qpb_complex *)y.bulk[v]+cs;
	qpb_complex *z_ptr = (qpb_complex *)z.bulk[v]+cs;
	
	*z_ptr = CSUB(*x_ptr, *y_ptr);
      }
  return;
}

