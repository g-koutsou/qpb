#include <qpb.h>
enum {
  CONF_ILDG,
  CONF_RAW_32,
  CONF_RAW_64,
} conf_format;

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
  char aux_string[QPB_MAX_STRING];
  qpb_init_parser(argv[2]);
  int g_dim[ND];
  if(sscanf(qpb_parse("Dimensions"), "%d %d %d %d",
	    g_dim, g_dim+1, g_dim+2, g_dim+3)!=ND)
    {
      error("error parsing for %s\n", 
	      "Dimensions");
      exit(QPB_PARSER_ERROR);
    }
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
      if(sscanf(qpb_parse("Conf format"), "%s",
		aux_string)!=1)
	{
	  error("error parsing for %s\n", 
		"Conf format");
	  exit(QPB_PARSER_ERROR);
	}  
      if(strcmp(aux_string, "ildg") == 0)
	conf_format = CONF_ILDG;
      else if(strcmp(aux_string, "raw_32") == 0)
	conf_format = CONF_RAW_32;
      else if(strcmp(aux_string, "raw_64") == 0)
	conf_format = CONF_RAW_64;
      else
	{
	  error("%s: option should be one of: ", "Conf format");
	  error("%s, ", "raw"); 
	  error("%s\n", "ildg"); 
	  exit(QPB_PARSER_ERROR);
	}
      break;
    case QPB_RAND:
      break;
    }

  qpb_double ape_alpha;
  if(sscanf(qpb_parse("APE alpha"), "%lf", &ape_alpha)!=1)
    {
      error("error parsing for %s\n",
	    "alpha");
      exit(QPB_PARSER_ERROR);
    }

  int ape_niter;
  if(sscanf(qpb_parse("APE iterations"), "%d", &ape_niter)!=1)
    {
      error("error parsing for %s\n",
	    "Smear iterations");
      exit(QPB_PARSER_ERROR);
    }

  int n_ape_3d;
  qpb_double alpha_ape_3d;
  if(sscanf(qpb_parse("APE 3D iterations"), "%d", &n_ape_3d)!=1)
    {
      error("error parsing for %s\n", 
	    "APE 3D iterations");
      exit(QPB_PARSER_ERROR);	  
    }

  if(sscanf(qpb_parse("APE 3D alpha"), "%lf", &alpha_ape_3d)!=1)
    {
      error("error parsing for %s\n", 
	    "APE 3D alpha");
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
  int nthreads = 1;
#ifdef OPENMP
#pragma omp parallel
  nthreads = omp_get_num_threads();
#endif
  print(" Threads per process = %2d\n", nthreads);
  switch(conf_opt)
    {
    case QPB_ZERO:
      print(" Gauge field = Zeros\n");
      break;
    case QPB_UNIT:
      print(" Gauge field = Unit\n");
      break;
    case QPB_FILE:
      if(conf_format == CONF_ILDG)
	{
	  print(" Gauge field (ildg) = %s\n", conf_file);
	}
      else if(conf_format == CONF_RAW_32)
	{
	  print(" Gauge field (raw_32) = %s\n", conf_file);
	}
      else if(conf_format == CONF_RAW_64)
	{
	  print(" Gauge field (raw_64) = %s\n", conf_file);
	}
      break;
    case QPB_RAND:
      print(" Gauge field = Random\n");
      break;
    }
  print(" APE alpha = %g\n", ape_alpha);
  print(" APE iterations = %d\n", ape_niter);
  print(" APE 3D smearing = (%f, %d)\n", alpha_ape_3d, n_ape_3d);

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
      if(conf_format == CONF_RAW_32)
	{
	  qpb_read_raw32_gauge(gauge, conf_file);
	}
      else if(conf_format == CONF_RAW_64)
	{
	  qpb_read_raw64_gauge(gauge, conf_file);
	}
      else if(conf_format == CONF_ILDG)
	{
	  qpb_read_ildg_gauge(gauge, conf_file);
	}
      break;
    case QPB_RAND:
      break;
    }

  /* Calculate plaquette */
  qpb_double plaquette = qpb_plaquette(gauge);
  print(" Plaquette = %12.8f\n", plaquette);

  /* APE smear the gauge field */
  if(ape_niter != 0)
    {
      qpb_gauge_field apegauge = qpb_gauge_field_init();

      print(" APE smear gauge field...\n");
      qpb_apesmear_niter(apegauge, gauge, ape_alpha, ape_niter);
      qpb_gauge_field_copy(gauge, apegauge);
      qpb_gauge_field_finalize(apegauge);

      plaquette = qpb_plaquette(gauge);
      print(" Plaquette = %12.8f\n", plaquette);
    }

  qpb_gauge_field gauge_aux[2] = {qpb_gauge_field_init(),
				  qpb_gauge_field_init()};
  qpb_gauge_field_copy(gauge_aux[0], gauge);
  if(n_ape_3d != 0)
    {
      print(" 3D-APE smear gauge field...\n");
      for(int iter=0; iter<n_ape_3d; iter++)
	{
	  qpb_apesmear_3d_niter(gauge_aux[(iter+1)%2], gauge_aux[iter%2], alpha_ape_3d, 1);
	  plaquette = qpb_plaquette_3d(gauge_aux[(iter+1)%2]);
	  print(" Iter = %4d, plaquette = %12.8f\n", iter, plaquette);
	}
    }
  
  qpb_gauge_field_finalize(gauge_aux[0]);
  qpb_gauge_field_finalize(gauge_aux[1]);
  qpb_gauge_field_finalize(gauge);
  qpb_finalize();
  return 0;
}
