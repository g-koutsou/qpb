#include <string.h>
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>

void
qpb_spinor_gamma5(qpb_spinor_field y, qpb_spinor_field x)
{
  int lvol = problem_params.l_vol;
#ifdef OPENMP
#pragma omp parallel
#endif
  {
    qpb_complex xx[NC*NS];
    qpb_complex yy[NC*NS];
#ifdef OPENMP
#pragma omp for
#endif
    for(int v=0; v<lvol; v++)
      {
	memcpy(xx, (qpb_complex *)x.bulk[v], sizeof(qpb_complex)*NS*NC);
	for(int cs=0; cs<NC*NS; cs++)
	  {
	    yy[cs].re = xx[(cs+NC*NS/2)%(NC*NS)].re;
	    yy[cs].im = xx[(cs+NC*NS/2)%(NC*NS)].im;
	  }
	memcpy((qpb_complex *)y.bulk[v], yy, sizeof(qpb_complex)*NS*NC);
      }
  }
  return;
}

