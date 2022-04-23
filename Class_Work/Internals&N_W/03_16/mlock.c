#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/mman.h>


int main(){

	size_t i;
	const int alloc_size = 32 * 1024 * 1024; // 320
	char *memory = malloc(alloc_size);
	mlock(memory, alloc_size);

	for(int i=0;i<alloc_size; i++)
		memory[i]='#';
	printf("Allocated memory initialized with %s\n",memory);
	munlock(memory,alloc_size);

return 0;
}
