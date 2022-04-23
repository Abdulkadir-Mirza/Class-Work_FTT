#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void sig_hand(int signo)
{
printf("Inside Handler Function\n");
}

int main()
{
pid_t pid;
signal(SIGUSR1,sig_hand);
printf("Inside main function\n");
pid=getpid();
kill(pid,SIGUSR1);
printf("Inside main function\n");
return 0;

}
