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

      gauge_field.index[i] = NULL;  
      for(int d=0; d<ND; d++)
	{
	  if(ex[d] == ldim[d] || ex[d] == -1)
	    {
	      gauge_field.index[i] = (void *) gauge_field.boundaries[bnd_idx][0];
	      gauge_field.index0[i] = (void *) gauge_field.zero_field;
	      bnd_idx++;
	      break;
	    }
	}

      if(gauge_field.index[i] == NULL)
	{
	  int v = LEXICO(ex, ldim);
	  gauge_field.index[i] = (void *) gauge_field.bulk[v][0];
	  gauge_field.index0[i] = (void *) gauge_field.bulk[v][0];
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
