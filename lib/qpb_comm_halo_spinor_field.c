#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_alloc.h>

static unsigned int spinor_comm_initialized;
static qpb_spinor *sendb[2*ND];
MPI_Request send_req[2*ND];


/*
 * Initializes persistent communication 
 * for spinor fields
 */
void
qpb_comm_halo_spinor_field_init()
{
  if(spinor_comm_initialized != QPB_SPINOR_COMM_INITIALIZED)
    {
      int edim[ND], ldim[ND];
      for(int d=0; d<ND; d++)
	{
	  edim[d] = problem_params.ext_dim[d];
	  ldim[d] = problem_params.l_dim[d];
	}

      for(int dir=1; dir<ND; dir++)
	if(problem_params.par_dir[dir])
	  {
	    int dims[ND];
	    for(int d=0; d<dir; d++)
	      dims[d] = edim[d];
	
	    for(int d=dir+1; d<ND; d++)
	      dims[d] = ldim[d];
	
	    dims[dir] = 1;
	    int bvol = 1;
	    for(int d=0; d<ND; d++)
	      bvol *= dims[d];
	    for(int sign=0; sign<2; sign++)
	      {
		sendb[dir+sign*ND] = qpb_alloc(sizeof(qpb_spinor) * bvol);

		int nn;
		nn = problem_params.proc_neigh[dir+sign*ND];
		MPI_Send_init(sendb[dir+sign*ND], sizeof(qpb_spinor)*bvol, MPI_BYTE, nn,
			      nn + ((sign+1)%2)*problem_params.nprocs, 
			      MPI_COMM_WORLD, &send_req[dir+sign*ND]);
	      }
	  }
      spinor_comm_initialized = QPB_SPINOR_COMM_INITIALIZED;
    }
  return;
}

/*
 * Cleans up persistent communication
 * buffers and MPI_Requests
 */
void
qpb_comm_halo_spinor_field_finalize()
{
  if(spinor_comm_initialized == QPB_SPINOR_COMM_INITIALIZED)
    {
      for(int dir=1; dir<ND; dir++)
	if(problem_params.par_dir[dir])
	  for(int sign=0; sign<2; sign++)
	    {
	      free(sendb[dir+sign*ND]);
	      MPI_Request_free(&send_req[dir+sign*ND]);
	    }
      spinor_comm_initialized = 0;
    }
  return;
}

/*
 * Starts communication over all
 * parallelized directions. 
 *
 * IMORTANT:
 *
 * Does not guarantee communication of corners.
 * For corner communication, run individual directions
 * in the order z, y, x AND WAIT after EVERY direction.
 */
void
qpb_comm_halo_spinor_field_start(qpb_spinor_field spinor_field)
{
  int edim[ND], ldim[ND], par_dir[ND];
  for(int d=0; d<ND; d++)
    {
      edim[d] = problem_params.ext_dim[d];
      ldim[d] = problem_params.l_dim[d];
      par_dir[d] = problem_params.par_dir[d];
    }

  for(int dir=1; dir<ND; dir++)
    {
      if(par_dir[dir])
	{
	  int dims[ND];
	  for(int d=0; d<dir; d++)
	    dims[d] = edim[d];

	  for(int d=dir+1; d<ND; d++)
	    dims[d] = ldim[d];

	  dims[dir] = 1;
	  int bvol = 1;
	  for(int d=0; d<ND; d++)
	    bvol *= dims[d];
	  
	  for(int sign=0; sign<2; sign++)
	    {
	      MPI_Start(&spinor_field.recv_req[dir+sign*ND]);
#ifdef OPENMP
#pragma omp parallel for
#endif
	      for(int bv=0; bv<bvol; bv++)
		{
		  int x[ND];
		  x[3] = X_INDEX(bv, dims);
		  x[2] = Y_INDEX(bv, dims);
		  x[1] = Z_INDEX(bv, dims);
		  x[0] = T_INDEX(bv, dims);
		  x[dir] = sign == 0 ? 1 : edim[dir]-2;
		  for(int d=dir+1; d<ND; d++)
		    x[d] += par_dir[d];
		  
		  int ext_v = LEXICO(x, edim);	      
		  memcpy(sendb[dir+((sign+1)%2)*ND][bv], 
			 (void *)spinor_field.index[ext_v], 
			 sizeof(qpb_spinor));
		}
	    }
	  for(int sign=0; sign<2; sign++)
	    MPI_Start(&send_req[dir+sign*ND]);
	}
    }
  return;
}

