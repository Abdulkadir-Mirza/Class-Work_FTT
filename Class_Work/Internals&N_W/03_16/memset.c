#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	const char str[]="linuxkernel.com";
	const char ch='#';
	printf("String before set/Initialization is %s \n",str);
	memset(str,ch,strlen(str));//Setting value of ch at address of str for given no. of bytes i.e. here we are changing the whole
	printf("String after set is %s \n",str);
	return 0;
}
