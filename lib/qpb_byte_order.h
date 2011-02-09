#ifndef _QPB_BYTE_ORDER_H
#define _QPB_BYTE_ORDER_H 1
#include <stdio.h>

int qpb_is_bigendian();
void qpb_byte_swap_float(void *, size_t);
void qpb_byte_swap_double(void *, size_t);
#endif /* _QPB_BYTE_ORDER_H */
