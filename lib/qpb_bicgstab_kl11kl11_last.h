#ifndef _QPB_BICGSTAB_KL11KL11_LAST_H
#define _QPB_BICGSTAB_KL11KL11_LAST_H 1
#include <qpb_types.h>
#include <qpb_kl_defs.h>
void qpb_bicgstab_kl11kl11_last_init(void *, qpb_clover_term , qpb_double , qpb_double , qpb_double, int, char [], int);
int qpb_bicgstab_kl11kl11_last(qpb_spinor_field, qpb_spinor_field, qpb_double, int);
void qpb_bicgstab_kl11kl11_last_finalize();
#endif /* _QPB_BICGSTAB_KL11KL11_LAST_H */
