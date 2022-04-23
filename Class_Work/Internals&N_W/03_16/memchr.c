#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	const char str[]="linuxkernel.com";
	const char ch='.';
	char *ret;
	printf("String before set/Initialization is %s \n",str);
	ret = memchr(str,ch,strlen(str));//Scanning the givern addr for ch and return pointer to where it is found
	printf("String after the **%c**  is - **%s**\n",ch,ret+1);
	return 0;
}
