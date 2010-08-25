#include <string.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>

void
qpb_spinor_xeqy(qpb_spinor_field x, qpb_spinor_field y)
{
  int lvol = problem_params.l_vol;
  for(int v=0; v<lvol; v++)
    memcpy(x.bulk[v], y.bulk[v], sizeof(qpb_spinor));

  return;
}

