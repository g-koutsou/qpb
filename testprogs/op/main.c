#include <qpb.h>
#include <qpb_dslash_wrappers.h>
#include <qpb_comm_halo_spinor_field.h>

enum {
  CONF_ILDG,
  CONF_RAW_32,
  CONF_RAW_64,
} conf_format;

enum {
  CONF_SMEARING_STOUT,
  CONF_SMEARING_APE,
} conf_smearing_type;

enum {
  SOURCE_POINT,
  SOURCE_ZERO,
  SOURCE_STOCH,
  SOURCE_FILE
} source_opt;

enum {
  SOURCE_NOT_SMEARED,
  SOURCE_SMEARED
} source_smearing;

enum {
  STOCH_SOURCE_Z4,
  STOCH_SOURCE_Z4_T,
  STOCH_SOURCE_UNIFORM
} stochastic_source;

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

  int shifts[ND];
  if(sscanf(qpb_parse("Gauge shifts"), "%d %d %d %d",
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
  if(strcmp(aux_string, "zero") == 0)
    source_opt = SOURCE_ZERO;
  else if(strcmp(aux_string, "point") == 0)
    source_opt = SOURCE_POINT;
  else if(strcmp(aux_string, "file") == 0)
    source_opt = SOURCE_FILE;
  else if(strcmp(aux_string, "stochastic") == 0)
    source_opt = SOURCE_STOCH;
  else
    {
      error("%s: option should be one of: ", "Source");
      error("%s, ", "zero"); 
      error("%s, ", "point"); 
      error("%s, ", "read"); 
      error("%s\n", "stochastic"); 
      exit(QPB_PARSER_ERROR);
    };

  if(sscanf(qpb_parse("Source smearing"), "%s", aux_string)!=1)
    {
      error("error parsing for %s\n", 
	    "Source smearing");
      exit(QPB_PARSER_ERROR);
    }

  if(strcmp(aux_string, "yes") == 0)
    source_smearing = SOURCE_SMEARED;
  else if(strcmp(aux_string, "no") == 0)
    source_smearing = SOURCE_NOT_SMEARED;
  else
    {
      error("%s: option should be one of: ", "Source smearing");
      error("%s, ", "yes"); 
      error("%s\n", "no"); 
      exit(QPB_PARSER_ERROR);
    };

  int n_gauss, n_conf_smearing_gauss;
  qpb_double delta_gauss, param_conf_smearing_gauss;
  switch(source_smearing)
    {
    case SOURCE_SMEARED:
      if(sscanf(qpb_parse("Gaussian smearing iterations"), "%d", &n_gauss)!=1)
	{
	  error("error parsing for %s\n", 
		"Gaussian smearing iterations");
	  exit(QPB_PARSER_ERROR);	  
	}

      if(sscanf(qpb_parse("Gaussian smearing delta"), "%lf", &delta_gauss)!=1)
	{
	  error("error parsing for %s\n", 
		"Gaussian smearing delta");
	  exit(QPB_PARSER_ERROR);	  
	}

      sprintf(aux_string, "Gaussian smearing %s iterations", conf_smearing_name);
      if(sscanf(qpb_parse(aux_string), "%d", &n_conf_smearing_gauss)!=1)
	{
	  error("error parsing for %s\n", 
		aux_string);
	  exit(QPB_PARSER_ERROR);	  
	}

      sprintf(aux_string, "Gaussian smearing %s %s", conf_smearing_name, conf_smearing_param_name);
      if(sscanf(qpb_parse(aux_string), "%lf", &param_conf_smearing_gauss)!=1)
	{
	  error("error parsing for %s\n", 
		aux_string);
	  exit(QPB_PARSER_ERROR);	  
	}
      break;

    case SOURCE_NOT_SMEARED:
      break;
    }

  int n_spinors = 1;
  char source_file[QPB_MAX_STRING];
  int source_coords[n_spinors][ND+2];
  switch(source_opt)
    {      
    case SOURCE_POINT:
      /* Read point-source coords for each spinor */
      sprintf(aux_string, "Point source coords");
      if(sscanf(qpb_parse(aux_string), /* t, z, y, x, spin, col */
		"%d %d %d %d %d %d", 
		source_coords[0],
		source_coords[0]+1,
		source_coords[0]+2,
		source_coords[0]+3,
		source_coords[0]+4,
		source_coords[0]+5)!=6)
	{
	  error("error parsing for %s\n",
		aux_string);
	  exit(QPB_PARSER_ERROR);
	}
      break;
    case SOURCE_FILE:
      if(sscanf(qpb_parse("Source file"), "%s", source_file)!=1)
	{
	  error("error parsing for %s\n", 
		"Source file");
	  exit(QPB_PARSER_ERROR);
	}
      break;
    case SOURCE_STOCH:
      if(sscanf(qpb_parse("Stochastic source type"), "%s", aux_string)!=1)
	{
	  error("error parsing for %s\n", 
		"Stochastic source type");
	  exit(QPB_PARSER_ERROR);
	}
      else if(strcmp(aux_string, "Z4") == 0)
	{
	  stochastic_source = STOCH_SOURCE_Z4;  
	}
      else if(strcmp(aux_string, "Z4-T") == 0)
	{
	  stochastic_source = STOCH_SOURCE_Z4_T;  
	  if(sscanf(qpb_parse("Z4 source time"), "%d", source_coords[0])!=1)
	    {
	      error("error parsing for %s\n",
		    "Z4 source time");
	      exit(QPB_PARSER_ERROR);
	    }
	}
      else if(strcmp(aux_string, "uniform") == 0)
	{
	  stochastic_source = STOCH_SOURCE_UNIFORM;
	}
      else
	{
	  error("%s: option should be one of: ", "Stochastic source type");
	  error("%s, ", "Z4"); 
	  error("%s, ", "Z4-T"); 
	  error("%s\n", "uniform"); 
	  exit(QPB_PARSER_ERROR);
	}
      break;      
    case SOURCE_ZERO:
      break;
    }

  if(sscanf(qpb_parse("Dslash operator"), "%s", aux_string)!=1)
    {
      error("error parsing for %s\n", 
	    "Dslash operator");
      exit(QPB_PARSER_ERROR);
    }
  /* which_dslash_op is a global */
  if(strcmp(aux_string, "Brillouin") == 0)
    which_dslash_op = QPB_DSLASH_BRILLOUIN;
  else if(strcmp(aux_string, "Standard") == 0)
    which_dslash_op = QPB_DSLASH_STANDARD;
  else
    {
      error("%s: option should be one of: ", "Dslash operator");
      error("%s, ", "Brillouin"); 
      error("%s\n", "Standard"); 
      exit(QPB_PARSER_ERROR);
    };

  qpb_double m_bare;
  if(sscanf(qpb_parse("bare mass"), "%lf", &m_bare)!=1)
    {
      error("error parsing for %s\n",
	    "bare mass");
      exit(QPB_PARSER_ERROR);
    }
  qpb_double c_sw;
  if(sscanf(qpb_parse("c_sw"), "%lf", &c_sw)!=1)
    {
      error("error parsing for %s\n",
	    "c_sw");
      exit(QPB_PARSER_ERROR);
    }
  char sol_file[QPB_MAX_STRING];
  if(sscanf(qpb_parse("Solution file"), "%s", sol_file)!=1)
    {
      error("error parsing for %s\n",
	    "Solution file");
      exit(QPB_PARSER_ERROR);
    }
  qpb_double timebc;
  if(sscanf(qpb_parse("BC in time"), "%lf", &timebc)!=1)
    {
      error("error parsing for %s\n",
	    "BC in time");
      exit(QPB_PARSER_ERROR);
    }
  
  if(timebc != 1 && which_dslash_op == QPB_DSLASH_BRILLOUIN)
    {
      error("\n WARNING: Arbitrary boundary conditions in time are only implemented for Standard Operator\n");
      error(" WARNING: overriding to periodic (setting BC in time = 1)\n\n");
      timebc = 1;
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
  switch(source_smearing)
    {
    case SOURCE_SMEARED:
      print(" Will smear source\n");
      print(" Gaussian smearing = (%f, %d)\n", delta_gauss, n_gauss);
      print(" Gaussian source %s smearing = (%f, %d)\n", conf_smearing_name, param_conf_smearing_gauss, n_conf_smearing_gauss);
      break;
      
    case SOURCE_NOT_SMEARED:
      break;
    }

  switch(source_opt)
    {
    case SOURCE_POINT:
      print(" Point source coords (t, z, y, x, mu, col) = (%d, %d, %d, %d, %d, %d)\n",
	    source_coords[0][0], source_coords[0][1], source_coords[0][2], source_coords[0][3], source_coords[0][4], source_coords[0][5]);
      break;
    case SOURCE_FILE:
      print(" Will read source from: %s\n", source_file);
      break;
    case SOURCE_STOCH:
      print(" Will generate a stochastic source\n");
      break;
    case SOURCE_ZERO:
      print(" Will set source to zero\n");      
      break;
    }
  print(" %s %s = %g\n", conf_smearing_name, conf_smearing_param_name, conf_smearing_param);
  print(" %s iterations = %d\n", conf_smearing_name, conf_smearing_niter);
  print(" Conf shifts = %d %d %d %d\n", shifts[0], shifts[1], shifts[2], shifts[3]);
  print(" bare mass = %g\n", m_bare);
  print(" Clover param = %g\n", c_sw);
  print(" BC in time = %g\n", timebc);
  switch(which_dslash_op)
    {
    case QPB_DSLASH_BRILLOUIN:
      print(" Dslash operator is Brillouin\n");
      break;
    case QPB_DSLASH_STANDARD:
      print(" Dslash operator is Standard\n");
      break;
    }
  qpb_rng_init(seed);
  problem_params.timebc = timebc;

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

  /* Shift it */
  qpb_gauge_field_shift(smearedgauge, shifts);
  qpb_gauge_field_shift(gauge, shifts);

  /* Clover term */
  qpb_clover_term clover_term = qpb_clover_term_init();
  qpb_clover_term_get(clover_term, smearedgauge);

  /* Allocate source and solution spinor */
  qpb_spinor_field *source;
  qpb_spinor_field *sol;
  source = qpb_alloc(sizeof(qpb_spinor_field)*n_spinors);
  sol = qpb_alloc(sizeof(qpb_spinor_field)*n_spinors);
  for(int i=0; i<n_spinors; i++)
    {
      source[i] = qpb_spinor_field_init();
      sol[i] = qpb_spinor_field_init();
    }
  
  switch(source_opt)
    {
    case SOURCE_ZERO:
      qpb_spinor_field_set_zero(source[0]);
      break;
    case SOURCE_POINT:
      qpb_spinor_field_set_delta(source[0], 
				 source_coords[0], 
				 source_coords[0][4],
				 source_coords[0][5]);
      break;
    case SOURCE_FILE:
      if(n_spinors == 1)
	{
	  qpb_read_spinor(source[0], source_file);
	}
      else
	{
	  error(" reading spinors in propagator mode not implemented\n");
	  exit(QPB_FILE_ERROR);
	}
      break;
    case SOURCE_STOCH:
      switch(stochastic_source)
	{
	case STOCH_SOURCE_UNIFORM:
	  for(int i=0; i<n_spinors; i++)
	    qpb_spinor_field_set_random(source[i]);
	  break;
	case STOCH_SOURCE_Z4:
	  for(int i=0; i<n_spinors; i++)
	    qpb_spinor_field_set_z4(source[i]);
	  break;
	case STOCH_SOURCE_Z4_T:
	  for(int i=0; i<n_spinors; i++)
	    qpb_spinor_field_set_z4t(source[i], source_coords[0][0]);
	  break;
	}
      break;
    }

  switch(source_smearing)
    {
    case SOURCE_SMEARED:
      {
	qpb_gauge_field gauss_gauge = qpb_gauge_field_init();
	/* 3D smear the gauge field for gaussian source */
	if(n_conf_smearing_gauss != 0)
	  {
	    print(" 3D-%s smear gauge field...\n", conf_smearing_name);
	    switch(conf_smearing_type) {
	    case CONF_SMEARING_APE:
	      qpb_apesmear_3d_niter(gauss_gauge, gauge, param_conf_smearing_gauss, n_conf_smearing_gauss);
	      break;
	    case CONF_SMEARING_STOUT:
	      qpb_stoutsmear_3d_niter(gauss_gauge, gauge, param_conf_smearing_gauss, n_conf_smearing_gauss);
	      break;
	    }
	    plaquette = qpb_plaquette(gauss_gauge);
	    qpb_double p3d = qpb_plaquette_3d(gauss_gauge);
	    
	    print(" Plaquette (3D) = %10.8f (%10.8f)\n", plaquette, p3d);
	  }
	else
	  {
	    qpb_gauge_field_copy(gauss_gauge, gauge);
	  }
	
	qpb_gauss_smear_init();
	qpb_spinor_field aux = qpb_spinor_field_init();
	qpb_spinor_xeqy(aux, source[0]);
	qpb_gauss_smear_niter(source[0], aux, gauss_gauge, delta_gauss, n_gauss);
	qpb_gauss_smear_finalize();
	qpb_gauge_field_finalize(gauss_gauge);
      }
      break;
    case SOURCE_NOT_SMEARED:
      break;
    }

  qpb_spinor_field_set_zero(sol[0]);

  qpb_diagonal_links diagonal_links;
  void *op_arg_links = NULL;
  switch(which_dslash_op) 
    {
    case QPB_DSLASH_BRILLOUIN:
      diagonal_links = qpb_diagonal_links_init();
      qpb_diagonal_links_get(diagonal_links, smearedgauge);
      op_arg_links = &diagonal_links;
      break;
    case QPB_DSLASH_STANDARD:
      op_arg_links = &smearedgauge;
      break;
    }

  qpb_comm_halo_spinor_field_init();

  qpb_double t = qpb_stop_watch(0);
  void *dslash_args[] = 
    {
      op_arg_links,
      &m_bare,
      &clover_term,
      &c_sw
    };

  void (* dslash_func)() = NULL;
  switch(which_dslash_op)
    {
    case QPB_DSLASH_BRILLOUIN:
      if(c_sw)
	dslash_func = &qpb_clover_bri_dslash;
      else
	dslash_func = &qpb_bri_dslash;	
      break;
    case QPB_DSLASH_STANDARD:
      if(c_sw)
	dslash_func = &qpb_clover_dslash;
      else
	dslash_func = &qpb_dslash;	
      break;
    }
  
  dslash_func(sol[0], source[0], dslash_args);

  t = qpb_stop_watch(t);  
  print(" Op done, in t = %f sec\n", t);

  qpb_comm_halo_spinor_field_finalize();

  if(which_dslash_op == QPB_DSLASH_BRILLOUIN)
    qpb_diagonal_links_finalize(diagonal_links);
  
  qpb_write_n_spinor(&(sol[0]), 1, sol_file);

  /* clean up */
  qpb_spinor_field_finalize(sol[0]);
  qpb_spinor_field_finalize(source[0]);

  free(sol);
  free(source);
  qpb_gauge_field_finalize(gauge);
  qpb_gauge_field_finalize(smearedgauge);
  qpb_clover_term_finalize(clover_term);
  qpb_rng_finalize();
  qpb_finalize();
  return 0;
}
