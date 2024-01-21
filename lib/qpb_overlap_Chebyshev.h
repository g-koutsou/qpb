#ifndef _QPB_OVERLAP_CHEBYSHEV_H
#define _QPB_OVERLAP_CHEBYSHEV_H 1

#include <qpb_types.h>
#include <qpb_overlap_Chebyshev_defs.h>

void qpb_overlap_Chebyshev(qpb_spinor_field, qpb_spinor_field);

void qpb_overlap_Chebyshev_init(void *, qpb_clover_term, qpb_double, qpb_double, qpb_double, qpb_double, int, int);
void qpb_overlap_Chebyshev_finalize();

#endif /* _QPB_OVERLAP_CHEBYSHEV_H */