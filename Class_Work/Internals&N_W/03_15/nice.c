#include<stdio.h>
#include<unistd.h>
#include<errno.h>

int main(){

	int ret,i,cnt=0;
	errno=0;
	ret=nice(19);//used to assign nice values to a process 19 means lowest priority

	if(ret==-1 && errno!=0)
		perror("nice");
	else
		printf("Nice value is now %d\n",ret);
	while(1){
		//printf("Process with NICE VALUE %d count = %d\n",ret,cnt);
		
	}



}
