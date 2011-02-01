#include <qpb.h>

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
  qpb_init_parser(argv[2]);
  
  /* Global dimensions */
  int g_dim[ND];
  if(sscanf(qpb_parse("Dimensions"), "%d %d %d %d",
	    g_dim, g_dim+1, g_dim+2, g_dim+3)!=ND)
    {
      error("error parsing for %s\n", 
	      "Dimensions");
      exit(QPB_PARSER_ERROR);
    }

  /* Heavy - light or degenerate? */
  int n_quarks;
  if(sscanf(qpb_parse("N quarks"), "%d", &n_quarks)!=1)
    {
      error("error parsing for %s\n", 
	    "N quarks");
      exit(QPB_PARSER_ERROR);
    }

  if(n_quarks != 1 && n_quarks != 2)
    {
      error("N quarks should be 1 or 2\n");
      exit(QPB_PARSER_ERROR);
    }

  char prop_file_light[QPB_MAX_STRING];
  char prop_file_heavy[QPB_MAX_STRING];
  if(sscanf(qpb_parse("Prop file light"), "%s",
		prop_file_light)!=1)
    {
      error("error parsing for %s\n", 
	    "Prop file light");
      exit(QPB_PARSER_ERROR);
    }

  if(n_quarks == 2)
    {
      if(sscanf(qpb_parse("Prop file heavy"), "%s",
		prop_file_heavy)!=1)
	{
	  error("error parsing for %s\n", 
		"Prop file heavy");
	  exit(QPB_PARSER_ERROR);
	}
    }

  char corr_file[QPB_MAX_STRING];
  if(sscanf(qpb_parse("Output file"), "%s", corr_file)!=1)
    {
      error("error parsing for %s\n",
	    "Output file");
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
  print(" N quarks = %d\n", n_quarks);
  print(" Prop file light = %s\n", prop_file_light);
  if(n_quarks == 2)
    print(" Prop file heavy = %s\n", prop_file_heavy);
  print(" Output file = %s\n", corr_file);

  /* Allocate propagator structs (as 12 spinor structs) */
  qpb_spinor_field *prop_heavy = NULL;
  qpb_spinor_field *prop_light = NULL;
  prop_light = qpb_alloc(sizeof(qpb_spinor_field)*NS*NC);
  
  if(n_quarks == 2)
    prop_heavy = qpb_alloc(sizeof(qpb_spinor_field)*NS*NC);    

  for(int i=0; i<NC*NS; i++)
    {
      prop_light[i] = qpb_spinor_field_init();
      if(n_quarks == 2)
	prop_heavy[i] = qpb_spinor_field_init();
    }

  qpb_read_n_spinor(prop_light, NC*NS, prop_file_light);
  if(n_quarks == 2)
    qpb_read_n_spinor(prop_heavy, NC*NS, prop_file_heavy);

  qpb_meson_2pt_corr(prop_light, prop_heavy, corr_file);
  
  free(prop_light);
  if(n_quarks == 2)
    free(prop_heavy);
  qpb_rng_finalize();
  qpb_finalize();
  return 0;
}
