#ifndef _QPB_OVERLAP_KL_H
#define _QPB_OVERLAP_KL_H 1

#include <qpb_types.h>
#include <qpb_kl_defs.h>
void qpb_overlap_kl(qpb_spinor_field, qpb_spinor_field, 
	       enum qpb_kl_classes, int,
	       qpb_double, int);

void qpb_overlap_kl_init(void *, qpb_clover_term , qpb_double , qpb_double , qpb_double);
void qpb_overlap_kl_finalize();

#endif /* _QPB_OVERLAP_KL_H */
