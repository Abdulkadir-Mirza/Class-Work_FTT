#include <stdio.h>
#include <unistd.h>

int main() {
long int page_size = sysconf(_SC_PAGESIZE);
printf("PAge size is %ld\n", page_size);
void* c1= sbrk(0);
printf("program break point %p\n",c1);
c1 = (void *) ((char * ) c1+9);
printf("c1: %p\n",c1);
brk(c1);
void *c2 = sbrk(0);
printf("prog break addr: %p",c2);
return 0;
}
