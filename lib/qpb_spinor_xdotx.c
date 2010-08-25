#include <mpi.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>

void
qpb_spinor_xdotx(qpb_double *dot_prod, qpb_spinor_field x)
{
  *dot_prod = 0.;
  int lvol = problem_params.l_vol;
  for(int v=0; v<lvol; v++)
    for(int cs=0; cs<NS*NC; cs++)
      {
	*dot_prod += CNORM2(x.bulk[v][cs]);
      }
  MPI_Allreduce(MPI_IN_PLACE, dot_prod, 1, MPI_DOUBLE, MPI_SUM, MPI_COMM_WORLD);
  return;
}

