#include<stdio.h>
#include<unistd.h>

int main(){
printf("Statement 1\n");
execl("/home/akm/Internals/03_10/exectest","./exectest","Aaaa", "bbb", "ccc",NULL);
printf("Statement 2\n");
return 0;
}
