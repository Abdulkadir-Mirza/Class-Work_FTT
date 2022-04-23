#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <strings.h>
#include <arpa/inet.h>

int main() {
char buf[200];
int n;
char *serv_ip = "127.0.0.1";
int sockfd, ret;
struct sockaddr_in servaddr;
sockfd = socket(AF_INET,SOCK_STREAM,0);
bzero(&servaddr, sizeof(servaddr));
servaddr.sin_family = AF_INET;
servaddr.sin_port = htons(8000);
inet_pton(AF_INET, serv_ip,&servaddr.sin_addr);
ret = connect(sockfd, (struct sockaddr *) &servaddr, sizeof(servaddr));
if(ret<0){
	perror("connect:");	
	exit(1);
}
printf("Established connection with server\n");
printf("Enter the data that you want to send to server:");
gets(buf);
write(sockfd,buf,strlen(buf));
n=read(sockfd,buf,200);
buf[n]='\0';
printf("Recvd %s from the server \n",buf);
close(sockfd);
return 0;
}
