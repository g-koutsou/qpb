#include <qpb_types.h>
#include <qpb_apply_dslash.h>
#include <qpb_apply_bri_dslash.h>
#include <qpb_apply_clover_dslash.h>
#include <qpb_apply_clover_bri_dslash.h>

/* wrapper for clover dslash */
void
qpb_clover_dslash(qpb_spinor_field y, qpb_spinor_field x, void *args[])
{
  qpb_apply_clover_dslash(y, x, args[0], *(qpb_double *)args[1], 
			  *((qpb_clover_term *)args[2]), *((qpb_double *)args[3]));
  return;
}

/* wrapper for dslash */
void
qpb_dslash(qpb_spinor_field y, qpb_spinor_field x, void *args[])
{
  qpb_apply_dslash(y, x, args[0], *((qpb_double *)args[1]));
  return;
}

/* wrapper for clover brillouin dslash */
void
qpb_clover_bri_dslash(qpb_spinor_field y, qpb_spinor_field x, void *args[])
{
  qpb_apply_clover_bri_dslash(y, x, args[0], *((qpb_double *)args[1]), 
			      *((qpb_clover_term *)args[2]), *((qpb_double *)args[3]));
  return;
}

/* wrapper for brillouin dslash */
void
qpb_bri_dslash(qpb_spinor_field y, qpb_spinor_field x, void *args[])
{
  qpb_apply_bri_dslash(y, x, args[0], *((qpb_double *)args[1]));
  return;
}

/* wrapper for clover dslash */
void
qpb_gamma5_clover_dslash(qpb_spinor_field y, qpb_spinor_field x, void *args[])
{
  qpb_apply_gamma5_clover_dslash(y, x, args[0], *(qpb_double *)args[1], 
				 *((qpb_clover_term *)args[2]), *((qpb_double *)args[3]));
  return;
}

/* wrapper for dslash */
void
qpb_gamma5_dslash(qpb_spinor_field y, qpb_spinor_field x, void *args[])
{
  qpb_apply_gamma5_dslash(y, x, args[0], *((qpb_double *)args[1]));
  return;
}

/* wrapper for clover brillouin dslash */
void
qpb_gamma5_clover_bri_dslash(qpb_spinor_field y, qpb_spinor_field x, void *args[])
{
  qpb_apply_gamma5_clover_bri_dslash(y, x, args[0], *((qpb_double *)args[1]), 
				     *((qpb_clover_term *)args[2]), *((qpb_double *)args[3]));
  return;
}

/* wrapper for brillouin dslash */
void
qpb_gamma5_bri_dslash(qpb_spinor_field y, qpb_spinor_field x, void *args[])
{
  qpb_apply_gamma5_bri_dslash(y, x, args[0], *((qpb_double *)args[1]));
  return;
}
