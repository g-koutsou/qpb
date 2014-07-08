#include <qpb.h>

#include <gsl/gsl_vector.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_eigen.h>
#include <gsl/gsl_sort.h>
#include <gsl/gsl_sort_vector.h>
     

void
tridiag_eigenv(double *eig, double *a, double *b, int n)
{
  gsl_matrix *A = gsl_matrix_calloc(n, n);
  gsl_matrix_set (A, 0, 0, a[0]);
  gsl_matrix_set (A, 0, 0+1, b[0]);
  for(int i=1; i<n-1; i++)
    {
      gsl_matrix_set(A, i, i, a[i]);
      gsl_matrix_set(A, i, i+1, b[i]);
      gsl_matrix_set(A, i, i-1, b[i-1]);
    }
  gsl_matrix_set(A, n-1, n-1, a[n-1]);
  gsl_matrix_set(A, n-1, n-1-1, b[n-1-1]);

  gsl_vector *e = gsl_vector_alloc(n);
  gsl_eigen_symm_workspace *w = gsl_eigen_symm_alloc(n);
  gsl_eigen_symm(A, e, w);
  gsl_eigen_symm_free(w);
  gsl_matrix_free(A);

  gsl_sort_vector(e);

  for(int i=0; i<n; i++)
    eig[i] = gsl_vector_get(e, i);
  
  gsl_vector_free(e);
  return;
}

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

  unsigned int seed;
  if(sscanf(qpb_parse("Random seed"), "%u", &seed)!=1)
    {
      error("error parsing for %s\n", 
	    "Random seed");
      exit(QPB_PARSER_ERROR);
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
  if(sscanf(qpb_parse("CN epsilon"), "%lf", &epsilon)!=1)
    {
      error("error parsing for %s\n",
	    "CN epsilon");
      exit(QPB_PARSER_ERROR);
    }
  int numb_eigv;
  if(sscanf(qpb_parse("Number of eigenvalues"), "%d", &numb_eigv)!=1)
    {
      error("error parsing for %s\n",
	    "Number of eigenvalues");
      exit(QPB_PARSER_ERROR);
    }
  int max_iters;
  if(sscanf(qpb_parse("Lanczos max iters"), "%d", &max_iters)!=1)
    {
      error("error parsing for %s\n",
	    "Lanczos max iters");
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
  print(" kappa = %g\n", kappa);
  print(" Clover param = %g\n", c_sw);
  print(" Max Lanczos iters = %d\n", max_iters);
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


  /* Clover term */
  qpb_clover_term clover_term = qpb_clover_term_init();
  qpb_clover_term_get(clover_term, gauge);

  qpb_diagonal_links diagonal_links;
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
  qpb_lanczos_init();
  
  qpb_double *a, *b, *eig;
  a = qpb_alloc(sizeof(qpb_double)*max_iters);
  b = qpb_alloc(sizeof(qpb_double)*max_iters);
  eig = qpb_alloc(sizeof(qpb_double)*max_iters);
  int step = 10;
  qpb_lanczos(a, b, solver_arg_links, clover_term, kappa, c_sw, step);
  qpb_double lambda = 0, dlambda, lambda0 = 1e3;
  int i = 0;
  for(i=step; i<max_iters; i+=step)
    {
      qpb_lanczos(&a[i], &b[i], solver_arg_links, clover_term, kappa, c_sw, -step);
      tridiag_eigenv(eig, a, b, i+step);

      lambda = eig[i+step-1] / eig[0];
      dlambda = fabs(lambda - lambda0) / fabs(lambda + lambda0);
      print(" iter = %4d, CN = %e/%e = %e (change = %e, target = %e)\n",
	    i, eig[i+step-1], eig[0], eig[i+step-1]/eig[0], dlambda, epsilon);
      if(dlambda < epsilon*0.5)
	break;
      lambda0 = lambda;
    }
  t = qpb_stop_watch(t);
  print(" Done, kappa = %g, CN = %+f, in t = %g sec\n", kappa, lambda, t);

  for(int j=0; j<numb_eigv; j++)
    print(" %3d %e %e\n", j, eig[j], eig[i+step-1-j]);

  qpb_lanczos_finalize();
  if(which_dslash_op == QPB_DSLASH_BRILLOUIN)
    qpb_diagonal_links_finalize(diagonal_links);
  
  qpb_gauge_field_finalize(gauge);
  qpb_clover_term_finalize(clover_term);
  qpb_rng_finalize();
  qpb_finalize();
  return 0;
}
