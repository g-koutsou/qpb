#include <stdio.h>
#include <stdlib.h>
#include <qpb_errors.h>

void *
qpb_alloc(size_t size)
{
  void *ptr = malloc(size);
  if(ptr == NULL)
    {
      fprintf(stderr, "malloc() returned NULL\n");
      exit(QPB_MALLOC_ERROR);
    }
  return ptr;
}
