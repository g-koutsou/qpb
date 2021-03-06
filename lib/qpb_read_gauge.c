#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_byte_order.h>
#include <qpb_alloc.h>
#include <qpb_errors.h>

void
qpb_read_gauge(qpb_gauge_field gauge_field, size_t offset, size_t precision, char fname[])
{
  MPI_Datatype mpi_dtype_link, filetype;
  if(precision == 32)
    {
      MPI_Type_contiguous(4*2*NC*NC*ND, MPI_BYTE, &mpi_dtype_link);
    }
  else if(precision == 64)
    {
      MPI_Type_contiguous(8*2*NC*NC*ND, MPI_BYTE, &mpi_dtype_link);
    }
  else
    {
      fprintf(stderr, "%s: precision should be either 32 or 64\n", __func__);
      exit(QPB_NOT_IMPLEMENTED_ERROR);
    }
  MPI_Type_commit(&mpi_dtype_link);

  int starts[ND], l_dim[ND], g_dim[ND];
  for(int i=0; i<ND; i++)
    {
      starts[i] = problem_params.coords[i]*problem_params.l_dim[i];
      l_dim[i] = problem_params.l_dim[i];
      g_dim[i] = problem_params.g_dim[i];
    };

  int ierr = MPI_Type_create_subarray(ND, g_dim, l_dim, starts, MPI_ORDER_C, 
				      mpi_dtype_link, &filetype);
  MPI_Type_commit(&filetype);

  MPI_File fhandle;
  ierr = MPI_File_open(MPI_COMM_WORLD, fname, 
		       MPI_MODE_RDONLY, MPI_INFO_NULL, &fhandle);
  if(ierr != MPI_SUCCESS)
    {
      if(am_master)
	{
	  fprintf(stderr, "%s: MPI_File_open() returned in error\n", fname);
	  exit(QPB_FILE_ERROR);
	}
    }

  ierr = MPI_File_set_view(fhandle, (MPI_Offset)offset, mpi_dtype_link, filetype, 
			   "native", MPI_INFO_NULL);
  if(ierr != MPI_SUCCESS)
    {
      if(am_master)
	{
	  fprintf(stderr, "%s: MPI_File_set_view() returned in error\n", fname);
	  exit(QPB_FILE_ERROR);
	}
    }

  void *buffer = NULL;

  if(precision == 32)
    {
      buffer = qpb_alloc(problem_params.l_vol*ND*sizeof(qpb_link_float));
    }
  else if(precision == 64)
    {
      buffer = qpb_alloc(problem_params.l_vol*ND*sizeof(qpb_link_double));
    }

  MPI_Status status;
  ierr = MPI_File_read_all(fhandle, buffer, problem_params.l_vol, 
			   mpi_dtype_link, &status);

  MPI_Type_free(&mpi_dtype_link);
  MPI_Type_free(&filetype);

  ierr = MPI_File_close(&fhandle);
  if(ierr != MPI_SUCCESS)
    {
      if(am_master)
       	{
	  fprintf(stderr, "%s: MPI_File_close() returned in error\n", fname);
	  exit(QPB_FILE_ERROR);
	}
    }

  if(ierr != MPI_SUCCESS)
    {
      if(am_master)
       	{
	  fprintf(stderr, "%s: MPI_File_read() returned in error\n", fname);
	  exit(QPB_FILE_ERROR);
	}
    }
  
  if(!qpb_is_bigendian())
    {
      if(precision == 32)
	qpb_byte_swap_float(buffer, problem_params.l_vol*ND*NC*NC*2);

      if(precision == 64)
	qpb_byte_swap_double(buffer, problem_params.l_vol*ND*NC*NC*2);
    }

  for(int mu=0; mu<ND; mu++)
    for(int v=0; v<problem_params.l_vol; v++)
      for(int col=0; col<NC*NC; col++)
	{
	  if(precision == 32)
	    gauge_field.bulk[v][ND-1 - mu][col] = (qpb_complex) {
	      ((float *) buffer)[2*col + 2*mu*NC*NC + 2*v*NC*NC*ND],
	      ((float *) buffer)[1 + 2*col + 2*mu*NC*NC + 2*v*NC*NC*ND]
	    };
	  if(precision == 64)
	    gauge_field.bulk[v][ND-1 - mu][col] = (qpb_complex) {
	      (float)((double *) buffer)[2*col + 2*mu*NC*NC + 2*v*NC*NC*ND],
	      (float)((double *) buffer)[1 + 2*col + 2*mu*NC*NC + 2*v*NC*NC*ND]
	    };
	}

  free(buffer);
  return;
}
