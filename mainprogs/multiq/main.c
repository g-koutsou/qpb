#include <qpb.h>

enum {
  CONF_ILDG,
  CONF_RAW_32,
  CONF_RAW_64,
} conf_format;

enum {
  SINK_NOT_SMEARED,
  SINK_SMEARED
} sink_smearing;

#define MAX_SRC_DISPL 128
#define MAX_SNK_DISPL 128

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

  char aux_string[QPB_MAX_STRING];
  int max_q2;
  if(sscanf(qpb_parse("Max momentum squared"), "%d", &max_q2)!=1)
    {
      error("error parsing for %s\n",
	    "Max momentum squared");
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

  if(n_quarks > 2)
    {
      error("Only 1 or 2 quark inputs currently supported\n");
      exit(QPB_NOT_IMPLEMENTED_ERROR);
    }

  char prop_file_0[QPB_MAX_STRING]; 
  char prop_file_d[MAX_SRC_DISPL][QPB_MAX_STRING];
  int n_snk_displ = 0;
  int n_src_displ = 0;
  int displ_snk[MAX_SNK_DISPL][ND];
  if(sscanf(qpb_parse("Prop file (0)"), "%s",
		prop_file_0)!=1)
    {
      error("error parsing for %s\n", 
	    "Prop file (0)");
      exit(QPB_PARSER_ERROR);
    }

  if(n_quarks == 2)
    {
      if(sscanf(qpb_parse("Numb. of source-displaced props."), "%d",
		&n_src_displ)!=1)
	{
	  error("error parsing for %s\n", 
		"Numb. of source-displaced props.");
	  exit(QPB_PARSER_ERROR);
	}
      for(int isrc=0; isrc<n_src_displ; isrc++)
	{
	  sprintf(aux_string, "Prop file (displaced) %d", isrc);
	  if(sscanf(qpb_parse(aux_string), "%s", prop_file_d[isrc])!=1)
	    {
	      error("error parsing for %s\n", 
		    aux_string);
	      exit(QPB_PARSER_ERROR);
	    }
	}
      if(sscanf(qpb_parse("Numb. of sink displacements"), "%d",
		&n_snk_displ)!=1)
	{
	  error("error parsing for %s\n", 
		"Numb. of sink displacements");
	  exit(QPB_PARSER_ERROR);
	}
      for(int d=0; d<n_src_displ; d++)
	{
	  sprintf(aux_string, "Sink displacement %d", d);
	  if(sscanf(qpb_parse(aux_string), "%d %d %d %d",
		    displ_snk[d], displ_snk[d]+1, displ_snk[d]+2, displ_snk[d]+3)!=ND)
	    {
	      error("error parsing for %s\n", 
		    aux_string);
	      exit(QPB_PARSER_ERROR);
	    }
      
	  if((displ_snk[d][0] > g_dim[0]/2-1) || (displ_snk[d][0] < -g_dim[0]/2) ||
	     (displ_snk[d][1] > g_dim[1]/2-1) || (displ_snk[d][1] < -g_dim[1]/2) ||
	     (displ_snk[d][2] > g_dim[2]/2-1) || (displ_snk[d][2] < -g_dim[2]/2) ||
	     (displ_snk[d][3] > g_dim[3]/2-1) || (displ_snk[d][3] < -g_dim[3]/2))
	    {
	      error("displacement(s) go beyond +/- half-lattice length(s), quiting\n");
	      exit(QPB_PARAMETERS_ERROR);
	    }
      
	}
    }
  char corr_file[MAX_SNK_DISPL][MAX_SRC_DISPL][QPB_MAX_STRING];
  if(n_quarks == 1)
    {
      if(sscanf(qpb_parse("Output file"), "%s", corr_file[0][0])!=1)
	{
	  error("error parsing for %s\n",
		"Output file");
	  exit(QPB_PARSER_ERROR);
	}
    }
  else
    {
      for(int isrc=0; isrc<n_src_displ; isrc++)
	for(int d=0; d<n_snk_displ; d++)
	  {
	    sprintf(aux_string, "Output file %d,%d", d,isrc);
	    if(sscanf(qpb_parse(aux_string), "%s", corr_file[d][isrc])!=1)
	      {
		error("error parsing for %s\n", 
		      aux_string);
		exit(QPB_PARSER_ERROR);
	      }
	  }
    }

  if(sscanf(qpb_parse("Sink smearing"), "%s", aux_string)!=1)
    {
      error("error parsing for %s\n", 
	    "Sink smearing");
      exit(QPB_PARSER_ERROR);
    }

  if(strcmp(aux_string, "yes") == 0)
    sink_smearing = SINK_SMEARED;
  else if(strcmp(aux_string, "no") == 0)
    sink_smearing = SINK_NOT_SMEARED;
  else
    {
      error("%s: option should be one of: ", "Sink smearing");
      error("%s, ", "yes"); 
      error("%s\n", "no"); 
      exit(QPB_PARSER_ERROR);
    };

  enum qpb_field_init_opts conf_opt = 0;
  char conf_file[QPB_MAX_STRING];
  int shifts[ND];
  unsigned int seed;
  int n_gauss, n_ape_gauss;
  qpb_double delta_gauss, alpha_ape_gauss;
  if(sink_smearing == SINK_SMEARED)
    {
      if(sscanf(qpb_parse("Conf"), "%s", aux_string)!=1)
	{
	  error("error parsing for %s\n", 
		"Conf");
	  exit(QPB_PARSER_ERROR);
	}

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
      
      if(sscanf(qpb_parse("Random seed"), "%u", &seed)!=1)
	{
	  error("error parsing for %s\n", 
		"Random seed");
	  exit(QPB_PARSER_ERROR);
	}  

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
  print(" N quarks = %d\n", n_quarks);
  print(" Max momentum squared = %d\n", max_q2);
#ifdef QPB_FT_FFTW
  print(" Compiled with FFTW\n");
#endif
  print(" Prop file (0) = %s\n", prop_file_0);
  if(n_quarks == 2)
    {
      print(" Numb. of sink displacements = %d\n", n_snk_displ);
      for(int isrc=0; isrc<n_src_displ; isrc++) 
	print(" Prop file (displaced) %d = %s\n", isrc, prop_file_d[isrc]);
      for(int d=0; d<n_snk_displ; d++)
	print(" Displacement %d = %+d %+d %+d %+d\n", d, displ_snk[d][0], displ_snk[d][1], displ_snk[d][2], displ_snk[d][3]);
    }

  if(sink_smearing == SINK_SMEARED)
    {
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
      print(" Conf shifts = %d %d %d %d\n", shifts[0], shifts[1], shifts[2], shifts[3]);
      print(" Gaussian smearing = (%f, %d)\n", delta_gauss, n_gauss);
      print(" Gaussian sink APE smearing = (%f, %d)\n", alpha_ape_gauss, n_ape_gauss);
    }

  if(n_quarks == 1)
    {
      print(" Output file = %s\n", corr_file[0][0]);
    }
  else
    {
      for(int d=0; d<n_snk_displ; d++)
	for(int isrc=0; isrc<n_src_displ; isrc++)
	  print(" Output file %d,%d = %s\n", d, isrc, corr_file[d][isrc]);
    }

  /* Allocate propagator structs (as 12 spinor structs) */
  qpb_spinor_field *prop_00 = NULL;
  qpb_spinor_field *prop_0d = NULL;;
  qpb_spinor_field *prop_D0[MAX_SNK_DISPL];
  qpb_spinor_field *prop_Dd[MAX_SNK_DISPL];
  for(int d=0; d<n_snk_displ; d++)
    {
      prop_D0[d] = NULL;
      prop_Dd[d] = NULL;
    }
  int n_vec = 12;
  prop_00 = qpb_alloc(sizeof(qpb_spinor_field)*n_vec);  
  if(n_quarks == 2)
    {
      prop_0d = qpb_alloc(sizeof(qpb_spinor_field)*n_vec);
      for(int d=0; d<n_snk_displ; d++)
	{
	  prop_D0[d] = qpb_alloc(sizeof(qpb_spinor_field)*n_vec);
	  prop_Dd[d] = qpb_alloc(sizeof(qpb_spinor_field)*n_vec);
	}
    }

  for(int i=0; i<n_vec; i++)
    {
      prop_00[i] = qpb_spinor_field_init();
      if(n_quarks == 2)
	{
	  prop_0d[i] = qpb_spinor_field_init();
	  for(int d=0; d<n_snk_displ; d++)
	    {
	      prop_D0[d][i] = qpb_spinor_field_init();
	      prop_Dd[d][i] = qpb_spinor_field_init();
	    }
	}
    }
 
  qpb_gauge_field gauge;
  qpb_double plaquette;
  if(sink_smearing == SINK_SMEARED)
    {
      /* allocate gauge field */
      gauge = qpb_gauge_field_init();

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
      plaquette = qpb_plaquette(gauge);
      print(" Plaquette = %12.8f\n", plaquette);

      /* 3D-APE smear the gauge field for gaussian source */
      if(n_ape_gauss != 0)
	{
	  double t = qpb_stop_watch(0);
	  qpb_gauge_field ape3dgauge = qpb_gauge_field_init();
	  print(" 3D-APE smear gauge field...\n");
	  qpb_apesmear_3d_niter(ape3dgauge, gauge, alpha_ape_gauss, n_ape_gauss);
	  qpb_gauge_field_copy(gauge, ape3dgauge);
	  qpb_gauge_field_finalize(ape3dgauge);
	  
	  plaquette = qpb_plaquette(gauge);
	  qpb_double p3d = qpb_plaquette_3d(gauge);
	  print(" Plaquette (3D) = %10.8f (%10.8f)\n", plaquette, p3d);
	  print(" Done APE 3D in %g sec\n", qpb_stop_watch(t));
	}
      qpb_gauge_field_shift(gauge, shifts);
    }

  qpb_read_n_spinor(prop_00, n_vec, prop_file_0);
  if(sink_smearing == SINK_SMEARED)
    {
      double t = qpb_stop_watch(0);
      qpb_gauss_smear_init();
      qpb_spinor_field aux = qpb_spinor_field_init();
      print(" Smearing prop [0-0]...\n");
      for(int i=0; i<n_vec; i++)
	{
	  qpb_spinor_xeqy(aux, prop_00[i]);
	  qpb_gauss_smear_niter(prop_00[i], aux, gauge, delta_gauss, n_gauss);
	}
      qpb_spinor_field_finalize(aux);       
      qpb_gauss_smear_finalize();
      print(" Done gaussian smearing in %g sec\n", qpb_stop_watch(t));
    }
  if(n_quarks == 1) {
    print(" Two-point contractions...\n");
    double t = qpb_stop_watch(0);
    qpb_multiq_2pt(prop_00, max_q2, corr_file[0][0]);
    print(" Done correlators in %g sec\n", qpb_stop_watch(t));
  }
  /* if n_quarks == 1 ==> isrc == 0, so no loop */
  for(int isrc=0; isrc<n_src_displ; isrc++)
    {
      qpb_read_n_spinor(prop_0d, n_vec, prop_file_d[isrc]);
      if(sink_smearing == SINK_SMEARED)
	{
	  double t = qpb_stop_watch(0);
	  qpb_gauss_smear_init();
	  qpb_spinor_field aux = qpb_spinor_field_init();
	  print(" Smearing prop [0-d]...\n");
	  for(int i=0; i<n_vec; i++)
	    {
	      qpb_spinor_xeqy(aux, prop_0d[i]);
	      qpb_gauss_smear_niter(prop_0d[i], aux, gauge, delta_gauss, n_gauss);
	    }
	  qpb_spinor_field_finalize(aux);       
	  qpb_gauss_smear_finalize();
	  print(" Done gaussian smearing in %g sec\n", qpb_stop_watch(t));
	}
      for(int d=0; d<n_snk_displ; d++)
	for(int i=0; i<n_vec; i++)
	  {
	    qpb_spinor_field_copy(prop_Dd[d][i], prop_0d[i]);
	    qpb_spinor_field_copy(prop_D0[d][i], prop_00[i]);
	  }

      print(" Two-point contractions for source: %s\n", prop_file_d[isrc]);
      double t = qpb_stop_watch(0);
      for(int d=0; d<n_snk_displ; d++)
	{
	  for(int i=0; i<n_vec; i++)
	    {
	      qpb_spinor_field_shift(prop_Dd[d][i], displ_snk[d]);
	      qpb_spinor_field_shift(prop_D0[d][i], displ_snk[d]);
	    }
	  
	  qpb_spinor_field *prop[2][2] = {{prop_00, prop_0d},
					  {prop_D0[d], prop_Dd[d]}};
	  qpb_multiq_displ_2pt(prop, max_q2, corr_file[d][isrc]);
	  print(" Done displacement %d: %+d %+d %+d %+d\n", d, 
		displ_snk[d][0], displ_snk[d][1], displ_snk[d][2], displ_snk[d][3]);
	}
      print(" Done correlators in %g sec\n", qpb_stop_watch(t));
    }

  if(sink_smearing == SINK_SMEARED)
    qpb_gauge_field_finalize(gauge);

  for(int i=0; i<n_vec; i++)
    {
      qpb_spinor_field_finalize(prop_00[i]);
      if(n_quarks == 2)
	{
	  qpb_spinor_field_finalize(prop_0d[i]);
	  for(int d=0; d<n_snk_displ; d++)
	    {
	      qpb_spinor_field_finalize(prop_D0[d][i]);
	      qpb_spinor_field_finalize(prop_Dd[d][i]);
	    }
	}
    }
  free(prop_00);
  if(n_quarks == 2)
    {
      free(prop_0d);
      for(int d=0; d<n_snk_displ; d++)
	{
	  free(prop_D0[d]);
	  free(prop_Dd[d]);
	}
    }
  qpb_rng_finalize();
  qpb_finalize();
  return 0;
}
