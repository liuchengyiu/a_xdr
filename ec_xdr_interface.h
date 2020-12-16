#include "stdio.h"
#include "stdlib.h"
char* ec_xdr_decode(unsigned char* payload, int length, int prm);
unsigned char * ec_xdr_encode(char* payload, int* len, char* tag);