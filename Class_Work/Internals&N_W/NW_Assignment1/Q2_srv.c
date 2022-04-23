
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <string.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>

// Following function will be handling the client in child process
void childfunc(int connfd){
int n;
char strbuf[200];
n = read(connfd, strbuf, 200);
strbuf [n]='\0';
printf(" Data received from client = %s\n", strbuf);
printf(" Request handled by server %d\n",getpid());
write(connfd, "Terminating the Connection",8);
exit(0); // terminate chiid.
}

int main()
{
int listfd,connfd,retval;
pid_t childpid;
socklen_t clilen;
struct sockaddr_in cliaddr, servaddr;

//Creating socket for Server
//SOCK_STREAM refers to TCP connection
listfd = socket(AF_INET, SOCK_STREAM, 0);
if (listfd < 0){
perror("sock:");
exit(1);
}

//Initialization
bzero(&servaddr, sizeof(servaddr));
servaddr.sin_family = AF_INET;
servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
servaddr.sin_port = htons(8000);
//Binding Socket to servaddr 
retval = bind(listfd, (struct sockaddr *) &servaddr,sizeof(servaddr));
if(retval < 0){
perror("bind: ");
exit(2);
}
printf("Server Listening for CLients\n");
//Listen for clients
listen(listfd,5);


//Continuously stay active until we terminate it
while(1){
	char strbuf[200];
	pid_t p;
	int n;
	clilen=sizeof(cliaddr);
	connfd=accept(listfd,(struct sockaddr *)&cliaddr,&clilen);
	printf("Client connected\n");
	//Creating a child that will handle the client request
	p=fork();
	if(p==0){
		close(listfd);
		childfunc(connfd);
	}
	close(connfd);
}

return 0;
}

