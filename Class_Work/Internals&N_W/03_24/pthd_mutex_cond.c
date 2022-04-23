#include<pthread.h>
#include<stdio.h>
#include<unistd.h>

pthread_cond_t cond1 = PTHREAD_COND_INITIALIZER;//Condition initialization

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;//Lock initialization

int done=1;

void *func(void* arg){

char *str=(char *)arg;
printf("Thread task called by=%s\n",str);

pthread_mutex_lock(&lock);//Acquire a lock;
if(done==1){
	
	printf("Waiting on condition variable cond1\n");
	pthread_cond_wait(&cond1,&lock);
	}
else{

	printf("Signalling Conditoin variable cond1\n");
	pthread_cond_signal(&cond1);
	}

pthread_mutex_unlock(&lock);
printf("Returning thread\n");

} 

int main()
{
pthread_t t1,t2;
pthread_create(&t1,NULL,func,"Thread 1");

sleep(2);
done=2;
pthread_create(&t2,NULL,func,"Thread 2");

pthread_join(t2,NULL);
return 0;
}
