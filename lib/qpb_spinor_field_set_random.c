#include <string.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_rng.h>

void
qpb_spinor_field_set_random(qpb_spinor_field spinor_field)
{
  int lvol = problem_params.l_vol;
  for(int v=0; v<lvol; v++)
    {
      qpb_spinor *sp;
      sp = (qpb_spinor *)spinor_field.bulk[v];
      for(int isp=0; isp<NC*NS; isp++)
	(*sp)[isp] = (qpb_complex) {qpb_get_rand(), qpb_get_rand()};
    }
  return;
};


