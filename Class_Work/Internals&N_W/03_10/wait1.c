#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){

	//fork();
	printf("%d\n",wait(NULL));
	return 0;
}
