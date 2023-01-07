// remember to use all the vari
#include <stdio.h>
#include <string.h>

int main(){

	char name[50];//gets
	char items[50] = "Hello";
	char ai[50];
	strcpy(ai,"Walter");

	printf("%s, my name is %s. What is your name?\n ", items, ai);
	gets(name);
	printf("%s %s, it is a pleasure to meet.", items, name);
}
