
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>


/*
void* mythread(void *i){
	printf("I am in thread %d\n"(int *)i);
}
*/


int main(int argc, char *argv[])
{
	pthread_t t1,t2;
	struct sched_param param;
	int policy,priority,ret;
	
	ret = pthread_getschedparam (pthread_self(), &policy, &param);
	
	if(ret!=0)
		perror("getschedparam");
	printf("\n-----------------------------MAIN Thread----------------------------\n Policy : %d \t Priority : %d\n",policy,param.sched_priority);
	
	policy=SCHED_FIFO;
	param.sched_priority = 3;
	ret = pthread_setschedparam (pthread_self(), policy, &param);
	if(ret!=0)
		perror("getschedparam");
	
	ret = pthread_getschedparam (pthread_self(), &policy, &param);
	
	if(ret!=0)
		perror("getschedparam");
	printf("\n-----------------------------MAIN Thread----------------------------\n Policy : %d \t Priority : %d\n",policy,param.sched_priority);
	//pthread_create(&t2,&Attr,mythread2,NULL);
	
return 0;
}
