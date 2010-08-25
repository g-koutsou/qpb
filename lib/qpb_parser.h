#ifndef _QPB_PARSER_H
#define _QPB_PARSER_H 1

char *trim(char *, int);
char *qpb_parse(char *);
void qpb_init_parser(char *);
void qpb_finalize_parser();

#endif /* _QPB_PARSER_H */
