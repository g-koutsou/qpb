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
  int edim[ND], ldim[ND];
  for(int d=0; d<ND; d++)
    {
      edim[d] = problem_params.ext_dim[d];
      ldim[d] = problem_params.l_dim[d];
    }

  int evol = problem_params.ext_vol;
  unsigned short int *par_dir = problem_params.par_dir;
  int bnd_idx = 0;
  for(int i=0; i<evol; i++)
    {						
      int ex[ND] = 
	{
	  T_INDEX(i, edim),
	  Z_INDEX(i, edim),
	  Y_INDEX(i, edim),
	  X_INDEX(i, edim)
	};

      for(int d=0; d<ND; d++)
	ex[d] -= par_dir[d];

      spinor_field.index[i] = NULL;  
      for(int d=0; d<ND; d++)
	{
	  if(ex[d] == ldim[d] || ex[d] == -1)
	    {
	      spinor_field.index[i] = (void *) spinor_field.boundaries[bnd_idx];
	      spinor_field.index0[i] = (void *) spinor_field.zero_field;
	      bnd_idx++;
	      break;
	    }
	}
      
      if(spinor_field.index[i] == NULL)
	{
	  int v = LEXICO(ex, ldim);
	  spinor_field.index[i] = (void *) spinor_field.bulk[v];
	  spinor_field.index0[i] = (void *) spinor_field.bulk[v];
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
