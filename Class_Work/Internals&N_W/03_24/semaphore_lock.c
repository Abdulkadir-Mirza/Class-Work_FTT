#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>
#include<semaphore.h>

int sharedvar=5;//Shared variable
sem_t my_sem;//Semaphore lock declaration

void* thread_inc(void *arg){
	sem_wait(&my_sem);//Take semaphore
	sharedvar++;//Critical section
	sem_post(&my_sem);//Release Semaphore
	printf("After Increment: %d\n",sharedvar);
}

void* thread_dec(void *arg){
	sem_wait(&my_sem);//Take semaphore
	sharedvar--;//Critical section
	sem_post(&my_sem);//Release Semaphore
	printf("After Decrement: %d\n",sharedvar);
}


int main()
{
	pthread_t t1,t2;
	
	sem_init(&my_sem,0,1);//Initialize semaphore
	pthread_create(&t1,NULL,thread_inc,NULL);
	pthread_create(&t2,NULL,thread_dec,NULL);

	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	
	printf("Shared variable = %d\n",sharedvar);
return 0;
}
