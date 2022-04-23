#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	printf("Client - Sending\n");
	
	//Open writing end
	int fd=open("cli_ser_fifo",O_WRONLY);
	if(fd==-1){
		perror("Cannot open FIFO for write\n");
		return 0;
	}
	printf("FIFO Open\n");
	
	char msg[100]="0Linux System Kernel Programming";
	write(fd,msg,strlen(msg));
	close(fd);
	
return 0;
}
