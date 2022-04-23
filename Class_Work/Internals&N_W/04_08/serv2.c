#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <strings.h>
#include <arpa/inet.h>

int main() {
int lfd, connfd, ret;
socklen_t clilen;

struct sockaddr_in cliaddr, servaddr;
lfd = socket(AF_INET, SOCK_STREAM, 0);
if(lfd < 0) 
{ 
perror("Sock: \n"); return 0; 
}
bzero(&servaddr, sizeof(servaddr));
servaddr.sin_family = AF_INET;
servaddr.sin_addr.s_addr = inet_addr("127.0.0.1");
servaddr.sin_port = htons(8000);
ret = bind(lfd, (struct sockaddr *)&servaddr, sizeof(servaddr));
if(ret < 0) 
{ 
perror("bind: \n"); return 0; 
}
listen(lfd, 5);
while(1) {
char buf[200];
int n;
clilen = sizeof(cliaddr);
connfd = accept(lfd, (struct sockaddr *)&cliaddr, &clilen);
printf("Client connected\n");
n=read(connfd,buf,200);
buf[n]='\0';
printf("Data received from client = %s\n",buf);
write(connfd,"Good Bye",8);
}

return 0;
}
