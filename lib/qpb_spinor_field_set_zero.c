#include <string.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_alloc.h>

void
qpb_spinor_field_set_zero(qpb_spinor_field spinor_field)
{
  int evol = problem_params.ext_vol;
  for(int v=0; v<evol; v++)
    {
      qpb_spinor *sp;
      sp = (qpb_spinor *)spinor_field.index[v];
      memset(sp, '\0', sizeof(qpb_spinor));
    }
  return;
};


