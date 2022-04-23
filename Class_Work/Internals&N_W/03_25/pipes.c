#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
//Pipe implementation

int main()
{
	int fds[2];
	int res,i;
	char *buf1="aaaaaa";
	char *buf="bbbbbb";
	char buf2[12];
	res= pipe(fds);

	if(res==-1){
		perror("pipe");
		exit(1);
	}

	write(fds[1],buf1,6);
	write(fds[1],buf,6);

	read(fds[0],buf2,12);
	for(i=0;i<12;i++){
		printf("%c",buf2[i]);
	}
	
	return 0;


}
