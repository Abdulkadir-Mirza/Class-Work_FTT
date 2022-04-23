#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){

	int pid1,status;
	printf("Parent process pid=%d ppid=%d\n",getpid(),getppid());
	pid1=fork();
	if(pid1==0){
		sleep(5);
		printf("Child Process 1 fork=%d pid=%d ppid=%d\n",pid1,getpid(),getppid());
		printf("I am a child with delay of 5 sec\n");
		exit(0);
		}

	printf("Parent saying child with pid terminated normally with %d\n",waitpid(pid1,&status,0));

	return 0;
}
