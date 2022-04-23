/*POSIX thread creation
POSIX is a standard library

Data types:

->pthread_t - used to hold thread id and is called as thread object.

->When thread is created, it will have default attributes,
	The attributes of thread are denoted by pthread_attr_t;
	This attributes talk about behavior of thread.

Thread Creation:

#include<pthread.h>
function:

->int pthread_create(pthread_t *ptr,pthread_attr_t *attr,(void)(*fun_ptr)(void),void *arg);
---on success will execute the thread task, on failure returns error code.
-----Error codes: EAGAIN(insufficent resources) , EPERM(dont have enough permissions)


->pthread_join is used to make main process  to wait for thread to complete its execution/terminate
---pthread_join makes the thread to join with main process execution.

*/

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

pthread_t tid;

void* thread1(void *arg){
printf("New created thread is executing\n");
return NULL;
}

int main(){

int ret=pthread_create(&tid,NULL,thread1,NULL);

if(ret)
		printf("Thread is not created\n");
else
		printf("Thread is created\n");
		//sleep(2);
	pthread_join(tid,NULL);

return 0;

}
