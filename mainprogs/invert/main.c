#include <qpb.h>

enum {
  INVERT_COLUMN,
  INVERT_PROPAGATOR
} invert_mode;

enum {
  CONF_ILDG,
  CONF_RAW_32,
  CONF_RAW_64,
} conf_format;

enum {
  BICGSTAB,
  CG,
  MSCG,
  BICGGAMMA5
} solver;

enum {
  SOURCE_POINT,
  SOURCE_ZERO,
  SOURCE_RAND,
  SOURCE_FILE,
  SOURCE_SMEARED  
} source_opt;

void
usage(char *argv[])
{
  fprintf(stderr, "Usage: %s geom=NZ,NY,NX PARAM_FILE\n", argv[0]);
  return;
}

int
main(int argc, char *argv[])
{
  int n_spinors;
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
  if(sscanf(qpb_parse("Invert mode"), "%s", aux_string)!=1)
    {
      error("error parsing for %s\n", 
	    "Invert mode");
      exit(QPB_PARSER_ERROR);
    }
  if(strcmp(aux_string, "propagator") == 0)
    {
      invert_mode = INVERT_PROPAGATOR;  
      n_spinors = 12;
    }
  else if(strcmp(aux_string, "column") == 0)
    {
      invert_mode = INVERT_COLUMN;
      n_spinors = 1;
    }
  else
    {
      error("%s: option should be one of: ", "Invert mode");
      error("%s, ", "propagator"); 
      error("%s\n", "column"); 
      exit(QPB_PARSER_ERROR);
    };

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
  else if(strcmp(aux_string, "random") == 0)
    source_opt = SOURCE_RAND;
  else if(strcmp(aux_string, "smeared") == 0)
    source_opt = SOURCE_SMEARED;
  else
    {
      error("%s: option should be one of: ", "Source");
      error("%s, ", "zero"); 
      error("%s, ", "point"); 
      error("%s, ", "read"); 
      error("%s, ", "smeared"); 
      error("%s\n", "random"); 
      exit(QPB_PARSER_ERROR);
    };

  char source_file[QPB_MAX_STRING];
  int point_source_coords[ND+2];
  int n_gauss;
  qpb_double alpha_gauss;
  switch(source_opt)
    {
    case SOURCE_SMEARED:
      if(sscanf(qpb_parse("Gaussian smearing iterations"), "%d", &n_gauss)!=1)
	{
	  error("error parsing for %s\n", 
		"Gaussian smearing iterations");
	  exit(QPB_PARSER_ERROR);	  
	}

      if(sscanf(qpb_parse("Gaussian smearing alpha"), "%lf", &alpha_gauss)!=1)
	{
	  error("error parsing for %s\n", 
		"Gaussian smearing alpha");
	  exit(QPB_PARSER_ERROR);	  
	}
    case SOURCE_POINT:
      switch(invert_mode)
	{
	case INVERT_COLUMN:
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
	case INVERT_PROPAGATOR:
	  if(sscanf(qpb_parse("Point source coords"), /* t, z, y, x */
		    "%d %d %d %d", 
		    point_source_coords,
		    point_source_coords+1,
		    point_source_coords+2,
		    point_source_coords+3)!=4)
	    {
	      error("error parsing for %s\n",
		    "Point source coords");
	      exit(QPB_PARSER_ERROR);
	    }
	  break;	  
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
    case SOURCE_RAND:
    case SOURCE_ZERO:
      break;
    }


  int numb_shifts;
  qpb_double *ms_shifts = NULL;

  if(sscanf(qpb_parse("Solver"), "%s", aux_string)!=1)
    {
      error("error parsing for %s\n", 
	    "Solver");
      exit(QPB_PARSER_ERROR);
    }
  if(strcmp(aux_string, "bicgstab") == 0)
    {
      solver = BICGSTAB;
      numb_shifts = 1;
    }
  else if(strcmp(aux_string, "cg") == 0)
    {
      solver = CG;
      numb_shifts = 1;
    }
  else if(strcmp(aux_string, "bicgg5") == 0)
    {
      solver = BICGGAMMA5;
      numb_shifts = 1;
    }
  else if(strcmp(aux_string, "mscg") == 0)
    {
      solver = MSCG;

      if(sscanf(qpb_parse("Number of shifts"), "%d", &numb_shifts)!=1)
	{
	  error("error parsing for %s\n",
		"Number of shifts");
	  exit(QPB_PARSER_ERROR);
	}
      
      ms_shifts = malloc(sizeof(qpb_double)*numb_shifts);
      for(int i=1; i<=numb_shifts; i++)
	{
	  sprintf(aux_string, "Shift %d", i);
	  if(sscanf(qpb_parse(aux_string), "%lf", &ms_shifts[i-1])!=1)
	    {
	      error("error parsing for %s\n",
		    aux_string);
	      exit(QPB_PARSER_ERROR);
	    }
	}
    }
  else
    {
      error("%s: option should be one of: ", "Solver");
      error("%s, ", "bicgstab"); 
      error("%s, ", "cg"); 
      error("%s, ", "bicgg5");
      error("%s\n", "mscg"); 
      exit(QPB_PARSER_ERROR);
    };


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
  switch(source_opt)
    {
    case SOURCE_SMEARED:
      printf(" Gaussian smearing = (%g, %d)\n", alpha_gauss, n_gauss);
    case SOURCE_POINT:
      switch(invert_mode)
	{
	case INVERT_COLUMN:
	  print(" Point source coords (t, z, y, x, mu, col) = (%d, %d, %d, %d, %d, %d)\n",
		point_source_coords[0], point_source_coords[1], point_source_coords[2], point_source_coords[3],
		point_source_coords[4], point_source_coords[5]);
	  break;
	case INVERT_PROPAGATOR:
	  print(" Point source coords (t, z, y, x) = (%d, %d, %d, %d)\n",
		point_source_coords[0], point_source_coords[1], point_source_coords[2], point_source_coords[3]);
	  break;	  
	}
      break;
    case SOURCE_FILE:
      print(" Will read source from: %s\n", source_file);
      break;
    case SOURCE_RAND:
      print(" Will generate a random source\n");
      break;
    case SOURCE_ZERO:
      print(" Will set source to zero\n");      
      break;
    }
  print(" APE alpha = %g\n", ape_alpha);
  print(" APE iterations = %d\n", ape_niter);
  print(" Conf shifts = %d %d %d %d\n", shifts[0], shifts[1], shifts[2], shifts[3]);
  print(" kappa = %g\n", kappa);
  print(" Clover param = %g\n", c_sw);
  print(" BC in time = %g\n", timebc);
  print(" Solver epsilon = %e\n", epsilon);
  print(" Max solver iters = %d\n", max_iters);
  switch(which_dslash_op)
    {
    case QPB_DSLASH_BRILLOUIN:
      print(" Dslash operator is Brillouin\n");
      break;
    case QPB_DSLASH_STANDARD:
      print(" Dslash operator is Standard\n");
      break;
    }
  switch(solver)
    {
    case BICGSTAB:
      print(" Solver = BiCGStab \n");
      break;
    case CG:
      print(" Solver = CG\n");
      break;
    case BICGGAMMA5:
      print(" Solver = BiCGγ5\n");
      break;
    case MSCG:
      print(" Solver = msCG\n");
      for(int i=0; i<numb_shifts; i++)
	{
	  print("\tShift %d = %10g\n", i+1, ms_shifts[i]);
	}
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

  /* Shift it */
  qpb_gauge_field_shift(gauge, shifts);

  /* Clover term */
  qpb_clover_term clover_term = qpb_clover_term_init();
  qpb_clover_term_get(clover_term, gauge);

  /* Allocate source and solution spinor */
  qpb_spinor_field *source;
  qpb_spinor_field *sol;
  source = qpb_alloc(sizeof(qpb_spinor_field)*n_spinors);
  sol = qpb_alloc(sizeof(qpb_spinor_field)*n_spinors*numb_shifts);
  for(int i=0; i<n_spinors; i++)
    {
      source[i] = qpb_spinor_field_init();
      for(int j=0; j<numb_shifts; j++)
	sol[j+i*numb_shifts] = qpb_spinor_field_init();
    }
  
  switch(source_opt)
    {
    case SOURCE_ZERO:
      for(int i=0; i<n_spinors; i++)
	qpb_spinor_field_set_zero(source[i]);
      break;
    case SOURCE_POINT:
    case SOURCE_SMEARED:
      switch(invert_mode)
	{
	case INVERT_COLUMN:
	  qpb_spinor_field_set_delta(source[0], 
				     point_source_coords, 
				     point_source_coords[4],
				     point_source_coords[5]);
	  break;
	case INVERT_PROPAGATOR:
	  for(int i=0; i<n_spinors; i++)
	    qpb_spinor_field_set_delta(source[i], 
				       point_source_coords, 
				       i/NC, i%NC);
	  break;
	}
      break;
    case SOURCE_FILE:
      if(n_spinors == 1)
	qpb_read_spinor(source[0], source_file);
      else
	{
	  error(" reading spinors in propagator mode not implemented\n");
	  exit(QPB_FILE_ERROR);
	}
      break;
    case SOURCE_RAND:
      for(int i=0; i<n_spinors; i++)
	qpb_spinor_field_set_random(source[i]);
      break;
    }

  for(int i=0; i<n_spinors; i++)
    for(int j=0; j<numb_shifts; j++)
      qpb_spinor_field_set_zero(sol[j+i*numb_shifts]);

  qpb_diagonal_links diagonal_links;
  int iters = -2;
  void *solver_arg_links = NULL;

  switch(which_dslash_op) 
    {
    case QPB_DSLASH_BRILLOUIN:
      diagonal_links = qpb_diagonal_links_init();
      qpb_diagonal_links_get(diagonal_links, gauge);
      solver_arg_links = &diagonal_links;
      break;
    case QPB_DSLASH_STANDARD:
      solver_arg_links = &gauge;
      break;
    }

  qpb_double t = qpb_stop_watch(0);
  switch(solver)
    {
    case BICGSTAB:
      qpb_bicgstab_init();
      break;
    case CG:
      qpb_congrad_init();
      break;
    case BICGGAMMA5:
      qpb_bicgg5_init();
      break;
    case MSCG:
      qpb_mscongrad_init(numb_shifts);
      break;
    }

  for(int i=0; i<n_spinors; i++)
    {
      switch(solver)
	{
	case BICGSTAB:
	  iters = qpb_bicgstab(sol[i], source[i], solver_arg_links, clover_term,
			       kappa, c_sw, epsilon, max_iters);
	  break;
	case CG:
	  iters = qpb_congrad(sol[i], source[i], solver_arg_links, clover_term,
			      kappa, c_sw, epsilon, max_iters);
	  break;
	case BICGGAMMA5:
	  iters = qpb_bicgg5(sol[i], source[i], solver_arg_links, clover_term,
			     kappa, c_sw, epsilon, max_iters);
	  break;
	case MSCG:
	  iters = qpb_mscongrad(sol+i*numb_shifts, source[i], solver_arg_links, clover_term,
				kappa, numb_shifts, ms_shifts, c_sw, epsilon, max_iters);
	  break;
	}
      print(" Done column = %d / %d\n", i+1, n_spinors);
    }

  switch(solver)             
    {                        
    case BICGSTAB:           
      qpb_bicgstab_finalize();
      t = qpb_stop_watch(t);
      print(" BiCGStab done, %d columns in t = %f sec\n", n_spinors, t);
      break;
    case CG:
      qpb_congrad_finalize();
      t = qpb_stop_watch(t);
      print(" CG done, %d columns in t = %f sec\n", n_spinors, t);
      break;
    case BICGGAMMA5:
      qpb_bicgg5_finalize();
      t = qpb_stop_watch(t);
      print(" BiCGγ5 done, %d columns in t = %f sec\n", n_spinors, t);
      break;
    case MSCG:
      qpb_mscongrad_finalize(numb_shifts);
      t = qpb_stop_watch(t);
      print(" msCG done, %d columns in t = %f sec\n", n_spinors, t);
      break;
    }

  if(which_dslash_op == QPB_DSLASH_BRILLOUIN)
    qpb_diagonal_links_finalize(diagonal_links);
  
  for(int j=0; j<numb_shifts; j++)
    {
      qpb_spinor_field *aux = qpb_alloc(sizeof(qpb_spinor_field)*n_spinors);
      for(int i=0; i<n_spinors; i++)
	aux[i] = sol[j+i*numb_shifts];

      qpb_write_n_spinor(aux, n_spinors, sol_file);

      free(aux);
    }
  /* clean up */
  for(int i=0; i<n_spinors; i++)
    {
      for(int j=0; j<numb_shifts; j++)
	qpb_spinor_field_finalize(sol[j+i*numb_shifts]);

      qpb_spinor_field_finalize(source[i]);
    }
  free(sol);
  free(source);
  qpb_gauge_field_finalize(gauge);
  qpb_clover_term_finalize(clover_term);
  qpb_rng_finalize();
  qpb_finalize();
  return 0;
}
