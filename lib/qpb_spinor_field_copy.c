#include <qpb_types.h>
#include <qpb_globals.h>
#include <string.h>

/* Copy data of spinor_field x to spinor_field y */
void
qpb_spinor_field_copy(qpb_spinor_field y, qpb_spinor_field x)
{
  /* copy bulk */
  memcpy(y.bulk, x.bulk, problem_params.l_vol*sizeof(qpb_spinor));

  /* copy boundary buffer */
  size_t bnd_vol = problem_params.ext_vol - problem_params.l_vol;
  memcpy(y.boundaries, x.boundaries, bnd_vol*sizeof(qpb_spinor));
  return;
};
