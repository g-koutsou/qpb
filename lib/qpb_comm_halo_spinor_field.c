#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_alloc.h>

qpb_spinor *sendb[2*ND];
qpb_spinor *recvb[2*ND];

MPI_Request recv_req[2*ND], send_req[2*ND];

void
qpb_comm_halo_spinor_field_init()
{
  for(int dir=1; dir<ND; dir++)
    {
      if(problem_params.par_dir[dir])
	{
	  int nn;
	  int b_vol = 1;
	  int b_dim[ND], shifts[ND];
	  for(int d=0; d<dir; d++)
	    {
	      b_dim[d] = problem_params.ext_dim[d];
	      shifts[d] = 0;
	    }
	  for(int d=dir+1; d<ND; d++)
	    {
	      b_dim[d] = problem_params.l_dim[d];
	      shifts[d] = problem_params.par_dir[d];
	    }
	  b_dim[dir] = 1;
	  shifts[dir] = 0;
	  for(int d=0; d<ND; d++)
	    b_vol *= b_dim[d];
	  
	  recvb[dir] = qpb_alloc(sizeof(qpb_spinor) * b_vol);
	  sendb[dir] = qpb_alloc(sizeof(qpb_spinor) * b_vol);

	  nn = problem_params.proc_neigh[dir];
	  MPI_Recv_init(recvb[dir], sizeof(qpb_spinor)*b_vol, MPI_BYTE, nn, 
			problem_params.proc_id, MPI_COMM_WORLD, &recv_req[dir]);

	  nn = problem_params.proc_neigh[dir+ND];
	  MPI_Send_init(sendb[dir], sizeof(qpb_spinor)*b_vol, MPI_BYTE, nn,
			nn, MPI_COMM_WORLD, &send_req[dir]);

	  recvb[dir+ND] = qpb_alloc(sizeof(qpb_spinor) * b_vol);
	  sendb[dir+ND] = qpb_alloc(sizeof(qpb_spinor) * b_vol);


	  nn = problem_params.proc_neigh[dir+ND];
	  MPI_Recv_init(recvb[dir+ND], sizeof(qpb_spinor)*b_vol, MPI_BYTE, nn, 
			problem_params.proc_id, MPI_COMM_WORLD, &recv_req[dir+ND]);
	  
	  nn = problem_params.proc_neigh[dir];
	  MPI_Send_init(sendb[dir+ND], sizeof(qpb_spinor)*b_vol, MPI_BYTE, nn,
			nn, MPI_COMM_WORLD, &send_req[dir+ND]);
	}
    }
  return;
}

void
qpb_comm_halo_spinor_field_finalize()
{
  for(int dir=1; dir<ND; dir++)
    if(problem_params.par_dir[dir])
      {
	free(recvb[dir]);
	free(sendb[dir]);
	free(recvb[dir+ND]);
	free(sendb[dir+ND]);

	MPI_Request_free(&recv_req[dir]);
	MPI_Request_free(&send_req[dir]);

	MPI_Request_free(&recv_req[dir+ND]);
	MPI_Request_free(&send_req[dir+ND]);
      }
  return;
}

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
		  memcpy(sendb[dir+sign*ND][bv], 
			 (void *)spinor_field.index[ext_v], 
			 sizeof(qpb_spinor));
		}
	      MPI_Start(&recv_req[dir+sign*ND]);
	      MPI_Start(&send_req[dir+sign*ND]);
	    }
	}
    }
  return;
}

void
qpb_comm_halo_spinor_field_wait(qpb_spinor_field spinor_field)
{
  int edim[ND], ldim[ND];
  int par_dir[ND];
  for(int d=0; d<ND; d++)
    {
      edim[d] = problem_params.ext_dim[d];
      ldim[d] = problem_params.l_dim[d];
      par_dir[d] = problem_params.par_dir[d];
    }

  for(int dir=0; dir<ND; dir++)
    if(problem_params.par_dir[dir])
      for(int sign=0; sign<2; sign++)
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
	    
	  MPI_Status stat;
	  MPI_Wait(&recv_req[dir+sign*ND], &stat);
	  MPI_Wait(&send_req[dir+sign*ND], &stat);
	    
	  memcpy((void *)spinor_field.boundary_start[dir+((sign+1)%2)*ND],
		 recvb[dir+sign*ND],
		 bvol*sizeof(qpb_spinor));
	}
  return;
};
