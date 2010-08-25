#include <sys/time.h>

#include <qpb_types.h>

qpb_double
qpb_stop_watch(qpb_double ref)
{
  qpb_double time;
  struct timeval t;
  gettimeofday(&t, NULL);
  time = (qpb_double) t.tv_sec + (qpb_double) t.tv_usec * 1e-6;
  return (time - ref);
}
