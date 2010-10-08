#include <stdlib.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_alloc.h>
/* Allocates memory for a clover_term struct */
qpb_clover_term
qpb_clover_term_init()
{
  qpb_clover_term clover_term;
  /* allocate bulk */
  clover_term.bulk = qpb_alloc(problem_params.l_vol
			       * sizeof(qpb_link)*N_DIR_COMB_2);
  
  /* allocate index map */
  clover_term.index = qpb_alloc(problem_params.ext_vol
				* sizeof(void *));
  
  /* map extended volume index to bulk or boundary buffer 
     
     "Extended volume" is the hypercube: (local volume) + boundaries
     "Bulk volume" is just the local volume. Member .index[] maps the 
     site index over the extended volume to the memory address that holds 
     the data of that site. The data of the site could be either in the 
     bulk or the boundary buffer. Clover terms currently have no boundary
     information.
   */
  int edim[ND], ldim[ND];
  for(int d=0; d<ND; d++)
    {
      edim[d] = problem_params.ext_dim[d];
      ldim[d] = problem_params.l_dim[d];
    }

  int evol = problem_params.ext_vol;
  unsigned short int *par_dir = problem_params.par_dir;
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

      int bool = 0;
      for(int d=0; d<ND; d++)
	{
	  if(ex[d] == ldim[d] || ex[d] == -1)
	    {
	      clover_term.index[i] = NULL;
	      bool = 1;
	      break;
	    }
	}
      
      if(!bool)
	{
	  int v = LEXICO(ex, ldim);
	  clover_term.index[i] = (void *) clover_term.bulk[v][0];
	}
    }
  return clover_term;
};

/* Frees memory of qpb_clover_term struct */
void 
qpb_clover_term_finalize(qpb_clover_term clover_term)
{
  free(clover_term.bulk);
  free(clover_term.index);
  return;
};
