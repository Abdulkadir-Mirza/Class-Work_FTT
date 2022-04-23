#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>

static void* threadfunc(void *arg){

pid_t pid;
pthread_t tid;
pid=getpid();
tid=pthread_self();
printf("Pid %u , tid %u \n",(unsigned int)pid,(unsigned int)tid);
return 0;
}

int main(int argc,char *argv[]){

pthread_t t1;
void *res;
int s;

s= pthread_create(&t1,NULL,threadfunc,NULL);
if(s!=0){
printf("Thread not created, Error %d\n",s);
return 0;
}

printf("Message from main\n");
//sleep(3);
//pthread_join(t1,NULL);
while(1);
return 0;
}
