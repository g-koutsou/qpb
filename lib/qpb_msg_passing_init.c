#include <stdio.h>
#include <stdlib.h>
#include <qpb_errors.h>
#include <mpi.h>

void
qpb_msg_passing_init(int *argc, char **argv[])
{
  int err = MPI_Init(argc, argv);
  if(err != MPI_SUCCESS)
    {
      fprintf(stderr, "MPI_Init() returned in error\n");
      exit(QPB_INIT_ERROR);
    }

  /* { */
  /*   int i = 0; */
  /*   char hostname[256]; */
  /*   gethostname(hostname, sizeof(hostname)); */
  /*   printf("PID %d on %s ready for attach\n", getpid(), hostname); */
  /*   fflush(stdout); */
  /*   while (0 == i) */
  /*     sleep(5); */
  /* } */

  return;
}
