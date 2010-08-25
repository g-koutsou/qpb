#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_byte_order.h>
#include <qpb_alloc.h>
#include <qpb_errors.h>

void
qpb_read_spinor(qpb_spinor_field spinor_field, char fname[])
{
  MPI_Datatype mpi_dtype_spinor_float, filetype;
  MPI_Type_contiguous(2*NC*NS, MPI_FLOAT, &mpi_dtype_spinor_float);
  MPI_Type_commit(&mpi_dtype_spinor_float);

  int starts[ND], l_dim[ND], g_dim[ND];
  for(int i=0; i<ND; i++)
    {
      starts[i] = problem_params.coords[i]*problem_params.l_dim[i];
      l_dim[i] = problem_params.l_dim[i];
      g_dim[i] = problem_params.g_dim[i];
    };

  int ierr = MPI_Type_create_subarray(ND, g_dim, l_dim, starts, MPI_ORDER_C, 
				      mpi_dtype_spinor_float, &filetype);
  MPI_Type_commit(&filetype);

  MPI_File fhandle;
  ierr = MPI_File_open(MPI_COMM_WORLD, fname, MPI_MODE_RDONLY,
		       MPI_INFO_NULL, &fhandle);
  if(ierr != MPI_SUCCESS)
    {
      if(am_master)
	{
	  fprintf(stderr, "%s: MPI_File_open() returned in error\n", fname);
	  exit(QPB_FILE_ERROR);
	}
    }

  ierr = MPI_File_set_view(fhandle, 0, mpi_dtype_spinor_float, filetype, 
			   "native", MPI_INFO_NULL);
  if(ierr != MPI_SUCCESS)
    {
      if(am_master)
	{
	  fprintf(stderr, "%s: MPI_File_set_view() returned in error\n", fname);
	  exit(QPB_FILE_ERROR);
	}
    }

  void *buffer = qpb_alloc(problem_params.l_vol*sizeof(qpb_spinor_float));

  MPI_Status status;
  ierr = MPI_File_read_all(fhandle, buffer, problem_params.l_vol, 
			   mpi_dtype_spinor_float, &status);
  if(ierr != MPI_SUCCESS)
    {
      if(am_master)
       	{
	  fprintf(stderr, "%s: MPI_File_read() returned in error\n", fname);
	  exit(QPB_FILE_ERROR);
	}
    }

  if(!qpb_is_bigendian())
    qpb_byte_swap_float(buffer, problem_params.l_vol*NC*NS*2);

  for(int v=0; v<problem_params.l_vol; v++)
    for(int sp=0; sp<NC*NS; sp++)
	  {
	    spinor_field.bulk[v][sp].re = ((float *) buffer)[v*NC*NS*2 + sp*2];
	    spinor_field.bulk[v][sp].im = ((float *) buffer)[v*NC*NS*2 + sp*2 + 1];
	  }
    
  ierr = MPI_File_close(&fhandle);
  if(ierr != MPI_SUCCESS)
    {
      if(am_master)
       	{
	  fprintf(stderr, "%s: MPI_File_close() returned in error\n", fname);
	  exit(QPB_FILE_ERROR);
	}
    }
  free(buffer);

  return;
}
