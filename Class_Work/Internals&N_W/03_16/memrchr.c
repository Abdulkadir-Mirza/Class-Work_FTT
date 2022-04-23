#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	const char str[]="linuxkernel.com";
	const char ch='.';
	int ret;
	printf("String before set/Initialization is %s \n",str);
	ret = memrchr(str,ch,13);//Scanning the givern addr for ch and return pointer to where it is found
	printf("String after the **%d**  is - **%d**\n",ch,ret+1);
	return 0;
}
