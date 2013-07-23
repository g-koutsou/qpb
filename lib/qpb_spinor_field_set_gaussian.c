#include <string.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_rng.h>

void
qpb_spinor_field_set_gaussian(qpb_spinor_field spinor_field)
{
  int gdim[ND], ldim[ND], procs[ND];
  for(int d=0; d<ND; d++)
    {
      gdim[d] = problem_params.g_dim[d];
      ldim[d] = problem_params.l_dim[d];
      procs[d] = problem_params.procs[d];
    }

  int x[ND];
  for(x[0]=0; x[0]<gdim[0]; x[0]++)
    for(x[1]=0; x[1]<gdim[1]; x[1]++)
      for(x[2]=0; x[2]<gdim[2]; x[2]++)
	for(x[3]=0; x[3]<gdim[3]; x[3]++)
	  {
	    int proc_coords[] = {
	      x[0]/ldim[0],
	      x[1]/ldim[1],
	      x[2]/ldim[2],
	      x[3]/ldim[3]
	    };
	    int loc_coords[] = {
	      x[0]%ldim[0],
	      x[1]%ldim[1],
	      x[2]%ldim[2],
	      x[3]%ldim[3]	      
	    };

	    qpb_spinor sp;
	    for(int isp=0; isp<NC*NS; isp++)
	      sp[isp] =  (qpb_complex) {qpb_get_gaussian(1.0), qpb_get_gaussian(1.0)};
	    
	    int id = LEXICO(proc_coords, procs);
	    int lv = LEXICO(loc_coords, ldim);
	    if(problem_params.proc_id == id)
	      {
		int v = blk_to_ext[lv];
		for(int isp=0; isp<NC*NS; isp++)
		  (*((qpb_spinor *)spinor_field.index[v]))[isp] =  sp[isp];
	      }
	  }

  return;
};


void
qpb_spinor_field_set_gaussian_site(qpb_spinor_field spinor_field, int coords[ND])
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
      for(int spin=0; spin<NS; spin++)
	for(int col=0; col<NC; col++)
	  spinor_field.bulk[v][spin*NC + col] = 
	    (qpb_complex) {qpb_get_gaussian(1.0), qpb_get_gaussian(1.0)};
    }

  return;
};


