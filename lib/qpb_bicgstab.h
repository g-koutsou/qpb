#ifndef _QPB_BICGSTAB_H
#define _QPB_BICGSTAB_H 1
#include <qpb_types.h>
void qpb_bicgstab_init(char [], int );
int qpb_bicgstab(qpb_spinor_field, qpb_spinor_field, void *,
		 qpb_clover_term, qpb_double, qpb_double, qpb_double, int);
void qpb_bicgstab_finalize();
#endif /* _QPB_BICGSTAB_H */
