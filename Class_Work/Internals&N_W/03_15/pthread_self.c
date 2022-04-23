#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>
#include<string.h>

struct my_thread{
int thread_id;
char msg[40];
};


void *mythread(void *i){
	pthread_t tid;
	struct my_thread *t1;
	t1 = (struct my_thread *)i;
	tid=pthread_self();
	printf("\nThread ID: %lu",tid);
	printf("\n %d Thread Message: %s\n",t1->thread_id,t1->msg);
}


int main()
{
	pthread_t t1;
	int rc;
	struct my_thread t2;
	t2.thread_id=2;
	strcpy(t2.msg,"I am Second thread\n");

	printf("\nMAIN Thread ID: %lu\n",pthread_self());
	pthread_create(&t1,NULL,mythread,(void *)&t2);
	
	
	printf("\nExit from main thread\n");
	pthread_exit(NULL);
return 0;
}
