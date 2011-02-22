#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>

void
qpb_spinor_gamma5(qpb_spinor_field y, qpb_spinor_field x)
{
  int lvol = problem_params.l_vol;
#ifdef OPENMP
#pragma omp parallel for
#endif
  for(int v=0; v<lvol; v++)
    {
      qpb_complex *xx = (qpb_complex *)x.bulk[v];
      qpb_complex *yy = (qpb_complex *)y.bulk[v];
      for(int cs=0; cs<NC*NS; cs++)
	{
	  yy[cs].re = xx[(cs+NC*NS/2)%(NC*NS)].re;
	  yy[cs].im = xx[(cs+NC*NS/2)%(NC*NS)].im;
	}      
    }
  return;
}

