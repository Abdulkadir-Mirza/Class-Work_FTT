//Memory Anonymous Mapping
#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/mman.h>
#include<string.h>

int main(){
	char *c;
	c= mmap(0,50, PROT_READ|PROT_WRITE, MAP_ANONYMOUS|MAP_PRIVATE, -1, 0);
	perror("mmap");

	strcpy(c,"linuxkernel1");
	printf("%s\n",c);

	munmap(c,50);
	return 0;

}

/*1. addr arg  0 -- Requesting kernel plz map size of region into free PAS
			recommended (not providing own addr)
2. size
3. prtotection flags
4. mapping flags
5. fd/-1
6. file offset 0. */
