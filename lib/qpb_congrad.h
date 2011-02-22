#ifndef _QPB_CONGRAD_H
#define _QPB_CONGRAD_H 1
#include <qpb_types.h>
void qpb_congrad_init();
int qpb_congrad(qpb_spinor_field, qpb_spinor_field, void *,
		qpb_clover_term, qpb_double, qpb_double, qpb_double, int);
void qpb_congrad_finalize();
#endif /* _QPB_CONGRAD_H */
