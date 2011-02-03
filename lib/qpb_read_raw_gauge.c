#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_byte_order.h>
#include <qpb_alloc.h>
#include <qpb_errors.h>
#include <qpb_read_gauge.h>

void
qpb_read_raw32_gauge(qpb_gauge_field gauge_field, char fname[])
{
  size_t precision = 32, offset = 0;
  qpb_read_gauge(gauge_field, offset, precision, fname);
  return;
}


void
qpb_read_raw64_gauge(qpb_gauge_field gauge_field, char fname[])
{
  size_t precision = 64, offset = 0;
  qpb_read_gauge(gauge_field, offset, precision, fname);
  return;
}

