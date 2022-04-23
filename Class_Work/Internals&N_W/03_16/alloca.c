#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char *str1 = "linux";
	char *str2 = "kernel";

	char *name = (char *)alloca(strlen(str1)+strlen(str2)+1);
/*  	The alloca() function returns a pointer to the beginning of the
       	allocated space.  If the allocation causes stack overflow,
       	program behavior is undefined.*/
	
	stpcpy(stpcpy(name,str1),str2);
/*
	The stpcpy() function copies the string pointed to by src
       	(including the terminating null byte ('\0')) to the array pointed
       	to by dest.  The strings may not overlap, and the destination
       	string dest must be large enough to receive the copy.
*/

	printf("Copied string data is = %s\n",name);
	return 0;
}
