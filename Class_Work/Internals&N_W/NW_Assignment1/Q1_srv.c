#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <string.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
int sockfd,retval,n;
socklen_t clilen;
struct sockaddr_in cliaddr, servaddr;
char buf[10000];

//Craeting a socket
//SOCK_DGRAM means we are using UDP protocol
sockfd = socket(AF_INET, SOCK_DGRAM, 0);

if (sockfd < 0)
{
perror("sock:");
exit(1);
}
//Initializing the servaddr
bzero(&servaddr, sizeof(servaddr));
servaddr.sin_family = AF_INET;
servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
servaddr.sin_port = htons(8000);

//Binding the socket
retval = bind(sockfd, (struct sockaddr *) &servaddr, sizeof(servaddr));
if(retval < 0){
perror("bind:");
exit(2);
}
printf("Server Established\n");
clilen = sizeof(struct sockaddr_in);

//Will be constantly running until we terminate it
while(1){
printf(" Server in Action\n");
n=recvfrom(sockfd,buf, 10000,0, (struct sockaddr *)&cliaddr,&clilen);
printf(" Received %d bytes\n",n);
buf [n]='\0';
printf(" Message from client = %s\n",buf);
//Toggling the data received from the client
for(int i=0;i<strlen(buf);i++)
{
if(buf[i]>='A'&&buf[i]<='Z')
	buf[i]+=0x20;
else if(buf[i]>='a'&&buf[i]<='z')
	buf[i]-=0x20;
}
//Sending the toggled data
n=sendto(sockfd,buf,1000,0,(struct sockaddr *)&cliaddr,clilen);
}//end for

return 0;
}
