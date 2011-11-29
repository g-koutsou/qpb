#ifndef _QPB_MSCONGRAD_H
#define _QPB_MSCONGRAD_H 1
#include <qpb_types.h>
void qpb_mscongrad_init(int );
int qpb_mscongrad(qpb_spinor_field *, qpb_spinor_field, void *,
		  qpb_clover_term, qpb_double, int, qpb_double *, qpb_double, qpb_double, int);
void qpb_mscongrad_finalize(int );
#endif /* _QPB_MSCONGRAD_H */
