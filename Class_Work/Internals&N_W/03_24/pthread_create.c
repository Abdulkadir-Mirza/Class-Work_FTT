#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<string.h>

struct demo{
int i;
char name[10];
};

void* thread(void *arg){
printf("\nNew created thread 1 is executing\n");
printf("Thread function has been passed with no arguments\n");
}

void* thread1(void *arg){
printf("\nNew created thread 2 is executing\n");
char *str=(char *)arg;
printf("Message from main process: %s\n",str);
}


void* thread2(void *arg){
printf("\nNew created thread 3 is executing\n");
struct demo *str;
str=(struct demo *)arg;
printf("Structure data:\n");
printf("%d\t%s\n",str->i,str->name);
}


int main()
{
pthread_t t1,t2,t3;

pthread_create(&t1,NULL,thread,NULL);//Passing no arguments to thread function

pthread_create(&t2,NULL,thread1,"Heloo guys, I am practising.");//Passing arguments to a thread function

struct demo *st1;
st1->i=10;
strcpy(st1->name,"AAAA");
pthread_create(&t3,NULL,thread2,(void *)st1);//Passing structure in arguments to a thread function

pthread_join(t1,NULL);
pthread_join(t2,NULL);
pthread_join(t3,NULL);

return 0;

}
