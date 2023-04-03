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
    int i;
    char **new_environ, *ptr, *value, *var;
    size_t arr_size = 1, arr_ptr = 0, len, new_size = 0;//some of these are just vars
       //      now spc_restrict is var also the array is set to i, and i++ means it increaments
    for(i=0; (var = spc_restricted_environ[i]) !=0; i++){

	new_size += strlen(var) + 1//remeber spc_restrict is a string so that means var is a str
	arr_size++

}
//		I do need to clarify with the if state it only kick in when i doesnt equal zero or when the user make an input
    for(i=0; (var = spc_restricted_environ[i]) !=0; i++){//this is the same as the last

	if(!(value = getenv(var))) continue;
	new_size += strlen(var) + strlen(var) + 2;//this will include the '=' we gone find out
	arr_size++;

}

}

new_size += (arr_size * sizeof(char*));new size will now be the size of the array.
