#ifndef _QPB_KL_DEFS_H
#define _QPB_KL_DEFS_H 1
#include <qpb_types.h>
enum qpb_kl_classes {
  KL_CLASS_11
};

#define QPB_OVERLAP_INITIALIZED 31726

typedef struct {
  unsigned int initialized;
  void *gauge_ptr;
  qpb_double m_bare;
  qpb_double rho;
  qpb_double c_sw;
  qpb_clover_term clover;
  void (* dslash_op)(qpb_spinor_field, qpb_spinor_field, void **);
  void (* g5_dslash_op)(qpb_spinor_field, qpb_spinor_field, void **);
  qpb_double mass;
} qpb_overlap_params;
#endif /* _QPB_KL_DEFS_H */
