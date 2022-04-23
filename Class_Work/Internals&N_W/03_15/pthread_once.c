#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>

pthread_once_t once = PTHREAD_ONCE_INIT;

void *myinit(){
	printf("\nI am an INIT function\n");

}

void* mythread(void *i){
	printf("\nI am in my thread : %d\n",(int *)i);
	pthread_once(&once,(void *)myinit);
	printf("\nExit from my thread : %d\n",(int *)i);
}


int main()
{
	pthread_t t1,t2,t3;
	
	pthread_create(&t1,NULL,mythread,(void *)1);
	pthread_create(&t2,NULL,mythread,(void *)2);
	pthread_create(&t3,NULL,mythread,(void *)3);
	
	printf("Exit from main thread\n");
	pthread_exit(NULL);
return 0;
}
