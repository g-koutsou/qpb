#include <mpi.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>

void
qpb_spinor_xdoty(qpb_complex_double *dot_prod, qpb_spinor_field x, qpb_spinor_field y)
{
  long double dot_prod_re = 0.;
  long double dot_prod_im = 0.;
  int lvol = problem_params.l_vol;
#ifdef OPENMP
#pragma omp parallel for reduction(+: dot_prod_re, dot_prod_im)
#endif
  for(int v=0; v<lvol; v++)
    for(int cs=0; cs<NS*NC; cs++)
      {
	dot_prod_re += CMULR(CCONJ(x.bulk[v][cs]), y.bulk[v][cs]);
	dot_prod_im += CMULI(CCONJ(x.bulk[v][cs]), y.bulk[v][cs]);
      }
  long double dot_prod_reim[2] = {
    dot_prod_re,
    dot_prod_im
  };
  MPI_Allreduce(MPI_IN_PLACE, dot_prod_reim, 2, MPI_LONG_DOUBLE, 
		MPI_SUM, MPI_COMM_WORLD);

  dot_prod->re = dot_prod_reim[0];
  dot_prod->im = dot_prod_reim[1];

  return;
}

