//Getting default inherit scheduler member attribute value
//By default it is inherit i.e. 0
//We can modify it to explicit i.e. 1 using attribute functions
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>



void* mythread(void *arg){
	sleep(3);
	return 0;
}

void* mythread2(void *arg){
	sleep(3);
	return 0;
}


int main(int argc, char *argv[])
{
	pthread_t t1,t2;
	pthread_attr_t Attr;
	int err,info;
	
	pthread_attr_init(&Attr);
	pthread_attr_getinheritsched(&Attr,&info);//Getting default value of inherit scheduleR ATTRIBUTE

	
	switch(info)
	{
		case PTHREAD_INHERIT_SCHED:
			printf("Sched\n");
			break;

		case PTHREAD_EXPLICIT_SCHED:
			printf("EXplicit\n");
			break;

	}
	
	pthread_create(&t1,&Attr,mythread,NULL);
	pthread_attr_setinheritsched(&Attr,1);//Setting attribute to 1 i.e. explicit
	pthread_attr_getinheritsched(&Attr,&info);
	
	switch(info)
	{
		case PTHREAD_INHERIT_SCHED:
			printf("Defualt Sched\n");
			break;

		case PTHREAD_EXPLICIT_SCHED:
			printf("EXplicit\n");
			break;

	}
	
	pthread_create(&t2,&Attr,mythread2,NULL);
	
return 0;
}
