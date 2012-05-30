#include <mpi.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_alloc.h>
#include <qpb_spinor_linalg.h>

void
qpb_spinor_xdotx(qpb_double *dot_prod, qpb_spinor_field x)
{
  qpb_quad accum = 0;

  int lvol = problem_params.l_vol;
#ifdef OPENMP
#pragma omp parallel for reduction(+: accum)
#endif
  for(int v=0; v<lvol; v++)
    for(int cs=0; cs<NS*NC; cs++)
      {
	accum += CNORM2(x.bulk[v][cs]);
      }

  MPI_Comm comm = problem_params.mpi_comm_cart;
  int np = problem_params.nprocs;
  qpb_quad *accum_v = NULL;
  if(am_master)
    accum_v = qpb_alloc(sizeof(qpb_quad)*np);

  MPI_Gather(&accum, sizeof(qpb_quad), MPI_BYTE,
	     accum_v, sizeof(qpb_quad), MPI_BYTE, QPB_MASTER_PROC, comm);
  
  accum = 0.0;
  if(am_master)
    for(int i=0; i<np; i++)
      accum += accum_v[i];
    
  MPI_Bcast(&accum, sizeof(qpb_quad), MPI_BYTE, QPB_MASTER_PROC, comm);  
 
  if(am_master)
    free(accum_v);

  *dot_prod = (qpb_double) accum;
  return;
}

