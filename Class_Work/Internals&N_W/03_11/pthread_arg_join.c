//Getting void * from thread which points to a memory location where we can store data to be returned from string.
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>
#include<string.h>

static void* threadfunc(void *arg){
char *s = (char *)arg;
printf("%s\n",s);
sleep(5);
return (void *) strlen(s);
return 0;
}


int main(int argc,char *argv[]){
pthread_t t1;
void *res;
int s;

pthread_create(&t1,NULL,threadfunc,"Hello World");


printf("Message from main\n");
//sleep(3);
pthread_join(t1,&res);
printf("Thread returnes: %ld\n",(long) res);

return 0;
}
