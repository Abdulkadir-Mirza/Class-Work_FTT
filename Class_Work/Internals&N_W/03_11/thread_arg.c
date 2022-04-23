//Passing arguments to functions while thread creation
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>

static void* threadfunc(void *arg){
char *s = (char *)arg;
printf("%s\n",s);
return 0;
}

int main(int argc,char *argv[]){

pthread_t t1;
void *res;
int s;

s= pthread_create(&t1,NULL,threadfunc,"Hello World");
if(s!=0){
printf("Thread not created, Error %d\n",s);
return 0;
}

printf("Message from main\n");
//sleep(3);
pthread_join(t1,NULL);

return 0;
}
