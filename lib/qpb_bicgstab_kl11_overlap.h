#ifndef _QPB_BICGSTAB_KL11_OVERLAP_H
#define _QPB_BICGSTAB_KL11_OVERLAP_H 1
#include <qpb_types.h>
#include <qpb_kl_defs.h>
void qpb_bicgstab_kl11_overlap_init();
int qpb_bicgstab_kl11_overlap(qpb_spinor_field, qpb_spinor_field, void *, 
			      qpb_clover_term, qpb_double, qpb_double, qpb_double, 
			      qpb_double, int);

void qpb_bicgstab_kl11_overlap_finalize();
#endif /* _QPB_BICGSTAB_KL11_OVERLAP_H */
