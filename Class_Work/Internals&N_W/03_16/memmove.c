#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	const char str1[]="linuxkernel.com";
	const char str2[]="abdkcbjhcohaiof";
	//const char ch='#';
	printf("String before set/Initialization is %s \n",str1);
	memmove(str2,str1,strlen(str1));//Setting value of ch at address of str for given no. of bytes i.e. here we are changing the whole
	printf("Destination String after set is %s \n",str2);
	return 0;
}
