#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>


int main(){
	printf("Server - Listening\n");
	
	//Creating FIFO
	int code = mkfifo("cli_ser_fifo",0764);
	if(code==-1)
		perror("mkfifo returned an error - file may already exist\n");
	
	//Open reading end
	int fd=open("cli_ser_fifo",O_RDONLY);
	if(fd==-1){
		perror("Cannot open FIFO for read\n");
		return 0;
	}
	printf("FIFO Open\n");
	
	char serv[100];
	memset(serv,0,100);

	int res;
	char len;
	while(1){
		res=read(fd,&len,1);
		if(res==0)
			break;
		read(fd,serv,len);
		printf("Server Receieved : %s\n",serv);
	}
	printf("EOF Reached\n");
	
	close(fd);
	printf("FIFO CLosed\n");	
	
return 0;
}
