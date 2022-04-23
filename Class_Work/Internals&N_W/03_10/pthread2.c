#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

pthread_t tid1,tid2;

void* thread1(void *arg){
printf("New created thread 1 is executing\n");
for(int i=0;i<10;i++)
	printf("Thread 1\n");
return NULL;
}

void* thread2(void *arg){
printf("New created thread 2 is executing\n");
for(int i=0;i<10;i++)
	printf("Thread 2\n");
return NULL;
}

int main(){

pthread_create(&tid1,NULL,thread1,NULL);
pthread_create(&tid2,NULL,thread2,NULL);
/*
if(x)
		printf("Thread 1 is not created\n");
else
		printf("Thread is created\n");
if(y)
		printf("Thread 2 is not created\n");
else
		printf("Thread is created\n");
*/	
	
getchar();
//pthread_join(tid2,NULL);
//pthread_join(tid1,NULL);
printf("End of main Thread\n");
return 0;

}
