#include <string.h>

#include <qpb_types.h>
#include <qpb_globals.h>

void
qpb_gauge_field_set_unit(qpb_gauge_field gauge_field)
{
  int lvol = problem_params.l_vol;
  for(int v=0; v<lvol; v++)
    for(int dir=0; dir<ND; dir++)
      {
	qpb_complex *u = gauge_field.bulk[v][dir];
	memset(u, '\0', sizeof(qpb_link));
	for(int col=0; col<NC; col++)
	  (u+col*(NC+1))->re = 1.;
      }
  return;
};


