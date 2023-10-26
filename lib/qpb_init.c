#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <qpb_alloc.h>
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_errors.h>
#include <qpb_gamma_matrices.h>
#include <mpi.h>

unsigned short int am_master;
qpb_problem_params problem_params;
unsigned int *nneigh[2*ND];
unsigned short int **permutations[ND+1];
unsigned int *skin_to_ext[2*ND];
unsigned int *blk_to_ext;

dir_comb_2_t dir_comb_2;
hypercube_neigh_t hypercube_neigh;

qpb_complex qpb_gamma_x[NS][NS];
qpb_complex qpb_gamma_y[NS][NS];
qpb_complex qpb_gamma_z[NS][NS];
qpb_complex qpb_gamma_t[NS][NS];
qpb_complex qpb_gamma_5[NS][NS];

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

  /* 
     initialize dir_comb_2: serializes the two-direction combinations,
     so that each combination has it's own index 
  */
  int idx = 0;
  for(int d0=0; d0<ND; d0++)
    for(int d1=0; d1<ND; d1++)
      dir_comb_2.index[d0][d1] = USHRT_MAX; /* bogus number */
  for(int d0=0; d0<ND; d0++)
    for(int d1=d0+1; d1<ND; d1++)
      {
	dir_comb_2.dirs[idx][0] = d0;
	dir_comb_2.dirs[idx][1] = d1;
	dir_comb_2.index[d0][d1] = idx;
	dir_comb_2.index[d1][d0] = idx;
	idx++;
      }

  /* 
     initialize hypercube_neigh: serializes the indexing
     of all one-hop neighbors in taxi-driver metric, 
     so that each neighbor has it's own index 

     For each direction there can be three values:
     0: no-hop, 1: forward-hop, 2: backward-hop
     
     We exclude the combination where all hops are no-hop
     
     We define only half: hops where first hop is a forward-hop

     see qpb_diagonal_links_get.c for more info
  */
  idx = 0;
  int d[ND];
  for(d[0]=0; d[0]<3; d[0]++)
    for(d[1]=0; d[1]<3; d[1]++)
      for(d[2]=0; d[2]<3; d[2]++)
	for(d[3]=0; d[3]<3; d[3]++)
	  {
	    int sum = 0;
	    int flag = 0;
	    for(int i=0; i<ND; i++)
	      {
		sum += d[i];
		if(sum != 0)
		  {
		    if(d[i] == 2)
		      flag = 1;
		    break;
		  }
	      }
	    /*
	      flag = 1 if first non-zero dir is = 2
	      sum = 0 if all dirs = 0
	     */
	    if(flag || !sum)
	      continue;
	    hypercube_neigh.hops[idx][0] = d[0];
	    hypercube_neigh.hops[idx][1] = d[1];
	    hypercube_neigh.hops[idx][2] = d[2];
	    hypercube_neigh.hops[idx][3] = d[3];
	    hypercube_neigh.index[d[0]][d[1]][d[2]][d[3]] = idx;
	    idx++;
	  }

  /*
    Define permutation arrays (i.e. epsilon tensors)    
   */
  permutations[1] = qpb_alloc(sizeof(unsigned short int *)*1);
  for(int i=0; i<1; i++)
    permutations[1][i] = qpb_alloc(sizeof(unsigned short int)*1);
  permutations[1][0][0] = 0;

  permutations[2] = qpb_alloc(sizeof(unsigned short int *)*(1*2));
  for(int i=0; i<1*2; i++)
    permutations[2][i] = qpb_alloc(sizeof(unsigned short int)*2);
  permutations[2][0][0] = 0;
  permutations[2][0][1] = 1;
  permutations[2][1][0] = 1;
  permutations[2][1][1] = 0;

  permutations[3] = qpb_alloc(sizeof(unsigned short int *)*(1*2*3));
  for(int i=0; i<1*2*3; i++)
    permutations[3][i] = qpb_alloc(sizeof(unsigned short int)*3);
  permutations[3][0][0] = 0;
  permutations[3][0][1] = 1;
  permutations[3][0][2] = 2;
  permutations[3][1][0] = 1;
  permutations[3][1][1] = 2;
  permutations[3][1][2] = 0;
  permutations[3][2][0] = 2;
  permutations[3][2][1] = 0;
  permutations[3][2][2] = 1;
  permutations[3][3][0] = 2;
  permutations[3][3][1] = 1;
  permutations[3][3][2] = 0;
  permutations[3][4][0] = 1;
  permutations[3][4][1] = 0;
  permutations[3][4][2] = 2;
  permutations[3][5][0] = 0;
  permutations[3][5][1] = 2;
  permutations[3][5][2] = 1;

  permutations[4] = qpb_alloc(sizeof(unsigned short int *)*(1*2*3*4));
  for(int i=0; i<1*2*3*4; i++)
    permutations[4][i] = qpb_alloc(sizeof(unsigned short int)*4);
  permutations[4][ 0][0] = 0;
  permutations[4][ 0][1] = 1;
  permutations[4][ 0][2] = 2;
  permutations[4][ 0][3] = 3;
  permutations[4][ 1][0] = 0;
  permutations[4][ 1][1] = 1;
  permutations[4][ 1][2] = 3;
  permutations[4][ 1][3] = 2;
  permutations[4][ 2][0] = 0;
  permutations[4][ 2][1] = 2;
  permutations[4][ 2][2] = 1;
  permutations[4][ 2][3] = 3;
  permutations[4][ 3][0] = 0;
  permutations[4][ 3][1] = 2;
  permutations[4][ 3][2] = 3;
  permutations[4][ 3][3] = 1;
  permutations[4][ 4][0] = 0;
  permutations[4][ 4][1] = 3;
  permutations[4][ 4][2] = 1;
  permutations[4][ 4][3] = 2;
  permutations[4][ 5][0] = 0;
  permutations[4][ 5][1] = 3;
  permutations[4][ 5][2] = 2;
  permutations[4][ 5][3] = 1;
  permutations[4][ 6][0] = 1;
  permutations[4][ 6][1] = 0;
  permutations[4][ 6][2] = 2;
  permutations[4][ 6][3] = 3;
  permutations[4][ 7][0] = 1;
  permutations[4][ 7][1] = 0;
  permutations[4][ 7][2] = 3;
  permutations[4][ 7][3] = 2;
  permutations[4][ 8][0] = 1;
  permutations[4][ 8][1] = 2;
  permutations[4][ 8][2] = 0;
  permutations[4][ 8][3] = 3;
  permutations[4][ 9][0] = 1;
  permutations[4][ 9][1] = 2;
  permutations[4][ 9][2] = 3;
  permutations[4][ 9][3] = 0;
  permutations[4][10][0] = 1;
  permutations[4][10][1] = 3;
  permutations[4][10][2] = 0;
  permutations[4][10][3] = 2;
  permutations[4][11][0] = 1;
  permutations[4][11][1] = 3;
  permutations[4][11][2] = 2;
  permutations[4][11][3] = 0;
  permutations[4][12][0] = 2;
  permutations[4][12][1] = 0;
  permutations[4][12][2] = 1;
  permutations[4][12][3] = 3;
  permutations[4][13][0] = 2;
  permutations[4][13][1] = 0;
  permutations[4][13][2] = 3;
  permutations[4][13][3] = 1;
  permutations[4][14][0] = 2;
  permutations[4][14][1] = 1;
  permutations[4][14][2] = 0;
  permutations[4][14][3] = 3;
  permutations[4][15][0] = 2;
  permutations[4][15][1] = 1;
  permutations[4][15][2] = 3;
  permutations[4][15][3] = 0;
  permutations[4][16][0] = 2;
  permutations[4][16][1] = 3;
  permutations[4][16][2] = 0;
  permutations[4][16][3] = 1;
  permutations[4][17][0] = 2;
  permutations[4][17][1] = 3;
  permutations[4][17][2] = 1;
  permutations[4][17][3] = 0;
  permutations[4][18][0] = 3;
  permutations[4][18][1] = 0;
  permutations[4][18][2] = 1;
  permutations[4][18][3] = 2;
  permutations[4][19][0] = 3;
  permutations[4][19][1] = 0;
  permutations[4][19][2] = 2;
  permutations[4][19][3] = 1;
  permutations[4][20][0] = 3;
  permutations[4][20][1] = 1;
  permutations[4][20][2] = 0;
  permutations[4][20][3] = 2;
  permutations[4][21][0] = 3;
  permutations[4][21][1] = 1;
  permutations[4][21][2] = 2;
  permutations[4][21][3] = 0;
  permutations[4][22][0] = 3;
  permutations[4][22][1] = 2;
  permutations[4][22][2] = 0;
  permutations[4][22][3] = 1;
  permutations[4][23][0] = 3;
  permutations[4][23][1] = 2;
  permutations[4][23][2] = 1;
  permutations[4][23][3] = 0;

  /* initialize gamma matrices */
  qpb_complex _qpb_gamma_x[NS][NS] = { 
    { _C0_, _C0_, _C0_, _CPI_  },
    { _C0_, _C0_, _CPI_, _C0_  },
    { _C0_, _CMI_, _C0_, _C0_ },
    { _CMI_, _C0_, _C0_, _C0_ }
  };

  qpb_complex _qpb_gamma_y[NS][NS] = { 
    { _C0_, _C0_, _C0_, _CP1_  },
    { _C0_, _C0_, _CM1_, _C0_ },
    { _C0_, _CM1_, _C0_, _C0_ },
    { _CP1_, _C0_, _C0_, _C0_  }
  };

  qpb_complex _qpb_gamma_z[NS][NS] = { 
    { _C0_, _C0_, _CPI_, _C0_  },
    { _C0_, _C0_, _C0_, _CMI_ },
    { _CMI_, _C0_, _C0_, _C0_ },
    { _C0_, _CPI_, _C0_, _C0_  }
  };

  qpb_complex _qpb_gamma_t[NS][NS] = { 
    { _CP1_, _C0_, _C0_, _C0_  },
    { _C0_, _CP1_, _C0_, _C0_  },
    { _C0_, _C0_, _CM1_, _C0_ },
    { _C0_, _C0_, _C0_, _CM1_ }
  };

  qpb_complex _qpb_gamma_5[NS][NS] = { 
    { _C0_, _C0_, _CP1_, _C0_ },
    { _C0_, _C0_, _C0_, _CP1_ },
    { _CP1_, _C0_, _C0_, _C0_ },
    { _C0_, _CP1_, _C0_, _C0_ }
  };

  memcpy(qpb_gamma_x, _qpb_gamma_x, NS*NS*sizeof(qpb_complex));
  memcpy(qpb_gamma_y, _qpb_gamma_y, NS*NS*sizeof(qpb_complex));
  memcpy(qpb_gamma_z, _qpb_gamma_z, NS*NS*sizeof(qpb_complex));
  memcpy(qpb_gamma_t, _qpb_gamma_t, NS*NS*sizeof(qpb_complex));
  memcpy(qpb_gamma_5, _qpb_gamma_5, NS*NS*sizeof(qpb_complex));
  return;
}
