#ifndef _QPB_KL_DEFS_H
#define _QPB_KL_DEFS_H 1
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
} qpb_overlap_params;

#endif /* _QPB_KL_DEFS_H */
