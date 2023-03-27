#ifndef _STRMANIP_
#define _STRMANIP_

#include <stdio.h>
#include <string.h>


int toupper(int c){

    if(c >= 'a'&& c<='z')
	c+= 'A'-'a';
    return c;

}

int tolower(int z){

    if(z>= 'A' && z<='Z')
	z+= 'a'-'A';
    return z;

}

int islower(int a){

    if(a >= 'A' || a >='a' && a <= 'Z' || a<= 'z')
	a+='A'-'a';
    return a;

}

int isUpper(int b){

    if( b >= 'A' || b>= 'a' && b<= 'Z' || b<='z')
	b+= 'a'-'A';
    return b;
}

#endif