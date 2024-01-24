#ifndef _QPB_CHEBYSHEV_DEFS_H
#define _QPB_CHEBYSHEV_DEFS_H 1

#include <qpb_types.h>

#define QPB_OVERLAP_INITIALIZED 31726

typedef struct {
  unsigned int initialized;
  void *gauge_ptr;
  qpb_double m_bare;
  qpb_double rho;
  qpb_double c_sw;
  qpb_clover_term clover;
  void (* dslash_op)();
  void (* g5_dslash_op)();
  qpb_double mass;
  /* Only basic difference with qpb_kl_defs.h is the addition of the min_eigv and max_eigv: */
  qpb_double min_eigv;
  qpb_double max_eigv;
} qpb_Chebyshev_overlap_params;

#endif /* _QPB_CHEBYSHEV_DEFS_H */
