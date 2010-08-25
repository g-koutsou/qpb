#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_alloc.h>

void
qpb_comm_halo_gauge_field(qpb_gauge_field gauge_field)
{
  qpb_link (*sendb)[ND];
  qpb_link (*recvb)[ND];

  int ext_dim[ND] = 
    {
      problem_params.ext_dim[0],
      problem_params.ext_dim[1],
      problem_params.ext_dim[2],
      problem_params.ext_dim[3]
    };

  for(int dir=1; dir<ND; dir++)
    {
      if(problem_params.par_dir[dir])
	{
	  MPI_Request rcv_req, snd_req;
	  MPI_Status stat;
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
	  
	  recvb = qpb_alloc(sizeof(qpb_link) * ND * b_vol);
	  sendb = qpb_alloc(sizeof(qpb_link) * ND * b_vol);

	  for(int i=0; i<b_vol; i++)
	    {
	      int x[ND];
	      x[3] = X_INDEX(i, b_dim);
	      x[2] = Y_INDEX(i, b_dim);
	      x[1] = Z_INDEX(i, b_dim);
	      x[0] = T_INDEX(i, b_dim);
	      
	      x[dir] = 1;
	      for(int d=0; d<ND; d++)
		x[d] += shifts[d];

	      int v = LEXICO(x, ext_dim);	      
	      memcpy(sendb[i], (void *)gauge_field.index[v], ND*sizeof(qpb_link));
	    }

	  nn = problem_params.proc_neigh[dir];
	  MPI_Irecv(recvb, sizeof(qpb_link)*ND*b_vol, MPI_BYTE, nn, 
		    problem_params.proc_id, MPI_COMM_WORLD, &rcv_req);

	  nn = problem_params.proc_neigh[dir+ND];
	  MPI_Isend(sendb, sizeof(qpb_link)*ND*b_vol, MPI_BYTE, nn,
		    nn, MPI_COMM_WORLD, &snd_req);

	  MPI_Wait(&rcv_req, &stat);
	  MPI_Wait(&snd_req, &stat);

	  for(int i=0; i<b_vol; i++)
	    {
	      int x[ND];
	      x[3] = X_INDEX(i, b_dim);
	      x[2] = Y_INDEX(i, b_dim);
	      x[1] = Z_INDEX(i, b_dim);
	      x[0] = T_INDEX(i, b_dim);
	      
	      x[dir] = ext_dim[dir] - 1;
	      for(int d=0; d<ND; d++)
                x[d] += shifts[d];

              int v = LEXICO(x, ext_dim);
	      memcpy((void *)gauge_field.index[v], recvb[i], ND*sizeof(qpb_link));
	    }

	  for(int i=0; i<b_vol; i++)
	    {
	      int x[ND];
	      x[3] = X_INDEX(i, b_dim);
	      x[2] = Y_INDEX(i, b_dim);
	      x[1] = Z_INDEX(i, b_dim);
	      x[0] = T_INDEX(i, b_dim);
	      
	      x[dir] = ext_dim[dir] - 2;
              for(int d=0; d<ND; d++)
                x[d] += shifts[d];

              int v = LEXICO(x, ext_dim);	      
	      memcpy(sendb[i], (void *)gauge_field.index[v], ND*sizeof(qpb_link));
	    }

	  nn = problem_params.proc_neigh[dir+ND];
	  MPI_Irecv(recvb, sizeof(qpb_link)*ND*b_vol, MPI_BYTE, nn, 
		    problem_params.proc_id, MPI_COMM_WORLD, &rcv_req);

	  nn = problem_params.proc_neigh[dir];
	  MPI_Isend(sendb, sizeof(qpb_link)*ND*b_vol, MPI_BYTE, nn,
		    nn, MPI_COMM_WORLD, &snd_req);

	  MPI_Wait(&rcv_req, &stat);
	  MPI_Wait(&snd_req, &stat);

	  for(int i=0; i<b_vol; i++)
	    {
	      int x[ND];
	      x[3] = X_INDEX(i, b_dim);
	      x[2] = Y_INDEX(i, b_dim);
	      x[1] = Z_INDEX(i, b_dim);
	      x[0] = T_INDEX(i, b_dim);
	      
	      x[dir] = 0;
              for(int d=0; d<ND; d++)
                x[d] += shifts[d];

              int v = LEXICO(x, ext_dim);
	      memcpy((void *)gauge_field.index[v], recvb[i], ND*sizeof(qpb_link));
	    }	  

	  free(sendb);
	  free(recvb);
	}
    }
  return;
}
