#ifndef _QPB_STOUTSMEAR_H
#define _QPB_STOUTSMEAR_H 1
#include <qpb_types.h>
void qpb_stoutsmear_3d_niter(qpb_gauge_field, qpb_gauge_field, qpb_double, int);
void qpb_stoutsmear_3d(qpb_gauge_field, qpb_gauge_field, qpb_double);
void qpb_stoutsmear_niter(qpb_gauge_field, qpb_gauge_field, qpb_double, int);
void qpb_stoutsmear(qpb_gauge_field, qpb_gauge_field, qpb_double);
#endif /* _QPB_STOUTSMEAR_H */
