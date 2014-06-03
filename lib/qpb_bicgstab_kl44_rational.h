#ifndef _QPB_BICGSTAB_KL44_RATIONAL_H
#define _QPB_BICGSTAB_KL44_RATIONAL_H 1
#include <qpb_types.h>
#include <qpb_kl_defs.h>
void qpb_bicgstab_kl44_rational_init(void *, qpb_clover_term , qpb_double , qpb_double , qpb_double, int, char [], int);
int qpb_bicgstab_kl44_rational(qpb_spinor_field, qpb_spinor_field, qpb_double, int);
void qpb_bicgstab_kl44_rational_finalize();
#endif /* _QPB_BICGSTAB_KL44_RATIONAL_H */
