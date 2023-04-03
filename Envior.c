//This sum else I got out the book. Im doin this to go over my C basics
//But I think its suppsoed to set and enviorment
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <paths.h>

extern char **environ; //Point at this vari

/*Both array are NULL-Terminated*/
//that static makes it Null
static char *spc_restricted_environ[]={//Yea this is an array

    "IFS= \t\n",//this is for unique char in this program
    "PATH=" _PATH_STDPATH,//this set path to standard paths
    0

};

static char *spc_preserve_environ[]={

    "TZ",//this is for time zone
    0

};//these are the two arrays

void spc_sanitize_(int preservec, char **preserveenv){//this is now an obj
//preservec is an int, preserveenv take is a pointer and takes strings
//It might convers prec input into its output



}

