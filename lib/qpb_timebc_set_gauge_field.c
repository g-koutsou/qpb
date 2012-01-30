#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_sun_linalg.h>
#include <qpb_gauge_field_copy.h>

void
qpb_timebc_set_gauge_field(qpb_gauge_field gauge_field_out, qpb_gauge_field gauge_field_in, qpb_double bc)
{
  qpb_gauge_field_copy(gauge_field_out, gauge_field_in);

  qpb_complex z = {bc, 0};
  int edim[ND], ldim[ND];
  for(int d=0; d<ND; d++)
    {
      edim[d] = problem_params.ext_dim[d];
      ldim[d] = problem_params.l_dim[d];
    }

  int dims[] = {1, edim[1], edim[2], edim[3]};

  for(int bv=0; bv<problem_params.ext_vol/edim[0]; bv++)
    {
      qpb_complex *v, *u;

      int x[ND];
      x[1] = Z_INDEX(bv, dims);
      x[2] = Y_INDEX(bv, dims);
      x[3] = X_INDEX(bv, dims);
      x[0] = ldim[0]-1;

      int iv = LEXICO(x, edim);
      u = (qpb_complex *)(((qpb_link *)gauge_field_in.index[iv])+0);
      v = (qpb_complex *)(((qpb_link *)gauge_field_out.index[iv])+0);
      sun_uequ(v, u);
      sun_mul_au(v, z, u);
    }

  return;
}