/*
 * Blocks until the boundaries of all parallelized
 * directions have arrived.
 */
void
qpb_comm_halo_spinor_field_wait(qpb_spinor_field spinor_field)
{
  for(int dir=0; dir<ND; dir++)
    if(problem_params.par_dir[dir])
      for(int sign=0; sign<2; sign++)
	{	    
	  MPI_Status stat;
	  MPI_Wait(&spinor_field.recv_req[dir+((sign+1)%2)*ND], &stat);
	  MPI_Wait(&send_req[dir+sign*ND], &stat);
	}
  return;
}

/*
 * Start transfer of boundaries along x. Guarantees that corners
 * shall be communicated ONLY IF run in the order:
 *  start_z;
 *  wait_z;
 *  start_y;
 *  wait_y;
 *  start_x;
 *  wait_x;
 */
void
qpb_comm_halo_spinor_field_x_start(qpb_spinor_field spinor_field)
{
  int edim[ND], ldim[ND], par_dir[ND];
  for(int d=0; d<ND; d++)
    {
      edim[d] = problem_params.ext_dim[d];
      ldim[d] = problem_params.l_dim[d];
      par_dir[d] = problem_params.par_dir[d];
    }

  int dir = 3;
  if(par_dir[dir])
    {
      int dims[ND];
      for(int d=0; d<dir; d++)
	dims[d] = edim[d];

      for(int d=dir+1; d<ND; d++)
	dims[d] = ldim[d];

      dims[dir] = 1;
      int bvol = 1;
      for(int d=0; d<ND; d++)
	bvol *= dims[d];
	  
      for(int sign=0; sign<2; sign++)
	{
	  MPI_Start(&spinor_field.recv_req[dir+sign*ND]);
#ifdef OPENMP
#pragma omp parallel for
#endif
	  for(int bv=0; bv<bvol; bv++)
	    {
	      int x[ND];
	      x[3] = X_INDEX(bv, dims);
	      x[2] = Y_INDEX(bv, dims);
	      x[1] = Z_INDEX(bv, dims);
	      x[0] = T_INDEX(bv, dims);
	      x[dir] = sign == 0 ? 1 : edim[dir]-2;
	      for(int d=dir+1; d<ND; d++)
		x[d] += par_dir[d];
		  
	      int ext_v = LEXICO(x, edim);	      
	      memcpy(sendb[dir+((sign+1)%2)*ND][bv], 
		     (void *)spinor_field.index[ext_v], 
		     sizeof(qpb_spinor));
	    }
	}
      for(int sign=0; sign<2; sign++)
	MPI_Start(&send_req[dir+sign*ND]);
    }
  return;
}

/*
 * Wait for x-boundaries
 */
void
qpb_comm_halo_spinor_field_x_wait(qpb_spinor_field spinor_field)
{
  int dir = 3;
  if(problem_params.par_dir[dir])
    for(int sign=0; sign<2; sign++)
      {	    
	MPI_Status stat;
	MPI_Wait(&spinor_field.recv_req[dir+((sign+1)%2)*ND], &stat);
	MPI_Wait(&send_req[dir+sign*ND], &stat);
      }

  return;
}

/*
 * Start transfer of boundaries along y. Guarantees that corners
 * shall be communicated ONLY IF run in the order:
 *  start_z;
 *  wait_z;
 *  start_y;
 *  wait_y;
 *  start_x;
 *  wait_x;
 */
