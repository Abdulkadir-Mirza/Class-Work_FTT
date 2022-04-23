#include<sys/types.h>
#include<signal.h>
#include<stdio.h>

int main(){
int pid;
printf("Enter the pid of the process for which the signal need to be sent:");
scanf("%d",&pid);
printf("Enter the signal you want to send:");
int sig_no;
scanf("%d",&sig_no);
kill(pid,sig_no);
perror("sig_res:");
return 0;
}
