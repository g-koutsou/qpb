#ifndef _QPB_BICGG5_H
#define _QPB_BICGG5_H 1
#include <qpb_types.h>
void qpb_bicgg5_init();
int qpb_bicgg5(qpb_spinor_field, qpb_spinor_field, void *,
	       qpb_clover_term, qpb_double, qpb_double, qpb_double, int);
void qpb_bicgg5_finalize();
#endif /* _QPB_BICGG5_H */
