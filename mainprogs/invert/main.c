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
  int g_dim[ND];
  qpb_init_parser(argv[2]);
  if(sscanf(qpb_parse("Dimensions"), "%d %d %d %d",
	    g_dim, g_dim+1, g_dim+2, g_dim+3)!=ND)
    {
      error("error parsing for %s\n", 
	      "Dimensions");
      exit(QPB_PARSER_ERROR);
    }
  char aux_string[QPB_MAX_STRING];
  if(sscanf(qpb_parse("Conf"), "%s", aux_string)!=1)
    {
      error("error parsing for %s\n", 
	    "Conf");
      exit(QPB_PARSER_ERROR);
    }
  enum qpb_field_init_opts conf_opt;
  if(strcmp(aux_string, "file") == 0)
    conf_opt = QPB_FILE;
  else if(strcmp(aux_string, "unit") == 0)
    conf_opt = QPB_UNIT;
  else
    {
      error("%s: option should be one of: ", "Conf");
      error("%s, ", "unit"); 
      error("%s\n", "file"); 
      exit(QPB_PARSER_ERROR);
    };
  char conf_file[QPB_MAX_STRING];
  switch(conf_opt)
    {
    case QPB_ZERO:
      break;
    case QPB_UNIT:
      break;
    case QPB_FILE:
      if(sscanf(qpb_parse("Conf file"), "%s",
		conf_file)!=1)
	{
	  error("error parsing for %s\n", 
		"Conf file");
	  exit(QPB_PARSER_ERROR);
	}  
      break;
    case QPB_RAND:
      break;
    }
  
  unsigned int seed;
  if(sscanf(qpb_parse("Random seed"), "%u", &seed)!=1)
    {
      error("error parsing for %s\n", 
	    "Random seed");
      exit(QPB_PARSER_ERROR);
    }  
  if(sscanf(qpb_parse("Source"), "%s", aux_string)!=1)
    {
      error("error parsing for %s\n", 
	    "Source");
      exit(QPB_PARSER_ERROR);
    }
  enum qpb_field_init_opts source_opt;
  if(strcmp(aux_string, "zero") == 0)
    source_opt = QPB_ZERO;
  else if(strcmp(aux_string, "point") == 0)
    source_opt = QPB_UNIT;
  else if(strcmp(aux_string, "file") == 0)
    source_opt = QPB_FILE;
  else if(strcmp(aux_string, "random") == 0)
    source_opt = QPB_RAND;
  else
    {
      error("%s: option should be one of: ", "Source");
      error("%s, ", "zero"); 
      error("%s, ", "point"); 
      error("%s, ", "read"); 
      error("%s\n", "random"); 
      exit(QPB_PARSER_ERROR);
    };
  char source_file[QPB_MAX_STRING];
  int point_source_coords[ND+2];
  switch(source_opt)
    {
    case QPB_ZERO:
      break;
    case QPB_UNIT:
      if(sscanf(qpb_parse("Point source coords"), /* t, z, y, x, spin, col */
		"%d %d %d %d %d %d", 
		point_source_coords,
		point_source_coords+1,
		point_source_coords+2,
		point_source_coords+3,
		point_source_coords+4,
		point_source_coords+5)!=6)
	{
	  error("error parsing for %s\n",
		  "Point source coords");
	  exit(QPB_PARSER_ERROR);
	}
      break;
    case QPB_FILE:
      if(sscanf(qpb_parse("Source file"), "%s", source_file)!=1)
	{
	  error("error parsing for %s\n", 
		  "Source file");
	  exit(QPB_PARSER_ERROR);
	}
      break;
    case QPB_RAND:
      break;
    }
  qpb_double kappa;
  if(sscanf(qpb_parse("kappa"), "%lf", &kappa)!=1)
    {
      error("error parsing for %s\n",
	    "kappa");
      exit(QPB_PARSER_ERROR);
    }
  qpb_double c_sw;
  if(sscanf(qpb_parse("c_sw"), "%lf", &c_sw)!=1)
    {
      error("error parsing for %s\n",
	    "c_sw");
      exit(QPB_PARSER_ERROR);
    }
  qpb_double epsilon;
  if(sscanf(qpb_parse("Solver epsilon"), "%lf", &epsilon)!=1)
    {
      error("error parsing for %s\n",
	    "Solver epsilon");
      exit(QPB_PARSER_ERROR);
    }
  int max_iters;
  if(sscanf(qpb_parse("Solver max iters"), "%d", &max_iters)!=1)
    {
      error("error parsing for %s\n",
	    "Solver max iters");
      exit(QPB_PARSER_ERROR);
    }
  char sol_file[QPB_MAX_STRING];
  if(sscanf(qpb_parse("Solution file"), "%s", sol_file)!=1)
    {
      error("error parsing for %s\n",
	    "Solution file");
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
  print(" kappa = %g\n", kappa);
  print(" Clover param = %g\n", c_sw);
  print(" Solver epsilon = %e\n", epsilon);
  print(" Max solver iters = %d\n", max_iters);
  
  qpb_rng_init(seed);
  /* allocate gauge field */
  qpb_gauge_field gauge = qpb_gauge_field_init();

  /* read in configuration */
  switch(conf_opt)
    {
    case QPB_ZERO:
      break;
    case QPB_UNIT:
      qpb_gauge_field_set_unit(gauge);
      break;
    case QPB_FILE:
      qpb_read_gauge(gauge, conf_file);
      break;
    case QPB_RAND:
      break;
    }

  /* Calculate plaquette */
  qpb_double plaquette = qpb_plaquette(gauge);
  print(" Plaquette = %12.8f\n", plaquette);

  /* Clover term */
  qpb_clover_term clover_term = qpb_clover_term_init();
  qpb_clover_term_get(clover_term, gauge);

  /* Allocate source and solution spinor */
  qpb_spinor_field source = qpb_spinor_field_init();
  qpb_spinor_field sol = qpb_spinor_field_init();
  
  switch(source_opt)
    {
    case QPB_ZERO:
      qpb_spinor_field_set_zero(source);
      break;
    case QPB_UNIT:
      qpb_spinor_field_set_delta(source, 
				 point_source_coords, 
				 point_source_coords[4],
				 point_source_coords[5]);
      break;
    case QPB_FILE:
      qpb_read_spinor(source, source_file);
      break;
    case QPB_RAND:
      qpb_spinor_field_set_random(source);
      break;
    }
  qpb_spinor_field_set_zero(sol);
  
  qpb_bicgstab_init();
  int iters = qpb_bicgstab(sol, source, gauge, clover_term, kappa, c_sw,
			   epsilon, max_iters);
  qpb_bicgstab_finalize();

  print(" BiCGStab done: %d\n", iters);

  qpb_write_spinor(sol, sol_file);
  /* clean up */
  qpb_spinor_field_finalize(sol);
  qpb_spinor_field_finalize(source);
  qpb_gauge_field_finalize(gauge);
  qpb_clover_term_finalize(clover_term);
  qpb_rng_finalize();
  qpb_finalize();
  return 0;
}
