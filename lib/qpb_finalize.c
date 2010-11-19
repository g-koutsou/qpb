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

  for(int i=0; i<1*2*3*4; i++)
    free(permutations[4][i]);
  for(int i=0; i<1*2*3; i++)
    free(permutations[3][i]);
  for(int i=0; i<1*2; i++)
    free(permutations[2][i]);
  for(int i=0; i<1; i++)
    free(permutations[1][i]);
  free(permutations[4]);
  free(permutations[3]);
  free(permutations[2]);
  free(permutations[1]);

  MPI_Finalize();
  return;
}
