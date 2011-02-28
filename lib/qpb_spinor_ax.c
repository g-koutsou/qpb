#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>

void
qpb_spinor_ax(qpb_spinor_field z, qpb_complex alpha, qpb_spinor_field x)
{
  int lvol = problem_params.l_vol;
#ifdef OPENMP
#pragma omp parallel for
#endif
  for(int v=0; v<lvol; v++)
    {
      qpb_complex *z_ptr = (qpb_complex *)z.bulk[v];
      for(int cs=0; cs<NC*NS; cs++)
	{
	  qpb_complex xx = *((qpb_complex *)x.bulk[v]+cs);
	  (z_ptr + cs)->re = alpha.re*xx.re - alpha.im*xx.im;
	  (z_ptr + cs)->im = alpha.re*xx.im + alpha.im*xx.re;
	}      
    }
  return;
}

