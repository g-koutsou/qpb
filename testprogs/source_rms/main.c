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

qpb_double
spinor_rms(qpb_spinor_field s, int src[])
{
  int gdim[ND], ldim[ND], coords[ND];
  for(int d=0; d<ND; d++)
    {
      gdim[d] = problem_params.g_dim[d];
      ldim[d] = problem_params.l_dim[d];
      coords[d] = problem_params.coords[d];
    }

  qpb_double loc_rms = 0., loc_norm = 0.;

  int x[ND];
  x[0] = src[0];
  for(x[1]=0; x[1]<ldim[1]; x[1]++)
    for(x[2]=0; x[2]<ldim[2]; x[2]++)
      for(x[3]=0; x[3]<ldim[3]; x[3]++)
	{
	  int gz = abs(x[1] + ldim[1]*coords[1] - src[1]);
	  int gy = abs(x[2] + ldim[2]*coords[2] - src[2]);
	  int gx = abs(x[3] + ldim[3]*coords[3] - src[3]);
	  
	  gz = (gz > gdim[1]/2) ? (gdim[1] - gz) : gz;
	  gy = (gy > gdim[2]/2) ? (gdim[2] - gy) : gy;
	  gx = (gx > gdim[3]/2) ? (gdim[3] - gx) : gx;

	  int lv = LEXICO(x, ldim);
	  int v = blk_to_ext[lv];
	  qpb_spinor sp;
	  memcpy(sp, s.index[v], sizeof(qpb_spinor));
	  qpb_double v_norm = 0;	    	  
	  for(int isp=0; isp<NC*NS; isp++)
	      {
		qpb_complex c = sp[isp];
		qpb_double n = c.re*c.re + c.im*c.im;
		v_norm += n;
	      } 
	  loc_rms += v_norm*(gx*gx + gy*gy + gz*gz);
	  loc_norm += v_norm;
	}
  qpb_double rms = 0., norm = 0.;
  MPI_Reduce(&loc_rms, &rms, 1, MPI_DOUBLE, MPI_SUM, QPB_MASTER_PROC, MPI_COMM_WORLD);
  MPI_Reduce(&loc_norm, &norm, 1, MPI_DOUBLE, MPI_SUM, QPB_MASTER_PROC, MPI_COMM_WORLD);
  MPI_Bcast(&rms, 1, MPI_DOUBLE, QPB_MASTER_PROC, MPI_COMM_WORLD);
  MPI_Bcast(&norm, 1, MPI_DOUBLE, QPB_MASTER_PROC, MPI_COMM_WORLD);
  rms /= norm;
  return rms;
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

  int source_coords[ND];
  int n_gauss, n_ape_gauss;
  qpb_double alpha_gauss, alpha_ape_gauss;
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
  
  if(sscanf(qpb_parse("Gaussian smearing APE iterations"), "%d", &n_ape_gauss)!=1)
    {
      error("error parsing for %s\n", 
	    "Gaussian smearing APE iterations");
      exit(QPB_PARSER_ERROR);	  
    }
  
  if(sscanf(qpb_parse("Gaussian smearing APE alpha"), "%lf", &alpha_ape_gauss)!=1)
    {
      error("error parsing for %s\n", 
	    "Gaussian smearing APE alpha");
      exit(QPB_PARSER_ERROR);	  
    }
  if(sscanf(qpb_parse("Point source coords"),
	    "%d %d %d %d", 
	    source_coords,
	    source_coords+1,
	    source_coords+2,
	    source_coords+3)!=4)	
    {
      error("error parsing for %s\n",
	    "Point source coords");
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
  print(" Gaussian smearing = (%f, %d)\n", alpha_gauss, n_gauss);
  print(" Gaussian source APE smearing = (%f, %d)\n", alpha_ape_gauss, n_ape_gauss);
  print(" Point source coords (t, z, y, x) = (%d, %d, %d, %d)\n",
	source_coords[0], source_coords[1], source_coords[2], source_coords[3]);
  
  print(" APE alpha = %g\n", ape_alpha);
  print(" APE iterations = %d\n", ape_niter);

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
  print(" Plaquette = %10.8f\n", plaquette);

  /* APE smear the gauge field */
  if(ape_niter != 0)
    {
      qpb_gauge_field apegauge = qpb_gauge_field_init();

      print(" APE smear gauge field...\n");
      qpb_apesmear_niter(apegauge, gauge, ape_alpha, ape_niter);
      qpb_gauge_field_copy(gauge, apegauge);
      qpb_gauge_field_finalize(apegauge);

      plaquette = qpb_plaquette(gauge);
      print(" Plaquette = %10.8f\n", plaquette);
    }

  /* Allocate source and solution spinor */
  qpb_spinor_field spinor = qpb_spinor_field_init();
  qpb_spinor_field_set_delta(spinor,
			     source_coords, 
			     0, 0);
  qpb_gauge_field gauss_gauge = qpb_gauge_field_init();
  qpb_gauge_field_copy(gauss_gauge, gauge);
  /* 3D-APE smear the gauge field for gaussian source */
  if(n_ape_gauss != 0)
    {
      qpb_gauge_field apegauge = qpb_gauge_field_init();
      print(" 3D-APE smear gauge field...\n");
      qpb_apesmear_3d_niter(apegauge, gauss_gauge, alpha_ape_gauss, n_ape_gauss);
      qpb_gauge_field_copy(gauss_gauge, apegauge);
      qpb_gauge_field_finalize(apegauge);
      
      plaquette = qpb_plaquette(gauss_gauge);
      qpb_double p3d = qpb_plaquette_3d(gauss_gauge);
      print(" Plaquette (3D) = %10.8f (%10.8f)\n", plaquette, p3d);
    }
  
  qpb_gauss_smear_init();
  qpb_spinor_field aux[2] = {qpb_spinor_field_init(),
			     qpb_spinor_field_init()};
  qpb_spinor_xeqy(aux[0], spinor);
  for(int iter=0; iter<n_gauss; iter++)
    {
      qpb_gauss_smear_niter(aux[(iter+1)%2], aux[iter%2], gauss_gauge, alpha_gauss, 1);
      qpb_double rms = spinor_rms(aux[(iter+1)%2], source_coords);
      print(" Iter = %4d, <r^2> = %e\n", iter, rms);
    }
  qpb_gauss_smear_finalize();
  qpb_gauge_field_finalize(gauss_gauge);
  qpb_spinor_field_finalize(aux[0]);
  qpb_spinor_field_finalize(aux[1]);
  qpb_spinor_field_finalize(spinor);
  qpb_gauge_field_finalize(gauge);
  qpb_finalize();
  return 0;
}
