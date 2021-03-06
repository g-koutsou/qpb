#include <string.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_rng.h>

void
qpb_spinor_field_set_random(qpb_spinor_field spinor_field)
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
	      sp[isp] =  (qpb_complex) {qpb_get_rand(), qpb_get_rand()};

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


