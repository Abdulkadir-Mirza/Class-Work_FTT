#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char buff[5];
	strcpy(buff,"ls -l");
	printf("system() library function uses fork() to create a child process\n");
	printf("child process executes execl() whihc loads and run new program provided by the argument\n");
	int i=system(NULL);
	printf("Value of return is %d",i);

return 0;
}
