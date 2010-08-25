#include <string.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_alloc.h>

void
qpb_spinor_field_set_delta(qpb_spinor_field spinor_field, 
			   int coords[ND], int spin, int col)
{
  int evol = problem_params.ext_vol;
  for(int v=0; v<evol; v++)
    {
      qpb_spinor *sp;
      sp = (qpb_spinor *)spinor_field.index[v];
      memset(sp, '\0', sizeof(qpb_spinor));
    }
  int proc_coords[ND];
  int procs[ND];
  int loc_dim[ND];
 
  for(int d=0; d<ND; d++) 
    {
      loc_dim[d] = problem_params.l_dim[d];
      procs[d] = problem_params.procs[d];
      proc_coords[d] = coords[d] / loc_dim[d];
    }

  int proc = LEXICO(proc_coords, procs);
  if(problem_params.proc_id == proc)
    {
      int loc_coords[ND];
      for(int d=0; d<ND; d++)
	loc_coords[d] = coords[d] % loc_dim[d];
      
      int v = LEXICO(loc_coords, loc_dim);
      spinor_field.bulk[v][spin*NC + col].re = 1.;
    }
  return;
};


