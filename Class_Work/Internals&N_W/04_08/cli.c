#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <strings.h>
#include <arpa/inet.h>

int main() {
char *serv_ip = "127.0.0.1";
int sockfd, ret;
struct sockaddr_in servaddr;
sockfd = socket(AF_INET,SOCK_STREAM,0);
bzero(&servaddr, sizeof(servaddr));
servaddr.sin_family = AF_INET;
servaddr.sin_port = htons(8000);
inet_pton(AF_INET, serv_ip,&servaddr.sin_addr);
ret = connect(sockfd, (struct sockaddr *) &servaddr, sizeof(servaddr));
printf("Established connection with server\n");
close(sockfd);
return 0;
}
