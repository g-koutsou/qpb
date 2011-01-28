#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_gauge_field.h>
#include <qpb_comm_halo_gauge_field.h>
#include <qpb_gauge_field_copy.h>
#include <string.h>

/* Shift a gauge filed, in all four directions, according to shifts[] */
void
qpb_gauge_field_shift(qpb_gauge_field gauge, int shifts[ND])
{
  qpb_gauge_field aux = qpb_gauge_field_init();
  int lvol = problem_params.l_vol;  

  for(int dir=0; dir<ND; dir++)
    for(int i=0; i<shifts[dir]; i++)
      {
	qpb_comm_halo_gauge_field(gauge);
	for(int lv=0; lv<lvol; lv++)
	  {
	    int v = blk_to_ext[lv];
	    memcpy(aux.index[v], gauge.index[nneigh[dir][v]], sizeof(qpb_link)*ND);
	  }
	qpb_gauge_field_copy(gauge, aux);
      }
	
  qpb_gauge_field_finalize(aux);
  return;
};
