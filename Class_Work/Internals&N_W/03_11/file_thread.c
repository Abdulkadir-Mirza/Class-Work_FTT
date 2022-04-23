//Using two threads to read 100 bytes of data one by one and writing it to terminal
//Clasic example of multiple threads working on same data
//A more practical implementation can be a program  that reads data from sensors using multiple threads and push it to the cloud
//i.e. IOT devices
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>

int fd;
void* threadfunc(void *arg);

int main(int argc,char *argv[]){

fd=open("/etc/passwd",O_RDONLY);
pthread_t t1,t2;

pthread_create(&t1,NULL,threadfunc,"Thread One ");
pthread_create(&t2,NULL,threadfunc,"Thread Two ");

pthread_join(t1,NULL);
pthread_join(t2,NULL);
return 0;
}

void* threadfunc(void *arg){
char buff[100];
int pid,n;
char *s = (char *)arg;
pid=getpid();
printf("%s: \t Started Now: \t for Process %d \n\n",s,pid);
do{
n=read(fd,buff,100);
printf("\n%s: \t Read: \t %d \n",s,pid);
printf("--------------------------------\n");
write(1,buff,100);
printf("\n--------------------------------\n");
sleep(1);

}while(n);
printf("\nFINISHED!!!!%s!!!!!for process %d\n",s,pid);

return 0;
}
