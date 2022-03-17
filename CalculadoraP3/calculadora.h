/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALCULADORA_H_RPCGEN
#define _CALCULADORA_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct datos {
	int a;
	int b;
};
typedef struct datos datos;

#define CALCULADORA 0x20000003
#define UNO 1

#if defined(__STDC__) || defined(__cplusplus)
#define suma 1
extern  int * suma_1(struct datos *, CLIENT *);
extern  int * suma_1_svc(struct datos *, struct svc_req *);
extern int calculadora_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define suma 1
extern  int * suma_1();
extern  int * suma_1_svc();
extern int calculadora_1_freeresult ();
#endif /* K&R C */
#define DOS 2

#if defined(__STDC__) || defined(__cplusplus)
#define resta 2
extern  int * resta_2(struct datos *, CLIENT *);
extern  int * resta_2_svc(struct datos *, struct svc_req *);
extern int calculadora_2_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define resta 2
extern  int * resta_2();
extern  int * resta_2_svc();
extern int calculadora_2_freeresult ();
#endif /* K&R C */
#define TRES 3

#if defined(__STDC__) || defined(__cplusplus)
#define multiplicacion 3
extern  int * multiplicacion_3(struct datos *, CLIENT *);
extern  int * multiplicacion_3_svc(struct datos *, struct svc_req *);
extern int calculadora_3_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define multiplicacion 3
extern  int * multiplicacion_3();
extern  int * multiplicacion_3_svc();
extern int calculadora_3_freeresult ();
#endif /* K&R C */
#define CUATRO 4

#if defined(__STDC__) || defined(__cplusplus)
#define division 4
extern  int * division_4(struct datos *, CLIENT *);
extern  int * division_4_svc(struct datos *, struct svc_req *);
extern int calculadora_4_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define division 4
extern  int * division_4();
extern  int * division_4_svc();
extern int calculadora_4_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_datos (XDR *, datos*);

#else /* K&R C */
extern bool_t xdr_datos ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALCULADORA_H_RPCGEN */
