#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
//Pipe implementation
//Child waiting for data in pipe to read from pipe

int main()
{
	int arr[2];
	int res;
	pid_t p;
	
	res= pipe(arr);

	if(res==-1){
		perror("pipe");
		exit(1);
	}

	printf("Read end of file = %d \t Write end of file = %d\n",arr[0],arr[1]);
	if(fork())
	{
		//Parent
		char s[20];
		printf("Enter data in parent....\n");
		scanf("%s",s);
		write(arr[1],s,strlen(s)+1);

	}
	else
	{
		//Child
		char buf[20];
		printf("In child\n");
		read(arr[0],buf,sizeof(buf));
		printf("Child process printing data of the parent process : %s\n",buf);

	}
	return 0;


}
