/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "print_hex.h"

void *
hex_1_svc(input *argp, struct svc_req *rqstp)
{
	static char * result;
	int i=0;
	for (; i<256; ++i)
	{
		printf("%c", argp->data[i]);
	}
    printf("\n");

	return (void *) &result;
}
