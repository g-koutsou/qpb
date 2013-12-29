#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_field.h>
#include <qpb_comm_halo_spinor_field.h>
#include <qpb_spinor_field_copy.h>
#include <string.h>

/* Shift a spinor filed, in all four directions, according to shifts[] */
void
qpb_spinor_field_shift(qpb_spinor_field spinor, int displ[ND])
{
  qpb_spinor_field aux = qpb_spinor_field_init();
  int lvol = problem_params.l_vol;  
  
  qpb_comm_halo_spinor_field_init();
  for(int dir=0; dir<ND; dir++)
    {
      int n = abs(displ[dir]);
      int d = displ[dir] < 0 ? dir : dir+ND;
      for(int i=0; i<n; i++)
	{
	  qpb_comm_halo_spinor_field_start(spinor);
	  qpb_comm_halo_spinor_field_wait(spinor);
	  for(int lv=0; lv<lvol; lv++)
	    {
	      int v = blk_to_ext[lv];
	      memcpy(aux.index[v], spinor.index[nneigh[d][v]], sizeof(qpb_spinor));
	    }
	  qpb_spinor_field_copy(spinor, aux);
	}
    }
  qpb_comm_halo_spinor_field_finalize();
  qpb_spinor_field_finalize(aux);
  return;
};
