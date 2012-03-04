#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include <string.h>
#include <strings.h>

#include <lime.h>
#include <libxml/xpath.h>
#include <libxml/xpathInternals.h>

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_byte_order.h>
#include <qpb_parser.h>
#include <qpb_alloc.h>
#include <qpb_errors.h>
#include <qpb_read_gauge.h>

unsigned char *xpath_get(xmlXPathContextPtr , unsigned char *);

unsigned char *
xpath_get(xmlXPathContextPtr ctx, unsigned char *search_path)
{
  xmlXPathObjectPtr obj;
  obj = xmlXPathEvalExpression(search_path, ctx);
  if(obj == NULL)
    {
      fprintf(stderr, " %s: error evaluating xpath\n", search_path);
      MPI_Abort(MPI_COMM_WORLD, QPB_FILE_ERROR);
    }
  int len = (obj->nodesetval) ? obj->nodesetval->nodeNr : 0;
  if(len == 0)
    {
      fprintf(stderr, " %s: xpath has no elements\n", search_path);
      MPI_Abort(MPI_COMM_WORLD, QPB_FILE_ERROR);
    }
  return obj->nodesetval->nodeTab[0]->xmlChildrenNode->content;
}

/*
 * Wrapper for qpb_read_gauge, which determines offset and precision
 * from ildg header  
 */
void
qpb_read_ildg_gauge(qpb_gauge_field gauge_field, char fname[])
{

  uint64_t binary_data_offset = 0;
  size_t precision = 0;
  if(am_master)
    {
      FILE *fp = fopen(fname, "r");
      if(fp == NULL)
	{
	  fprintf(stderr, " %s: error opening file for reading\n", fname);
	  MPI_Abort(MPI_COMM_WORLD, QPB_FILE_ERROR);
	}
      
      LimeReader *reader = limeCreateReader(fp);
      if(reader == NULL)
	{
	  fprintf(stderr, " %s: error creating lime reader\n", fname);
	  MPI_Abort(MPI_COMM_WORLD, QPB_FILE_ERROR);
	}

      int rec = 0; /* keep track of current record */
      int msg = 1;  /* keep track of current message */
      int status;
      int ildg_format_rec = 0; /* which record holds "ildg-format" */
      char *ildg_format = NULL; /* string buffer for ildg-format data */
      size_t ildg_format_len = 0;
      while((status = limeReaderNextRecord(reader)) != LIME_EOF)
	{
	  msg++;
	  if(status != LIME_SUCCESS)
	    {
	      fprintf(stderr, " lime failed to get next record\n");
	      MPI_Abort(MPI_COMM_WORLD, QPB_FILE_ERROR);
	    }
	  
	  uint64_t nbytes = limeReaderBytes(reader);
	  char *lime_type = limeReaderType(reader);
	  int MB_flag = limeReaderMBFlag(reader);
	  
	  if(MB_flag == 1)
	    {
	      rec++;
	      msg = 1;
	    }

	  if(strncmp(lime_type, "ildg-format", strlen("ildg-format")) == 0)
	    {
	      ildg_format_rec = rec;
	      
	      if(ildg_format != NULL)
		free(ildg_format);
	      
	      ildg_format = malloc((size_t)nbytes+1);
	      uint64_t bytes_read = nbytes;
	      status = limeReaderReadData((void *)ildg_format, &bytes_read, reader);
	      if(status != LIME_SUCCESS)
		{
		  fprintf(stderr, " error reading ildg-format data\n");
		  MPI_Abort(MPI_COMM_WORLD, QPB_FILE_ERROR);
		}
	      ildg_format_len = bytes_read+1;
	    }
      
	  if(strncmp(lime_type, "ildg-binary-data", strlen("ildg-binary-data")) == 0)
	    {
	      if(ildg_format_rec != rec)
		{
		  fprintf(stderr, " found \"ildg-binary-data\" with no matching \"ildg-format\", quiting\n");
		  MPI_Abort(MPI_COMM_WORLD, QPB_FILE_ERROR);
		}
	      uint64_t one_byte = 1;
	      char dummy;
	      limeReaderReadData((void *)&dummy, &one_byte, reader);
	      binary_data_offset = ftell(fp)-1;
	    }
	}
      
      /* process ildg-format data */
      xmlDocPtr doc;
      ildg_format[ildg_format_len-1] = '\0';
      doc = xmlReadMemory(ildg_format, ildg_format_len, "ildg.xml", NULL, 0);
      if(doc == NULL) 
	{
	  fprintf(stderr, " failed read ildg-format data\n");
	  MPI_Abort(MPI_COMM_WORLD, QPB_FILE_ERROR);
	}
      
      xmlXPathContextPtr xpathCtx; 
      xpathCtx = xmlXPathNewContext(doc);
      if(xpathCtx == NULL)
	{
	  fprintf(stderr, " failed to create XPath context from xml-doc\n");
	  MPI_Abort(MPI_COMM_WORLD, QPB_FILE_ERROR);
	}

      /* newer ildg files use the namespase xmlns="http://www.lqcd.org/ildg";
	 older files define no namespace;
	 the local-name()= construct allows matching to any namespace */      
      precision = atoi((char *)xpath_get(xpathCtx, (unsigned char *)"/*[local-name()='ildgFormat']/*[local-name()='precision']"));
      int ildg_file_dims[ND];
      ildg_file_dims[3] = atoi((char *)xpath_get(xpathCtx, (unsigned char *)"/*[local-name()='ildgFormat']/*[local-name()='lx']"));
      ildg_file_dims[2] = atoi((char *)xpath_get(xpathCtx, (unsigned char *)"/*[local-name()='ildgFormat']/*[local-name()='ly']"));
      ildg_file_dims[1] = atoi((char *)xpath_get(xpathCtx, (unsigned char *)"/*[local-name()='ildgFormat']/*[local-name()='lz']"));
      ildg_file_dims[0] = atoi((char *)xpath_get(xpathCtx, (unsigned char *)"/*[local-name()='ildgFormat']/*[local-name()='lt']"));
      
      int bool = 1;
      for(int i=0; i<ND; i++)
	bool = (bool && problem_params.g_dim[i] == ildg_file_dims[i]);

      if(!bool)
	{
	  fprintf(stderr, " %s: ildg file has wrong dimensions\n", fname);
	  MPI_Abort(MPI_COMM_WORLD, QPB_FILE_ERROR);
	}

      unsigned char *field = xpath_get(xpathCtx, (unsigned char *)"/*[local-name()='ildgFormat']/*[local-name()='field']");
      trim((char *)field, strlen((char *)field));
      if(strncmp((char *)field, "su3gauge", strlen("su3gauge")) != 0)
	{
	  fprintf(stderr, " %s: ildg file is not of \"su3gauge\" type\n", fname);
	  MPI_Abort(MPI_COMM_WORLD, QPB_FILE_ERROR);
	}

      xmlXPathFreeContext(xpathCtx); 
      xmlFreeDoc(doc);      
      if(ildg_format != NULL)
	free(ildg_format);
           
      limeDestroyReader(reader);
      fclose(fp);
    }

  /* root now broadcasts info parsed from ildg-format data */
  MPI_Bcast(&precision, 1, MPI_UNSIGNED_LONG, QPB_MASTER_PROC, MPI_COMM_WORLD);
  MPI_Bcast(&binary_data_offset, 1, MPI_UNSIGNED_LONG_LONG, QPB_MASTER_PROC, MPI_COMM_WORLD);

  /* call binary data reader */
  qpb_read_gauge(gauge_field, (size_t)binary_data_offset, (size_t)precision, fname);
  return;
}
