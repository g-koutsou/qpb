#include <mpi.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>

void
qpb_spinor_xdoty(qpb_complex_double *dot_prod, qpb_spinor_field x, qpb_spinor_field y)
{
#ifdef HAVE_LONG_DOUBLE
  long double dot_prod_re = 0.0;
  long double dot_prod_im = 0.0;
#else
  double dot_prod_re = 0.0;
  double dot_prod_im = 0.0;
#endif /* HAVE_LONG_DOUBLE */

  int lvol = problem_params.l_vol;
#ifdef OPENMP
#pragma omp parallel for reduction(+: dot_prod_re, dot_prod_im)
#endif
  for(int v=0; v<lvol; v++)
    for(int cs=0; cs<NS*NC; cs++)
      {
	dot_prod_re += x.bulk[v][cs].re*y.bulk[v][cs].re + x.bulk[v][cs].im*y.bulk[v][cs].im;
	dot_prod_im += x.bulk[v][cs].re*y.bulk[v][cs].im - x.bulk[v][cs].im*y.bulk[v][cs].re;
      }

#ifdef HAVE_LONG_DOUBLE
  long double dot_prod_reim[2] = {
    dot_prod_re,
    dot_prod_im
  };
  long double dot_prod_sum[2];
  //MPI_Allreduce(MPI_IN_PLACE, dot_prod_reim, 2, MPI_LONG_DOUBLE, 
  //MPI_SUM, MPI_COMM_WORLD);
  MPI_Reduce(dot_prod_reim, dot_prod_sum, 2, MPI_LONG_DOUBLE, MPI_SUM, QPB_MASTER_PROC, MPI_COMM_WORLD);
  MPI_Bcast(dot_prod_sum, 2, MPI_LONG_DOUBLE, QPB_MASTER_PROC, MPI_COMM_WORLD);
#else
  double dot_prod_reim[2] = {
    dot_prod_re,
    dot_prod_im
  };
  long double dot_prod_sum[2];
  //MPI_Allreduce(MPI_IN_PLACE, dot_prod_reim, 2, MPI_DOUBLE, 
  //MPI_SUM, MPI_COMM_WORLD);
  MPI_Reduce(dot_prod_reim, dot_prod_sum, 2, MPI_DOUBLE, MPI_SUM, QPB_MASTER_PROC, MPI_COMM_WORLD);
  MPI_Bcast(dot_prod_sum, 2, MPI_DOUBLE, QPB_MASTER_PROC, MPI_COMM_WORLD);  
#endif /* HAVE_LONG_DOUBLE */

  dot_prod->re = dot_prod_sum[0];
  dot_prod->im = dot_prod_sum[1];

  return;
}

