#include <string.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>

void
qpb_spinor_xeqy(qpb_spinor_field x, qpb_spinor_field y)
{
  int evol = problem_params.ext_vol;
  for(int v=0; v<evol; v++)
    memcpy(x.index[v], y.index[v], sizeof(qpb_spinor));

  return;
}

