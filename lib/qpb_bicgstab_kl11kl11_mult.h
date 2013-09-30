#ifndef _QPB_BICGSTAB_KL11KL11_MULT_H
#define _QPB_BICGSTAB_KL11KL11_MULT_H 1
#include <qpb_types.h>
#include <qpb_kl_defs.h>
void qpb_bicgstab_kl11kl11_mult_init(void *, qpb_clover_term , qpb_double , qpb_double , qpb_double, int);
int qpb_bicgstab_kl11kl11_mult(qpb_spinor_field, qpb_spinor_field, qpb_double, int);

void qpb_bicgstab_kl11kl11_mult_finalize();
#endif /* _QPB_BICGSTAB_KL11KL11_MULT_H */
