/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PRINT_HEX_H_RPCGEN
#define _PRINT_HEX_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct input {
	char data[256];
};
typedef struct input input;

#define HEX_P 0x21000000
#define HEX_V 1

#if defined(__STDC__) || defined(__cplusplus)
#define hex 1
extern  void * hex_1(input *, CLIENT *);
extern  void * hex_1_svc(input *, struct svc_req *);
extern int hex_p_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define hex 1
extern  void * hex_1();
extern  void * hex_1_svc();
extern int hex_p_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_input (XDR *, input*);

#else /* K&R C */
extern bool_t xdr_input ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PRINT_HEX_H_RPCGEN */
