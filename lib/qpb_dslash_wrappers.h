#ifndef _QPB_DSLASH_WRAPPERS_H
#define _QPB_DSLASH_WRAPPERS_H 1
#include <qpb_types.h>
void qpb_dslash(qpb_spinor_field, qpb_spinor_field, void *[]);
void qpb_bri_dslash(qpb_spinor_field, qpb_spinor_field, void *[]);
void qpb_clover_dslash(qpb_spinor_field, qpb_spinor_field, void *[]);
void qpb_clover_bri_dslash(qpb_spinor_field, qpb_spinor_field, void *[]);

void qpb_gamma5_dslash(qpb_spinor_field, qpb_spinor_field, void *[]);
void qpb_gamma5_bri_dslash(qpb_spinor_field, qpb_spinor_field, void *[]);
void qpb_gamma5_clover_dslash(qpb_spinor_field, qpb_spinor_field, void *[]);
void qpb_gamma5_clover_bri_dslash(qpb_spinor_field, qpb_spinor_field, void *[]);
#endif /* _QPB_DSLASH_WRAPPERS_H */
