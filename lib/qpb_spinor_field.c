#include <stdlib.h>
#include <string.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_alloc.h>

/* Allocates memory for a spinor_field struct */
qpb_spinor_field
qpb_spinor_field_init()
{
  qpb_spinor_field spinor_field;
  /* allocate bulk */
  spinor_field.bulk = qpb_alloc(problem_params.l_vol
			       * sizeof(qpb_spinor));

  /* allocate boundary buffer */
  size_t bnd_vol = problem_params.ext_vol - problem_params.l_vol;
  spinor_field.boundaries = qpb_alloc(bnd_vol
				     * sizeof(qpb_spinor));
  /* allocate index map */
  spinor_field.index = qpb_alloc(problem_params.ext_vol
				* sizeof(void *));

  spinor_field.index0 = qpb_alloc(problem_params.ext_vol
				  * sizeof(void *));

  spinor_field.zero_field = qpb_alloc(sizeof(qpb_spinor));

  for(int cs=0; cs<NC*NS; cs++)
    spinor_field.zero_field[cs] = (qpb_complex){0., 0.};
  
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

  int evol = problem_params.ext_vol;
  int lvol = problem_params.l_vol;

  for(int lv=0; lv<lvol; lv++)
    {
      int v = blk_to_ext[lv];
      spinor_field.index[v] = (void *) spinor_field.bulk[lv];
      spinor_field.index0[v] = (void *) spinor_field.bulk[lv];
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
	    spinor_field.boundary_start[dir+ND*sign] =
	      &(spinor_field.boundaries[bnd_offset]);
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
  		spinor_field.index[ext_v] = 
		  (qpb_spinor *)spinor_field.boundary_start[dir+ND*sign]+bv;
  		spinor_field.index0[ext_v] = 
		  spinor_field.zero_field;
  	      }
  	    bnd_offset += bvol;
  	  }
      }
  return spinor_field;
};

/* Frees memory of qpb_spinor_field struct */
void 
qpb_spinor_field_finalize(qpb_spinor_field spinor_field)
{
  free(spinor_field.bulk);
  free(spinor_field.boundaries);
  free(spinor_field.index);
  free(spinor_field.index0);
  free(spinor_field.zero_field);
  return;
};
