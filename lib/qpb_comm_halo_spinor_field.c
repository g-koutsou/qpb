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
qpb_comm_halo_spinor_field_start(qpb_spinor_field spinor_field)
{
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
	      memcpy(sendb[dir][i], (void *)spinor_field.index[v], sizeof(qpb_spinor));
	    }

	  nn = problem_params.proc_neigh[dir];
	  MPI_Irecv(recvb[dir], sizeof(qpb_spinor)*b_vol, MPI_BYTE, nn, 
		    problem_params.proc_id, MPI_COMM_WORLD, &recv_req[dir]);

	  nn = problem_params.proc_neigh[dir+ND];
	  MPI_Isend(sendb[dir], sizeof(qpb_spinor)*b_vol, MPI_BYTE, nn,
		    nn, MPI_COMM_WORLD, &send_req[dir]);

	  recvb[dir+ND] = qpb_alloc(sizeof(qpb_spinor) * b_vol);
	  sendb[dir+ND] = qpb_alloc(sizeof(qpb_spinor) * b_vol);

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
	      memcpy(sendb[dir+ND][i], (void *)spinor_field.index[v], 
		     sizeof(qpb_spinor));
	    }

	  nn = problem_params.proc_neigh[dir+ND];
	  MPI_Irecv(recvb[dir+ND], sizeof(qpb_spinor)*b_vol, MPI_BYTE, nn, 
		    problem_params.proc_id, MPI_COMM_WORLD, &recv_req[dir+ND]);

	  nn = problem_params.proc_neigh[dir];
	  MPI_Isend(sendb[dir+ND], sizeof(qpb_spinor)*b_vol, MPI_BYTE, nn,
		    nn, MPI_COMM_WORLD, &send_req[dir+ND]);
	}
    }
  return;
}

void
qpb_comm_halo_spinor_field_wait(qpb_spinor_field spinor_field)
{
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

	  MPI_Status stat;
	  MPI_Wait(&recv_req[dir], &stat);
	  MPI_Wait(&send_req[dir], &stat);

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
	      memcpy((void *)spinor_field.index[v], recvb[dir][i], sizeof(qpb_spinor));
	    }

	  MPI_Wait(&recv_req[dir+ND], &stat);
	  MPI_Wait(&send_req[dir+ND], &stat);

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
	      memcpy((void *)spinor_field.index[v], recvb[dir+ND][i], 
		     sizeof(qpb_spinor));
	    }	  

	  free(sendb[dir]);
	  free(recvb[dir]);
	  free(sendb[dir+ND]);
	  free(recvb[dir+ND]);
	}
    }
  return;
};
