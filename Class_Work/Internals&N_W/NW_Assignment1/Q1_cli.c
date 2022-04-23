#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <strings.h>
#include <arpa/inet.h>

int main() 
{
char buf[200];
int n;
char *serv_ip = "127.0.0.1";
int sockfd, ret;
socklen_t addrlen;
struct sockaddr_in servaddr;

//SOCK_DGRAM means we are using UDP protocol
sockfd = socket(AF_INET,SOCK_DGRAM,0);
bzero(&servaddr, sizeof(servaddr));
servaddr.sin_family = AF_INET;
servaddr.sin_port = htons(8000);
inet_pton(AF_INET, serv_ip,&servaddr.sin_addr);

if(ret<0){
	perror("connect:");	
	exit(1);
}
printf("Server Established\n");
printf("Enter the data that you want to send to server:");
scanf("%s",buf);
addrlen = sizeof(struct sockaddr_in);
n=sendto(sockfd,buf,1000,0,(struct sockaddr *)&servaddr,addrlen);
n=recvfrom(sockfd,buf, 10000,0, (struct sockaddr *)&servaddr,&addrlen);
buf[n]='\0';
printf("Received %s from the server \n",buf);
close(sockfd);
return 0;
}
