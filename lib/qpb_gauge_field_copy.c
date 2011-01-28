#include <qpb_types.h>
#include <qpb_globals.h>
#include <string.h>

/* Copy data of gauge_field x to gauge_field y */
void
qpb_gauge_field_copy(qpb_gauge_field y, qpb_gauge_field x)
{
  /* copy bulk */
  memcpy(y.bulk, x.bulk, problem_params.l_vol*sizeof(qpb_link)*ND);

  /* copy boundary buffer */
  size_t bnd_vol = problem_params.ext_vol - problem_params.l_vol;
  memcpy(y.boundaries, x.boundaries, bnd_vol*sizeof(qpb_link)*ND);

  return;
};
