#ifndef _QPB_GAUSS_SMEAR_H
#define _QPB_GAUSS_SMEAR_H 1
#include <qpb_types.h>
#include <qpb_spinor_linalg.h>
void qpb_gauss_smear_niter(qpb_spinor_field, qpb_spinor_field, qpb_gauge_field, qpb_double, int);
void qpb_gauss_smear_iter(qpb_spinor_field, qpb_spinor_field, qpb_gauge_field, qpb_double);
void qpb_gauss_smear_init();
void qpb_gauss_smear_finalize();
#endif /* _QPB_GAUSS_SMEAR_H */
