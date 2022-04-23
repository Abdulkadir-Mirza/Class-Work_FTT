#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <strings.h>
#include <arpa/inet.h>
#include<string.h>

int main() {
char strbuf[200];
int n;
char *serv_ip = "127.0.0.1";
int sockfd, ret;
struct sockaddr_in servaddr;

//Creating socket
//SOCK_STREAM refers to TCP connection
sockfd = socket(AF_INET,SOCK_STREAM,0);
//Initialization
bzero(&servaddr, sizeof(servaddr));
servaddr.sin_family = AF_INET;
servaddr.sin_port = htons(8000);
inet_pton(AF_INET, serv_ip,&servaddr.sin_addr);

//Connecting to Server
ret = connect(sockfd, (struct sockaddr *) &servaddr, sizeof(servaddr));
if(ret<0){
	perror("connect:");	
	exit(1);
}
printf("Established connection with server\n");
printf("Enter the data that you want to send to server:");
gets(strbuf);
write(sockfd,strbuf,strlen(strbuf));
n=read(sockfd,strbuf,200);
strbuf[n]='\0';
printf("Received %s from the server \n",strbuf);
close(sockfd);
return 0;

}
