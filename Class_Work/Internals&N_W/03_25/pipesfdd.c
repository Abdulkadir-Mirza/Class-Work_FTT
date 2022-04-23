#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
//Pipe implementation

int fds[2];


void parent_code(){
	char *buf1="aaaaaa";
	char *buf="bbbbbb";
	close(fds[0]);
	write(fds[1],buf1,6);
	write(fds[1],buf,6);
	printf("End of Parent\n");

}


void child_code(){
	char buf2[12];
	int n,i;
	close(fds[1]);
	n=read(fds[0],buf2,100);
	printf("\nNo. of chars read= %d\n",n);
	for(i=0;i<n;i++)
		printf("%c",buf2[i]);
	printf("End of Child\n");
}


int main()
{
	
	int res;
	pid_t p;
	
	res= pipe(fds);

	if(res==-1){
		perror("pipe");
		exit(1);
	}

	p=fork();
	if(p==0){
		child_code();
	}
	else
		parent_code();
	return 0;


}
