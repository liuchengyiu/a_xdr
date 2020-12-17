#ifndef EC_XDR_INTERFACE_H
#define EC_XDR_INTERFACE_H
#include "stdio.h"
#include "stdlib.h"
#ifdef __cplusplus
extern "C" { 
#endif
    char* ec_xdr_decode(unsigned char* payload, int length, int prm);
    unsigned char * ec_xdr_encode(char* payload, int* len, char* tag, int tag_len);
#ifdef __cplusplus
};
#endif
#endif