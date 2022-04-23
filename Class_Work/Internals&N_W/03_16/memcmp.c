#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char buf1[10];
	char buf2[10];
	int ret;

	memcpy(buf1,"madam",5);
	memcpy(buf2,"med",5);
	
	ret=memcmp(buf1,buf2,5);

	if(ret>0)
		printf("Buffer 1 is greater than buffer 2 : %d\n",ret);

	else if(ret<0)
		printf("Buffer 2 is greater than buffer 1 : %d\n",ret);

	else
		printf("Buffer 1 is equal to  buffer 2 : %d\n",ret);
	return 0;
}
