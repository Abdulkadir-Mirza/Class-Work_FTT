#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>

void* threadfunc2(void *arg);
void* threadfunc(void *arg){
pthread_t t1;
pid_t pid;
pthread_t tid;
pid=getpid();
tid=pthread_self();
printf("Thread 1 : Pid %u , tid %u \n",(unsigned int)pid,(unsigned int)tid);
pthread_create(&t1,NULL,threadfunc2,NULL);
printf("Message from thread before exit\n");
pthread_exit(NULL);
printf("Message from thread after exit\n");
return 0;
}

void* threadfunc2(void *arg){

printf("Message from thread 2\n");

return 0;
}

int main(int argc,char *argv[]){

pthread_t t1;
void *res;
int s;

s= pthread_create(&t1,NULL,threadfunc,NULL);


printf("Message from main before exit\n");

pthread_exit(NULL);
printf("Message from main after exit\n");
return 0;
}
