#include <mpi.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_alloc.h>
#include <qpb_spinor_linalg.h>

void
qpb_spinor_xdoty(qpb_complex_double *dot_prod, qpb_spinor_field x, qpb_spinor_field y)
{
  qpb_quad accum_re = 0;
  qpb_quad accum_im = 0;

  int lvol = problem_params.l_vol;
#ifdef OPENMP
#pragma omp parallel for reduction(+: accum_im, accum_re)
#endif
  for(int v=0; v<lvol; v++)
    for(int cs=0; cs<NS*NC; cs++)
      {
	accum_re += x.bulk[v][cs].re*y.bulk[v][cs].re + x.bulk[v][cs].im*y.bulk[v][cs].im;
	accum_im += x.bulk[v][cs].re*y.bulk[v][cs].im - x.bulk[v][cs].im*y.bulk[v][cs].re;
      }

  MPI_Comm comm = problem_params.mpi_comm_cart;
  int np = problem_params.nprocs;
  qpb_quad *accum_v_re = NULL;
  qpb_quad *accum_v_im = NULL;
  if(am_master)
    {
      accum_v_re = qpb_alloc(sizeof(qpb_quad)*np);
      accum_v_im = qpb_alloc(sizeof(qpb_quad)*np);
    }

  MPI_Gather(&accum_re, sizeof(qpb_quad), MPI_BYTE,
	     accum_v_re, sizeof(qpb_quad), MPI_BYTE, QPB_MASTER_PROC, comm);
  MPI_Gather(&accum_im, sizeof(qpb_quad), MPI_BYTE,
	     accum_v_im, sizeof(qpb_quad), MPI_BYTE, QPB_MASTER_PROC, comm);
  
  accum_re = 0.0;
  accum_im = 0.0;
  if(am_master)
    for(int i=0; i<np; i++)
      {
	accum_re += accum_v_re[i];
	accum_im += accum_v_im[i];
      }
    
  MPI_Bcast(&accum_re, sizeof(qpb_quad), MPI_BYTE, QPB_MASTER_PROC, comm);  
  MPI_Bcast(&accum_im, sizeof(qpb_quad), MPI_BYTE, QPB_MASTER_PROC, comm);  
 
  if(am_master)
    {
      free(accum_v_re);
      free(accum_v_im);
    }

  dot_prod->re = (qpb_double) accum_re;
  dot_prod->im = (qpb_double) accum_im;
  return;
}
