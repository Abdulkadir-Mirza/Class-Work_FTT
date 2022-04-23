#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
//Pipe implementation using fork()

int fds[2];


void parent_code(){
	char *buf1="aaaaaa";
	char *buf="bbbbbb";
	close(fds[0]);
	printf("Parent Writing to pipe");
	write(fds[1],buf1,6);
	write(fds[1],buf,6);
	printf("\nEnd of Parent\n");

}


void child_code(){
	char buf2[12];
	int n,i;
	close(fds[1]);
	n=read(fds[0],buf2,100);
	printf("\nNo. of chars read= %d\n",n);
	for(i=0;i<n;i++)
		printf("%c",buf2[i]);
	printf("\nEnd of Child\n");
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
