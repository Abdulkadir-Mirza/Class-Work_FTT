#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>

static void* threadfunc(void *arg){

printf("Hello Wrld\n");
while(1);
return 0;
}

int main(int argc,char *argv[]){

pthread_t t1;
int t;

pthread_create(&t1,NULL,threadfunc,NULL);
sleep(3);
t=pthread_cancel(t1);
if(t==0)
	printf("Thread Cancelled\n");
printf("Thread ID: %lu\n Status :%d",t1,t);

//printf("Thread ID: %lu\n Cancelled status: %d",t1,pthread_cancel(t1));
return 0;
}
