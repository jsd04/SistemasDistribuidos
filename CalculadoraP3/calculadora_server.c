/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"
#include <stdio.h>
#include <stdlib.h>

int *
suma_1_svc(struct datos *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	printf("Se ingresaron : %d %d \t - ", argp->a, argp->b);
	result = argp->a + argp->b;
	printf("El resultado es: %d\n", result);

	return &result;
}

int *
resta_2_svc(struct datos *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	printf("Se ingresaron: %d %d \t - ", argp->a, argp->b);
	result = argp->a - argp->b;
	printf("El resultado es: %d\n", result);

	return &result;
}

int *
multiplicacion_3_svc(struct datos *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	printf("Se ingresaron: %d %d \t - ", argp->a, argp->b);
	result = argp->a * argp->b;
	printf("El resultado es: %d\n", result);

	return &result;
}

int *
division_4_svc(struct datos *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	printf("Se ingresaron: %d %d \t - ", argp->a, argp->b);
	result = argp->a / argp->b;
	printf("El resultado es: %d\n", result);
	return &result;
}
