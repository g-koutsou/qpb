#include <stdlib.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_alloc.h>

/* Allocates memory for a diagonal_links struct */
qpb_diagonal_links
qpb_diagonal_links_init()
{
  qpb_diagonal_links diagonal_links;
  /* allocate bulk */
  diagonal_links.bulk = qpb_alloc(problem_params.l_vol
				  * sizeof(qpb_link)*N_HYPERCUBE_NEIGH);

  /* allocate boundary buffer */
  size_t bnd_vol = problem_params.ext_vol - problem_params.l_vol;
  diagonal_links.boundaries = qpb_alloc(bnd_vol
					* sizeof(qpb_link)*N_HYPERCUBE_NEIGH);
  /* allocate index map */
  diagonal_links.index = qpb_alloc(problem_params.ext_vol
				   * sizeof(void *));

  /* map extended volume index to bulk or boundary buffer 
     
     "Extended volume" is the hypercube: (local volume) + boundaries
     "Bulk volume" is just the local volume. Member .index[] maps the 
     site index over the extended volume to the memory address that holds 
     the data of that site. The data of the site could be either in the 
     bulk or the boundary buffer. Member .index0[] is the same, but points
     to the zero field when the argument-index is on a boundary.
   */
  int edim[ND], ldim[ND], par_dir[ND];
  for(int d=0; d<ND; d++)
    {
      edim[d] = problem_params.ext_dim[d];
      ldim[d] = problem_params.l_dim[d];
      par_dir[d] = problem_params.par_dir[d];
    }

  int lvol = problem_params.l_vol;
  for(int lv=0; lv<lvol; lv++)
    {
      int v = blk_to_ext[lv];
      diagonal_links.index[v] = (void *) diagonal_links.bulk[lv][0];
    }

  unsigned int bnd_offset = 0;
  for(int dir=0; dir<ND; dir++)
    if(par_dir[dir])
      {
  	int dims[ND];
  	for(int d=0; d<ND; d++)
  	  dims[d] = edim[d];

  	for(int d=dir+1; d<ND; d++)
  	  dims[d] = ldim[d];

  	dims[dir] = 1;
  	int bvol = 1;
  	for(int d=0; d<ND; d++)
  	  bvol *= dims[d];

  	for(int sign=0; sign<2; sign++)
  	  {
	    diagonal_links.boundary_start[dir+ND*sign] =
	      &(diagonal_links.boundaries[bnd_offset][0]);	    
  	    for(int bv=0; bv<bvol; bv++)
  	      {
  		int x[ND];
  		x[0] = T_INDEX(bv, dims);
  		x[1] = Z_INDEX(bv, dims);
  		x[2] = Y_INDEX(bv, dims);
  		x[3] = X_INDEX(bv, dims);	       		
  		x[dir] = sign == 0 ? 0 : edim[dir]-1;
		for(int d=dir+1; d<ND; d++)
		  x[d] += par_dir[d];
		
  		int ext_v = LEXICO(x, edim);
  		diagonal_links.index[ext_v] = 
		  (qpb_link*)diagonal_links.boundary_start[dir+ND*sign]
		  +bv*N_HYPERCUBE_NEIGH;
  	      }
  	    bnd_offset += bvol;
	  }
      }
  return diagonal_links;
};

/* Frees memory of qpb_diagonal_links struct */
void 
qpb_diagonal_links_finalize(qpb_diagonal_links diagonal_links)
{
  free(diagonal_links.bulk);
  free(diagonal_links.boundaries);
  free(diagonal_links.index);
  return;
};
