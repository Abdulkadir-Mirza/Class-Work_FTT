#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(){

	char s[20];
	int fd;
	//mkfifo("myfifo",0644);
	
	//perror("mkfifo");

	printf("Before open()....\n");
	fd=open("myfifo",O_RDONLY);
	printf("After open().....\n");
	
	printf("reading data.........\n");
	int n;
	n=read(fd,s,20);
	for(int i=0;i<n;i++)
		printf("%c\n",s[i]);
	return 0;

}
