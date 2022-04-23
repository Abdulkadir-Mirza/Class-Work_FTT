#include<stdio.h>
#include<unistd.h>

int main(){
//printf("Statement 1\n");

int pid_1 = fork();
	if(pid_1==0)
	{
	printf("Child Process id=%d\n",getpid());
	execl("/bin/ls","ls","-lh",NULL);
	exit(0);
	}
		else
	{
	printf("Process id=%d\n",getpid());
	exit(0);
	}
return 0;
}
