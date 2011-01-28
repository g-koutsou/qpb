#include <qpb.h>

enum {
  INVERT_COLUMN,
  INVERT_PROPAGATOR
} invert_mode;

void
usage(char *argv[])
{
  fprintf(stderr, "Usage: %s geom=NZ,NY,NX PARAM_FILE\n", argv[0]);
  return;
}

int
main(int argc, char *argv[])
{
  /* calls MPI_Init() */
  qpb_msg_passing_init(&argc, &argv);

  /* check and parse command line arguments */
  if(argc != 3)
    {
      usage(argv);
      exit(QPB_ARGS_ERROR);
    }
  char *geom = argv[1];
  int procs[ND-1];
  if(strcmp(strtok(geom, "="), "geom")
     != 0)
    {
      usage(argv);
      exit(QPB_ARGS_ERROR);
    }
  for(int i=0; i<ND-1; i++)
    {
      procs[i] = atoi(strtok(NULL, ","));
    }
  
  /* parse parameter (input) file */
  char conf_file[QPB_MAX_STRING];
  qpb_init_parser(argv[2]);
  if(sscanf(qpb_parse("Conf input file"), "%s", conf_file)!=1)
    {
      error("error parsing for %s\n", 
	    "Conf input file");
      exit(QPB_PARSER_ERROR);
    }

  int g_dim[ND];
  if(sscanf(qpb_parse("Dimensions"), "%d %d %d %d",
	    g_dim, g_dim+1, g_dim+2, g_dim+3)!=ND)
    {
      error("error parsing for %s\n", 
	      "Dimensions");
      exit(QPB_PARSER_ERROR);
    }

  qpb_double ape_alpha;
  if(sscanf(qpb_parse("alpha"), "%lf", &ape_alpha)!=1)
    {
      error("error parsing for %s\n",
	    "alpha");
      exit(QPB_PARSER_ERROR);
    }
  int ape_niter;
  if(sscanf(qpb_parse("Smear iterations"), "%d", &ape_niter)!=1)
    {
      error("error parsing for %s\n",
	    "Smear iterations");
      exit(QPB_PARSER_ERROR);
    }

  int shifts[ND];
  if(sscanf(qpb_parse("Shifts"), "%d %d %d %d",
	    shifts, shifts+1, shifts+2, shifts+3)!=ND)
    {
      error("error parsing for %s\n", 
	      "Shifts");
      exit(QPB_PARSER_ERROR);
    }
  if(shifts[0]<0 ||
     shifts[1]<0 ||
     shifts[2]<0 ||
     shifts[3]<0)
    {
      error("only provide positive shifts, quiting\n");
      exit(QPB_PARAMETERS_ERROR);
    }

  if(shifts[0] > g_dim[0]-1 ||
     shifts[1] > g_dim[1]-1 ||
     shifts[2] > g_dim[2]-1 ||
     shifts[3] > g_dim[3]-1)
    {
      error("shift(s) go beyond lattice length(s), quiting\n");
      exit(QPB_PARAMETERS_ERROR);
    }

  char ape_file[QPB_MAX_STRING];
  if(sscanf(qpb_parse("Conf output file"), "%s", ape_file)!=1)
    {
      error("error parsing for %s\n",
	    "Conf output file");
      exit(QPB_PARSER_ERROR);
    }  
  qpb_finalize_parser();

  /* initialize cartesian grid and index tables */
  qpb_init(g_dim, procs);

  print(" (Lt, Lz, Ly, Lx) = (%2d,%2d,%2d,%2d)\n", 
	problem_params.g_dim[0], 
	problem_params.g_dim[1], 
	problem_params.g_dim[2], 
	problem_params.g_dim[3]);
  print(" Processes = (1,%2d,%2d,%2d)\n", procs[0], procs[1], procs[2]);
  print(" Conf input file = %s\n", conf_file);
  print(" alpha = %g\n", ape_alpha);
  print(" Smear iterations = %d\n", ape_niter);
  print(" Shifts = %d %d %d %d\n", shifts[0], shifts[1], shifts[2], shifts[3]);
  print(" Conf output file = %s\n", ape_file);

  /* allocate gauge field */
  qpb_gauge_field gauge = qpb_gauge_field_init();
  qpb_gauge_field apegauge = qpb_gauge_field_init();
  
  /* read in */
  qpb_read_gauge(gauge, conf_file);

  /* Calculate plaquette */
  qpb_double plaquette = qpb_plaquette(gauge);
  print(" Plaquette = %12.8f\n", plaquette);

  /* APE smear */
  qpb_apesmear_niter(apegauge, gauge, ape_alpha, ape_niter);

  /* Calculate plaquette */
  plaquette = qpb_plaquette(apegauge);
  print(" Plaquette = %12.8f\n", plaquette);

  /* Shift */
  qpb_gauge_field_shift(apegauge, shifts);

  /* Calculate plaquette */
  plaquette = qpb_plaquette(apegauge);
  print(" Plaquette = %12.8f\n", plaquette);

  /* Write the smeared configuration */
  qpb_write_gauge(apegauge, ape_file);
  
  /* Clean up */
  qpb_gauge_field_finalize(apegauge);
  qpb_gauge_field_finalize(gauge);
  qpb_rng_finalize();
  qpb_finalize();
  return 0;
}
