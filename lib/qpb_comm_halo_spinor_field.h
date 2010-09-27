#ifndef _QPB_COMM_HALO_SPINOR_FIELD_H
#define _QPB_COMM_HALO_SPINOR_FIELD_H 1
#include <qpb_types.h>
void qpb_comm_halo_spinor_field_init();
void qpb_comm_halo_spinor_field_finalize();
void qpb_comm_halo_spinor_field_start(qpb_spinor_field);
void qpb_comm_halo_spinor_field_wait(qpb_spinor_field);
#endif /* _QPB_COMM_HALO_SPINOR_FIELD_H */
