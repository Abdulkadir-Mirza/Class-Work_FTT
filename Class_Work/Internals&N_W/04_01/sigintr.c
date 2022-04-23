#include<stdio.h>
#include<signal.h>

void sighand(int signum){
printf("Interrupt Signal Recorded but no termination on Ctrl+C\n");
signal(SIGINT,SIG_DFL);
}

int main(){
	int i;
	signal(SIGINT,sighand);
	
	for(i=0;;i++)
	{
		printf("%d\n",i);
		sleep(1);
	}
	


}