void
qpb_comm_halo_spinor_field_y_start(qpb_spinor_field spinor_field)
{
  int edim[ND], ldim[ND], par_dir[ND];
  for(int d=0; d<ND; d++)
    {
      edim[d] = problem_params.ext_dim[d];
      ldim[d] = problem_params.l_dim[d];
      par_dir[d] = problem_params.par_dir[d];
    }

  int dir = 2;
  if(par_dir[dir])
    {
      int dims[ND];
      for(int d=0; d<dir; d++)
	dims[d] = edim[d];

      for(int d=dir+1; d<ND; d++)
	dims[d] = ldim[d];

      dims[dir] = 1;
      int bvol = 1;
      for(int d=0; d<ND; d++)
	bvol *= dims[d];
	  
      for(int sign=0; sign<2; sign++)
	{
	  MPI_Start(&spinor_field.recv_req[dir+sign*ND]);
#ifdef OPENMP
#pragma omp parallel for
#endif
	  for(int bv=0; bv<bvol; bv++)
	    {
	      int x[ND];
	      x[3] = X_INDEX(bv, dims);
	      x[2] = Y_INDEX(bv, dims);
	      x[1] = Z_INDEX(bv, dims);
	      x[0] = T_INDEX(bv, dims);
	      x[dir] = sign == 0 ? 1 : edim[dir]-2;
	      for(int d=dir+1; d<ND; d++)
		x[d] += par_dir[d];
		  
	      int ext_v = LEXICO(x, edim);	      
	      memcpy(sendb[dir+((sign+1)%2)*ND][bv], 
		     (void *)spinor_field.index[ext_v], 
		     sizeof(qpb_spinor));
	    }
	}
      for(int sign=0; sign<2; sign++)
	MPI_Start(&send_req[dir+sign*ND]);
    }
  return;
}

/*
 * Wait for y-boundaries
 */
void
qpb_comm_halo_spinor_field_y_wait(qpb_spinor_field spinor_field)
{
  int dir = 2;
  if(problem_params.par_dir[dir])
    for(int sign=0; sign<2; sign++)
      {	    
	MPI_Status stat;
	MPI_Wait(&spinor_field.recv_req[dir+((sign+1)%2)*ND], &stat);
	MPI_Wait(&send_req[dir+sign*ND], &stat);
      }

  return;
}

/*
 * Start transfer of boundaries along z. Guarantees that corners
 * shall be communicated ONLY IF run in the order:
 *  start_z;
 *  wait_z;
 *  start_y;
 *  wait_y;
 *  start_x;
 *  wait_x;
 */
void
qpb_comm_halo_spinor_field_z_start(qpb_spinor_field spinor_field)
{
  int edim[ND], ldim[ND], par_dir[ND];
  for(int d=0; d<ND; d++)
    {
      edim[d] = problem_params.ext_dim[d];
      ldim[d] = problem_params.l_dim[d];
      par_dir[d] = problem_params.par_dir[d];
    }

  int dir = 1;
  if(par_dir[dir])
    {
      int dims[ND];
      for(int d=0; d<dir; d++)
	dims[d] = edim[d];

      for(int d=dir+1; d<ND; d++)
	dims[d] = ldim[d];

      dims[dir] = 1;
      int bvol = 1;
      for(int d=0; d<ND; d++)
	bvol *= dims[d];
	  
      for(int sign=0; sign<2; sign++)
	{
	  MPI_Start(&spinor_field.recv_req[dir+sign*ND]);
#ifdef OPENMP
#pragma omp parallel for
#endif
	  for(int bv=0; bv<bvol; bv++)
	    {
	      int x[ND];
	      x[3] = X_INDEX(bv, dims);
	      x[2] = Y_INDEX(bv, dims);
	      x[1] = Z_INDEX(bv, dims);
	      x[0] = T_INDEX(bv, dims);
	      x[dir] = sign == 0 ? 1 : edim[dir]-2;
	      for(int d=dir+1; d<ND; d++)
		x[d] += par_dir[d];
		  
	      int ext_v = LEXICO(x, edim);	      
	      memcpy(sendb[dir+((sign+1)%2)*ND][bv], 
		     (void *)spinor_field.index[ext_v], 
		     sizeof(qpb_spinor));
	    }
	}
      for(int sign=0; sign<2; sign++)
	MPI_Start(&send_req[dir+sign*ND]);
    }
  return;
}

/*
 * Wait for z-boundaries
 */
void
qpb_comm_halo_spinor_field_z_wait(qpb_spinor_field spinor_field)
{
  int dir = 1;
  if(problem_params.par_dir[dir])
    for(int sign=0; sign<2; sign++)
      {	    
	MPI_Status stat;
	MPI_Wait(&spinor_field.recv_req[dir+((sign+1)%2)*ND], &stat);
	MPI_Wait(&send_req[dir+sign*ND], &stat);
      }

  return;

}
