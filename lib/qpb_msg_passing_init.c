#include <stdio.h>
#include <stdlib.h>
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_errors.h>
#include <mpi.h>

unsigned short am_master = 1; /* Everyone is the master, until MPI_Comm_ank is called */

void
qpb_msg_passing_init(int *argc, char **argv[])
{
  int err = MPI_Init(argc, argv);
  if(err != MPI_SUCCESS)
    {
      fprintf(stderr, "MPI_Init() returned in error\n");
      exit(QPB_INIT_ERROR);
    }

  return;
}
