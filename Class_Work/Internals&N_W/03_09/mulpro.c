#include<stdio.h>
#include<unistd.h>

int main(){

	int pid_1,pid_2,pid_3;
	pid_1=fork();
	pid_2=fork();
	if(pid_1==0 | pid_2==0){
		printf("Child Process 1 fork=%d pid=%d ppid=%d\n",pid_1,getpid(),getppid());
		printf("Child Process 2 fork=%d pid=%d ppid=%d\n",pid_2,getpid(),getppid());
	}
	else{
	printf("Parent process pid=%d ppid=%d\n",getpid(),getppid());
	}
	while(1);
	return 0;
}
