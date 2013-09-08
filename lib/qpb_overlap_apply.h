#ifndef _QPB_OVERLAP_APPLY_H
#define _QPB_OVERLAP_APPLY_H 1

#include <qpb_types.h>
#include <qpb_kl_defs.h>
void
qpb_overlap_apply(qpb_spinor_field, qpb_spinor_field, void *, 
		  qpb_clover_term, qpb_double, qpb_double, qpb_double, 
		  enum qpb_kl_classes, int,
		  qpb_double, int);

#endif /* _QPB_OVERLAP_APPLY_H */
