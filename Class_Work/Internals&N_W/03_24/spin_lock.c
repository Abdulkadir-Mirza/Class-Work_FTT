#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>
#include<errno.h>
#include<sys/types.h>
#include<bits/types.h>

static pthread_spinlock_t spinlock;//Spin lock declaration
volatile int slock;

void* spinlockthread(void *i){
	int rc;
	int count=0;
	printf("Entered thread %d, getting spin lock\n",(int *)i);

	rc=pthread_spin_lock(&slock);

	printf("%d thread unlock the spin lock\n",(int *)i);

	rc=pthread_spin_unlock(&slock);
	printf("%d Thread complete\n",(int *)i);
	return NULL;
}



int main()
{
	pthread_t t1;
	int rc=0;

	if(pthread_spin_init(&slock,PTHREAD_PROCESS_PRIVATE)!=0)
		perror("init");
	printf("Main, get spin lock\n");
	rc=pthread_spin_lock(&slock);
	printf("Main, create the spin lock thread\n");

	rc=pthread_create(&t1,NULL,spinlockthread,(int *)1);
	printf("Main,waiting a bit holding the spin lock\n");
	sleep(5);
	
	printf("Main, now unlock the spin lock\n");
	rc=pthread_spin_unlock(&slock);

	if(rc==0)
		printf("\n Main thread successfully unlocked\n");
	else
		printf("\n Main thread unsuccessfully unlocked\n");

	printf("Main,wait for the thread to end\n");
	pthread_join(t1,NULL);
	
return 0;
}
