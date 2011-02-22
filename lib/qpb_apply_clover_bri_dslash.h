#ifndef _QPB_APPLY_CLOVER_BRI_DSLASH_H
#define _QPB_APPLY_CLOVER_BRI_DSLASH_H 1
#include <qpb_types.h>
#include <qpb_spinor_linalg.h>

void qpb_apply_clover_bri_dslash(qpb_spinor_field, qpb_spinor_field, 
				 void *, qpb_double, qpb_clover_term, qpb_double);
void qpb_apply_gamma5_clover_bri_dslash(qpb_spinor_field, qpb_spinor_field, 
					void *, qpb_double, qpb_clover_term, qpb_double);
#endif /* _QPB_APPLY_CLOVER_BRI_DSLASH_H */
