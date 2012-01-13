#ifndef _QPB_APESMEAR_H
#define _QPB_APESMEAR_H 1
#include <qpb_types.h>
void qpb_apesmear_3d_niter(qpb_gauge_field, qpb_gauge_field, qpb_double, int);
void qpb_apesmear_3d(qpb_gauge_field, qpb_gauge_field, qpb_double);
void qpb_apesmear_niter(qpb_gauge_field, qpb_gauge_field, qpb_double, int);
void qpb_apesmear(qpb_gauge_field, qpb_gauge_field, qpb_double);
#endif /* _QPB_APESMEAR_H */
