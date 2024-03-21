#include <qpb.h>
#include <qpb_dslash_wrappers.h>
#include <qpb_comm_halo_spinor_field.h>

enum qpb_operators which_dslash_op;

enum {
  CONF_ILDG,
  CONF_RAW_32,
  CONF_RAW_64,
} conf_format;

enum {
  CONF_SMEARING_STOUT,
  CONF_SMEARING_APE,
} conf_smearing_type;


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

  char *conf_smearing_name, *conf_smearing_param_name;
  if(sscanf(qpb_parse("Conf smearing type"), "%s", aux_string)!=1)
    {
      error("error parsing for %s\n", 
	    "Conf smearing type");
      exit(QPB_PARSER_ERROR);
    }
  if(strcmp(aux_string, "APE") == 0)
    {
      conf_smearing_type = CONF_SMEARING_APE;
      conf_smearing_name = strdup("APE");
      conf_smearing_param_name = strdup("alpha");      
    }
  else if(strcmp(aux_string, "Stout") == 0)
    {
      conf_smearing_type = CONF_SMEARING_STOUT;
      conf_smearing_name = strdup("Stout");
      conf_smearing_param_name = strdup("rho");
    }
  else
    {
      error("%s: option should be one of: ", "Conf smearing type");
      error("%s, ", "APE"); 
      error("%s\n", "Stout"); 
      exit(QPB_PARSER_ERROR);
    };

  qpb_double conf_smearing_param;
  sprintf(aux_string, "%s smearing %s", conf_smearing_name, conf_smearing_param_name);
  if(sscanf(qpb_parse(aux_string), "%lf", &conf_smearing_param)!=1)
    {
      error("error parsing for %s\n", 
	    aux_string);
      exit(QPB_PARSER_ERROR);	  
    }

  int conf_smearing_niter;
  sprintf(aux_string, "%s smearing iterations", conf_smearing_name);
  if(sscanf(qpb_parse(aux_string), "%d", &conf_smearing_niter)!=1)
    {
      error("error parsing for %s\n",
	    aux_string);
      exit(QPB_PARSER_ERROR);
    }

  char conf_out_file[QPB_MAX_STRING];
  if(sscanf(qpb_parse("Conf file out"), "%s", conf_out_file)!=1)
    {
      error("error parsing for %s\n",
	    "Conf file out");
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
  print(" %s %s = %g\n", conf_smearing_name, conf_smearing_param_name, conf_smearing_param);
  print(" %s iterations = %d\n", conf_smearing_name, conf_smearing_niter);
  problem_params.timebc = 1;

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

  /* CONF_SMEARING smear the gauge field */
  qpb_gauge_field smearedgauge = qpb_gauge_field_init();
  if(conf_smearing_niter != 0)
    {
      qpb_double t = qpb_stop_watch(0);
      print(" %s smear gauge field...\n", conf_smearing_name);
      switch(conf_smearing_type) {
      case CONF_SMEARING_APE:
	qpb_apesmear_niter(smearedgauge, gauge, conf_smearing_param, conf_smearing_niter);
	break;
      case CONF_SMEARING_STOUT:
	qpb_stoutsmear_niter(smearedgauge, gauge, conf_smearing_param, conf_smearing_niter);
	break;
      }
      plaquette = qpb_plaquette(smearedgauge);
      t = qpb_stop_watch(t);
      print(" Plaquette = %12.8f, %g sec\n", plaquette, t);
    }
  else
    {
      qpb_gauge_field_copy(smearedgauge, gauge);
    }

  qpb_write_gauge(smearedgauge, conf_out_file);
  
  /* clean up */
  qpb_gauge_field_finalize(gauge);
  qpb_gauge_field_finalize(smearedgauge);
  qpb_finalize();
  return 0;
}
