#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_alloc.h>

void
qpb_comm_halo_diagonal_links(qpb_diagonal_links diagonal_links)
{

  int edim[ND], ldim[ND], par_dir[ND];
  for(int d=0; d<ND; d++)
    {
      edim[d] = problem_params.ext_dim[d];
      ldim[d] = problem_params.l_dim[d];
      par_dir[d] = problem_params.par_dir[d];
    }

  qpb_link (*sendb)[N_HYPERCUBE_NEIGH];
  for(int dir=0; dir<ND; dir++)
    if(par_dir[dir])
	{
	  MPI_Request rcv_req, snd_req;
	  MPI_Status stat;
	  int nn;

	  int dims[ND];
	  for(int d=0; d<ND; d++)
	    dims[d] = edim[d];

	  for(int d=dir+1; d<ND; d++)
	    dims[d] = ldim[d];

	  dims[dir] = 1;

	  int bvol = 1;
	  for(int d=0; d<ND; d++)
	    bvol *= dims[d];
	  
	  sendb = qpb_alloc(sizeof(qpb_link) * N_HYPERCUBE_NEIGH * bvol);

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
		  memcpy(sendb[bv], (void *)diagonal_links.index[ext_v], 
			 N_HYPERCUBE_NEIGH*sizeof(qpb_link));
		}
	  
	      nn = problem_params.proc_neigh[dir+sign*ND];
	      MPI_Irecv(diagonal_links.boundary_start[dir+((1+sign)%2)*ND], 
			sizeof(qpb_link)*N_HYPERCUBE_NEIGH*bvol, MPI_BYTE, nn, 
			problem_params.proc_id, MPI_COMM_WORLD, &rcv_req);
	      
	      nn = problem_params.proc_neigh[dir+((1+sign)%2)*ND];
	      MPI_Isend(sendb, sizeof(qpb_link)*N_HYPERCUBE_NEIGH*bvol, MPI_BYTE, nn,
			nn, MPI_COMM_WORLD, &snd_req);
	      
	      MPI_Wait(&rcv_req, &stat);
	      MPI_Wait(&snd_req, &stat);
	    }
	  free(sendb);
	}

  return;
}



