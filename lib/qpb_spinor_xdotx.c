#include <mpi.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>

void
qpb_spinor_xdotx(qpb_double *dot_prod, qpb_spinor_field x)
{

#ifdef HAVE_LONG_DOUBLE
  long double accum = 0;
#else
  double accum = 0;
#endif /* HAVE_LONG_DOUBLE */

  int lvol = problem_params.l_vol;
#ifdef OPENMP
#pragma omp parallel for reduction(+: accum)
#endif
  for(int v=0; v<lvol; v++)
    for(int cs=0; cs<NS*NC; cs++)
      {
	accum += CNORM2(x.bulk[v][cs]);
      }

#ifdef HAVE_LONG_DOUBLE
  long double accum_sum;
  //MPI_Allreduce(MPI_IN_PLACE, &accum, 1, MPI_LONG_DOUBLE, MPI_SUM, MPI_COMM_WORLD);
  MPI_Reduce(&accum, &accum_sum, 1, MPI_LONG_DOUBLE, MPI_SUM, QPB_MASTER_PROC, MPI_COMM_WORLD);
  MPI_Bcast(&accum_sum, 1, MPI_LONG_DOUBLE, QPB_MASTER_PROC, MPI_COMM_WORLD);  
#else
  double accum_sum;
  //MPI_Allreduce(MPI_IN_PLACE, &accum_dbl, 1, MPI_DOUBLE, MPI_SUM, MPI_COMM_WORLD);
  MPI_Reduce(&accum, &accum_sum, 1, MPI_DOUBLE, MPI_SUM, QPB_MASTER_PROC, MPI_COMM_WORLD);
  MPI_Bcast(&accum_sum, 1, MPI_DOUBLE, QPB_MASTER_PROC, MPI_COMM_WORLD);  
#endif /* HAVE_LONG_DOUBLE */
  
  *dot_prod = accum_sum;
  return;
}

