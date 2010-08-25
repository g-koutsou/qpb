#ifndef _QPB_BYTE_ORDER_H
#define _QPB_BYTE_ORDER_H 1
#include <stdio.h>

int qpb_is_bigendian();
void qpb_byte_swap_float(float *, size_t);
void qpb_byte_swap_double(double *, size_t);
#endif /* _QPB_BYTE_ORDER_H */
