#include <stdio.h>
#include <stdlib.h>
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_errors.h>
#include <mpi.h>

void
qpb_finalize(int *argc, char **argv[])
{
  for(int i=0; i<2*ND; i++)
    {
      free(nneigh[i]);
      free(skin_to_ext[i]);
    }

  free(blk_to_ext);
  MPI_Finalize();
  return;
}
