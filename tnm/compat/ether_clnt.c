/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <rpc/rpc.h>
#if !defined(__WIN32__) && !defined(_WIN32)
#include <sys/time.h>
#endif

/* Some machines have incompatible definitions for h_addr. This */
#undef h_addr
#include "ether.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

etherstat *
etherproc_getdata_1(void *argp, CLIENT *clnt)
{
	static etherstat res;

#ifdef __WIN32__
#define bzero(a,b) memset(a,0,b) 
#endif
	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, ETHERPROC_GETDATA, xdr_void, argp, xdr_etherstat, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

void *
etherproc_on_1(void *argp, CLIENT *clnt)
{
	static char res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, ETHERPROC_ON, xdr_void, argp, xdr_void, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&res);
}

void *
etherproc_off_1(void *argp, CLIENT *clnt)
{
	static char res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, ETHERPROC_OFF, xdr_void, argp, xdr_void, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&res);
}

etheraddrs *
etherproc_getsrcdata_1(void *argp, CLIENT *clnt)
{
	static etheraddrs res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, ETHERPROC_GETSRCDATA, xdr_void, argp, xdr_etheraddrs, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

etheraddrs *
etherproc_getdstdata_1(void *argp, CLIENT *clnt)
{
	static etheraddrs res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, ETHERPROC_GETDSTDATA, xdr_void, argp, xdr_etheraddrs, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

void *
etherproc_selectsrc_1(addrmask *argp, CLIENT *clnt)
{
	static char res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, ETHERPROC_SELECTSRC, xdr_addrmask, argp, xdr_void, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&res);
}

void *
etherproc_selectdst_1(addrmask *argp, CLIENT *clnt)
{
	static char res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, ETHERPROC_SELECTDST, xdr_addrmask, argp, xdr_void, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&res);
}

void *
etherproc_selectproto_1(addrmask *argp, CLIENT *clnt)
{
	static char res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, ETHERPROC_SELECTPROTO, xdr_addrmask, argp, xdr_void, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&res);
}

void *
etherproc_selectlnth_1(addrmask *argp, CLIENT *clnt)
{
	static char res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, ETHERPROC_SELECTLNTH, xdr_addrmask, argp, xdr_void, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&res);
}

