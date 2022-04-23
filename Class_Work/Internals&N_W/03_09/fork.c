#include<stdio.h>
#include<unistd.h>

int main(){
printf("Statement 1\n");

int pid_1 = fork();
//fork();
if(pid_1==0)
{
printf("Child Process id=%d\n",getpid());
}
else
{
sleep(3);
printf("Process id=%d\n",getpid());
}
//while(1);
return 0;
}
