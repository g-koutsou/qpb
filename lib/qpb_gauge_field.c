#include <stdlib.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_alloc.h>

/* Allocates memory for a gauge_field struct */
qpb_gauge_field
qpb_gauge_field_init()
{
  qpb_gauge_field gauge_field;
  /* allocate bulk */
  gauge_field.bulk = qpb_alloc(problem_params.l_vol
			       * sizeof(qpb_link)*ND);

  /* allocate boundary buffer */
  size_t bnd_vol = problem_params.ext_vol - problem_params.l_vol;
  gauge_field.boundaries = qpb_alloc(bnd_vol
				     * sizeof(qpb_link)*ND);
  /* allocate index map */
  gauge_field.index = qpb_alloc(problem_params.ext_vol
				* sizeof(void *));
  gauge_field.index0 = qpb_alloc(problem_params.ext_vol
				 * sizeof(void *));

  gauge_field.zero_field = qpb_alloc(sizeof(qpb_link)*ND);
  for(int d=0; d<ND; d++)
    for(int col=0; col<NC*NC; col++)
      gauge_field.zero_field[d + ND*col] = (qpb_complex){0., 0.};
  
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
      gauge_field.index[v] = (void *) gauge_field.bulk[lv][0];
      gauge_field.index0[v] = (void *) gauge_field.bulk[lv][0];
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
	    gauge_field.boundary_start[dir+ND*sign] =
	      &(gauge_field.boundaries[bnd_offset][0]);
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
  		gauge_field.index[ext_v] = 
		  (qpb_link*)gauge_field.boundary_start[dir+ND*sign]+bv*ND;

  		gauge_field.index0[ext_v] = 
		  gauge_field.zero_field;
  	      }
  	    bnd_offset += bvol;
	  }
      }
  return gauge_field;
};

/* Frees memory of qpb_gauge_field struct */
void 
qpb_gauge_field_finalize(qpb_gauge_field gauge_field)
{
  free(gauge_field.bulk);
  free(gauge_field.boundaries);
  free(gauge_field.index);
  free(gauge_field.index0);
  free(gauge_field.zero_field);
  return;
};
