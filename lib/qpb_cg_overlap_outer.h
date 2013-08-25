#ifndef _QPB_CG_OVERLAP_OUTER_H
#define _QPB_CG_OVERLAP_OUTER_H 1
#include <qpb_types.h>
#include <qpb_kl_defs.h>
void qpb_cg_overlap_outer_init();
int qpb_cg_overlap_outer(qpb_spinor_field, qpb_spinor_field, void *, 
			       qpb_clover_term, qpb_double, qpb_double, qpb_double, 
			       enum qpb_kl_classes, int,
			       qpb_double, int);

void qpb_cg_overlap_outer_finalize();
#endif /* _QPB_CG_OVERLAP_OUTER_H */