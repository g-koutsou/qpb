#include <stdio.h>

int
qpb_is_bigendian()
{
  union {
    char c[4];
    int  i;
  } word4;
  word4.c[0] = 0;
  word4.c[1] = 0;
  word4.c[2] = 0;
  word4.c[3] = 1;
  if(word4.i == 1) 
    return 1;

  return 0;
}

void
qpb_byte_swap_float(float *buf, size_t n)
{
  for(int i=0; i<n; i++)
    {
      unsigned char *c = (unsigned char *)(buf + i);
      unsigned char swap;
      swap = c[0]; c[0] = c[3]; c[3] = swap;
      swap = c[1]; c[1] = c[2]; c[2] = swap;
    }
  return;
}

void
qpb_byte_swap_double(double *buf, size_t n)
{
  for(int i=0; i<n; i++)
    {
      unsigned char *c = (unsigned char *)(buf + i);
      unsigned char swap;
      swap = c[0]; c[0] = c[7]; c[7] = swap;
      swap = c[1]; c[1] = c[6]; c[6] = swap;
      swap = c[2]; c[2] = c[5]; c[5] = swap;
      swap = c[3]; c[3] = c[4]; c[4] = swap;
    }
  return;
}
