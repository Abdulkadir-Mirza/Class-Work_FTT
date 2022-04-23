#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>

void* func(void * arg){
	sleep(3);

}

int main()
{
pthread_attr_t attrobj;
pthread_t Id;

void *Stk;
size_t Siz;
int err;
size_t my_stksize = 0x3000000;
void *my_stack;

pthread_attr_init(&attrobj);//Intializing Attribute object
pthread_attr_getstacksize(&attrobj,&Siz);
pthread_attr_getstackaddr(&attrobj,&Stk);
printf("Default Addr =%08x, default Size =%d\n",Stk,Siz);

my_stack=(void*)malloc(my_stksize);//Craeting new stack of required size and getting its address
pthread_attr_setstack(&attrobj,my_stack,my_stksize);//Setting stack for given size

pthread_create(&Id,&attrobj,func,NULL);//Creating thread with defined attribute object

pthread_attr_getstack(&attrobj,&Stk,&Siz);//Getting newly defines stack size and address
printf("Newly defined stack:Addr=%08x and Size =%d\n",Stk,Siz);
sleep(2);
return(0);
}

