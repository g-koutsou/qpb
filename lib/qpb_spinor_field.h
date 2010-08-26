#ifndef _QPB_SPINOR_FIELD_H
#define _QPB_SPINOR_FIELD_H 1
#include <qpb_types.h>
#include <qpb_spinor_field_set_zero.h>
#include <qpb_spinor_field_set_delta.h>
#include <qpb_spinor_field_set_random.h>
qpb_spinor_field qpb_spinor_field_init();
void qpb_spinor_field_finalize(qpb_spinor_field);
#endif /* _QPB_SPINOR_FIELD_H 1 */
