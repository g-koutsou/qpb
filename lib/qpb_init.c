#include <stdio.h>
#include <stdlib.h>
#include <qpb_alloc.h>
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_errors.h>
#include <mpi.h>

/* 
   Initializes the global struct problem_params
   and globals nneigh and blk_to_ext.
   MPI_Init() should have been already called
*/
void
qpb_init(int g_dim[ND], int procs_3d[ND-1])
{  
  /* Get rank */
  int rank;
  if(MPI_Comm_rank(MPI_COMM_WORLD, &rank) != MPI_SUCCESS)
    {
      fprintf(stderr, "MPI_Comm_rank() return in error\n");
      exit(QPB_INIT_ERROR);
    }
  /* Get number of processes */
  int nprocs;
  if(MPI_Comm_size(MPI_COMM_WORLD, &nprocs) != MPI_SUCCESS)
    {
      fprintf(stderr, "MPI_Comm_size() return in error\n");
      exit(QPB_INIT_ERROR);
    }
  /* Check subdivision of lattice */
  int bool = 0;
  int procs[ND];
  procs[0] = 1;
  for(int i=1; i<ND; i++)
    {
      procs[i] = procs_3d[i-1];
      bool += g_dim[i] % procs[i];
    }
  if(bool)
    {
      fprintf(stderr, "cannot devide volume to selected grid\n");
      exit(QPB_INIT_ERROR);
    }
  /* Check that user-input grid matches machine size */
  int prod = 1;
  for(int i=0; i<ND; i++)
    {
      prod *= procs[i];
    }
  if(prod != nprocs)
    {
      fprintf(stderr, "not enough processes for specified grid\n");
    }
  /* Set problem_params' members */
  for(int i=0; i<ND; i++)
    problem_params.g_dim[i] = g_dim[i];

  for(int i=0; i<ND; i++)
    problem_params.l_dim[i] = g_dim[i] / procs[i];
  
  problem_params.g_vol = 1;
  for(int i=0; i<ND; i++)
    problem_params.g_vol *= g_dim[i];

  problem_params.l_vol = 1;
  for(int i=0; i<ND; i++)
    problem_params.l_vol *= problem_params.l_dim[i];    
  
  problem_params.nprocs = nprocs;
  problem_params.proc_id = rank;

  /* Crate a cartasian communicator */
  MPI_Comm mpi_comm_cart;
  int periods[ND-1] = {1, 1, 1};

  if(MPI_Cart_create(MPI_COMM_WORLD, (int)(ND-1), procs+1, periods, 
		      0,  &mpi_comm_cart) != MPI_SUCCESS)
    {
      fprintf(stderr, "MPI_Cart_create() returned in error\n");
      exit(QPB_INIT_ERROR);
    }

  /* Get the coordinates of each processor in the cartesian grid */
  int coords[ND];
  if(MPI_Cart_get(mpi_comm_cart, ND-1, g_dim, periods, 
		  coords+1) != MPI_SUCCESS)
    {
      fprintf(stderr, "MPI_Cart_get() returned in error\n");
      exit(QPB_INIT_ERROR);
    }
  
  coords[0] = 0;
  for(int i=0; i<ND; i++)
    problem_params.coords[i] = coords[i];

  for(int i=0; i<ND; i++)
    problem_params.procs[i] = procs[i];
  
  problem_params.mpi_comm_cart = mpi_comm_cart;
  /* Get the neighbor of each processor for each direction */
  for(int dir=1; dir<ND; dir++)
    {
      int rank_source, rank_dest;
      MPI_Cart_shift(mpi_comm_cart, dir-1, 1, &rank_source, &rank_dest);
      problem_params.proc_neigh[dir] = rank_dest;

      MPI_Cart_shift(mpi_comm_cart, dir-1, -1, &rank_source, &rank_dest);
      problem_params.proc_neigh[dir+ND] = rank_dest;
    }
  /* T - direction is never parallelized */
  problem_params.proc_neigh[0] = problem_params.proc_id;
  problem_params.proc_neigh[ND] = problem_params.proc_id;

  /* Extended lattice */
  int ext_vol = 1;
  for(int i=0; i<ND; i++)
    {
      if(problem_params.procs[i] == 1)
	problem_params.ext_dim[i] = problem_params.l_dim[i];
      else
	problem_params.ext_dim[i] = problem_params.l_dim[i] + 2;
      ext_vol *= problem_params.ext_dim[i];
    }
  problem_params.ext_vol = ext_vol;  

  /* Allocate nneigh, skin_to_ext and blk_to_ext */
  for(int i=0; i<2*ND; i++)
    {
      nneigh[i] = qpb_alloc(ext_vol*sizeof(unsigned int));
      skin_to_ext[i] = qpb_alloc(problem_params.l_vol*sizeof(unsigned int));
    }

  blk_to_ext = qpb_alloc(problem_params.l_vol*sizeof(unsigned int));

  /* Initialize nneigh and blk_to_ext */
  int le[ND] = {
    problem_params.ext_dim[0], 
    problem_params.ext_dim[1],
    problem_params.ext_dim[2],
    problem_params.ext_dim[3]
  };

  /* 
     x = nneigh[mu][y], x is y's neighbor in the mu direction.
     y: a site in the extended (local+boundaries) volume
     x: a site in the extended (local+boundaries) volume
  */
  for(int i=0; i<ext_vol; i++)
    {
      int x[ND];
      x[3] = X_INDEX(i, le);
      x[2] = Y_INDEX(i, le);
      x[1] = Z_INDEX(i, le);
      x[0] = T_INDEX(i, le);
      
      /* mu = 0,...,3: forward neighbor 
	 mu = 4,...,7: backward neighbor */
      for(int mu=0; mu<ND; mu++)
	{
	  int y[ND], j; 

	  for(int d=0; d<ND; d++)
	    y[d] = x[d];

	  y[mu] = (x[mu] + 1 == le[mu]) ? 0 : (x[mu] + 1);
	  j = LEXICO(y, le);
	  nneigh[mu][i] = j;

	  for(int d=0; d<ND; d++)
	    y[d] = x[d];

	  y[mu] = (x[mu] == 0) ? le[mu]-1 : (x[mu] - 1);
	  j = LEXICO(y, le);
	  nneigh[mu+ND][i] = j;
	}
    }
  /* par_dir[mu] = 0 if only one procs in direction mu, 
		   1 otherwize */
  int par_dir[ND] = 
    {
      (problem_params.l_dim[0] == problem_params.ext_dim[0]) ? 0 : 1,
      (problem_params.l_dim[1] == problem_params.ext_dim[1]) ? 0 : 1,
      (problem_params.l_dim[2] == problem_params.ext_dim[2]) ? 0 : 1,
      (problem_params.l_dim[3] == problem_params.ext_dim[3]) ? 0 : 1
    };
  for(int i=0; i<ND; i++)
    problem_params.par_dir[i] = par_dir[i];

  int ls[ND] =
    {
      problem_params.l_dim[0],
      problem_params.l_dim[1],
      problem_params.l_dim[2],
      problem_params.l_dim[3]
    };
  
  /* 
     x = blk_to_ext[y], maps site x, a site in extended volume, 
     to site y, the corresponding site in the local volume.
  */
  for(int i=0; i<problem_params.l_vol; i++)
    {
      int x[ND];
      x[3] = X_INDEX(i, ls);
      x[2] = Y_INDEX(i, ls);
      x[1] = Z_INDEX(i, ls);
      x[0] = T_INDEX(i, ls);

      for(int d=0; d<ND; d++)
	x[d] += par_dir[d];
      
      int v = LEXICO(x, le);
      blk_to_ext[i] = v;
    }

  /*
    skin_to_ext: map boundary index to ext index
  */
  for(int dir=0; dir<ND; dir++)
    for(int skin_v=0; 
	skin_v<problem_params.l_vol/problem_params.l_dim[dir]; 
	skin_v++)
      {
	int dim[ND];
	int x[ND];
	for(int d=0; d<ND; d++)
	  dim[d] = problem_params.l_dim[d];
	dim[dir] = 1;
	
	x[3] = X_INDEX(skin_v, dim);
	x[2] = Y_INDEX(skin_v, dim);
	x[1] = Z_INDEX(skin_v, dim);
	x[0] = T_INDEX(skin_v, dim);
	skin_to_ext[dir][skin_v] = blk_to_ext[LEXICO(x, problem_params.l_dim)];

	x[dir] = problem_params.l_dim[dir] - 1;
	skin_to_ext[dir+ND][skin_v] = blk_to_ext[LEXICO(x, problem_params.l_dim)];
      }

  problem_params.b_vol = problem_params.ext_vol - problem_params.l_vol;

  if(problem_params.proc_id == QPB_MASTER_PROC)
    am_master = 1;
  else
    am_master = 0;

  return;
}
