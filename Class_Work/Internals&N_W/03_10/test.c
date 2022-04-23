#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){

int fd;
fd=open("p.txt",O_RDONLY);
printf("FD for opened file is: %d\n",fd);
execl("q2","./q2",NULL);
return 0;
}
