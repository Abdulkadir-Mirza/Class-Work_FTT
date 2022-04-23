#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>
#include<sys/mman.h>

#define NUM 3
void* threadfunc(void *arg){
sleep(2);
return 0;
}

void *myfunc(void *null)  {
	i++;
	int result = 0;
	printf("Result = %d\n",result);
	pthread_exit(NULL);
}

int main(int argc, char *argv[])
{

pthread_t th[NUM];
pthread_attr_t Attr;
int rc, t, status, detach_state;



pthread_attr_init(&Attr);
pthread_attr_setdetachstate(&Attr,PTHREAD_CREATE_DETACH);

for(t=0;t<NUM;t++){
printf("Creating thread %d\n",t);
pthread_create(&th[i],&Attr,myfunc,NULL);

}


pthread_attr_getdetachstate(&Attr,&detach_state);
printf("Detach state:%d\n",detach_state);
printf("Exiting from main thread\n");
pthread_exit(NULL);

return 0;
}
