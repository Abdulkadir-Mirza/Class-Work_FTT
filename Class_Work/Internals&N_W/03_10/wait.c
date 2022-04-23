#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){

	int pid_1,pid2;
	pid_1=fork();
	if(pid_1==0){
		sleep(5);
		printf("Child Process 1 fork=%d pid=%d ppid=%d\n",pid_1,getpid(),getppid());
		printf("I am a child with delay of 5 sec\n");
		}
	else{
		printf("Parent process pid=%d ppid=%d\n",getpid(),getppid());
		pid2=wait(0);	
		printf("Parent saying child terminated normally with %d\n",pid2);
		printf("I am a parent process\n");
	}

	return 0;
}
