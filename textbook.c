//trynna find the negative buffer limit so watch for updates
#include <stdio.h>

int main(){

  int x = -1654864;
  int y = -4156456;
  int z = x + y;

  int mod = z/2^64;

    printf("This is z %d", mod);


}

