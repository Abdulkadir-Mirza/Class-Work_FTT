#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){

int k2;

char wr_buf[60]="Linux Kernel Write Program1234";
k2=open("/home/akm/p2.txt",O_RDWR,0755);
printf("Fd for open is %d\n",k2);
write(k2, wr_buf,60);
close(k2);
return 0;
}
