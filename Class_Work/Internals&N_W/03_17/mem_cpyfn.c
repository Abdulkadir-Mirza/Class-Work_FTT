#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char buf1[10];
void my_mem_cpy(char* dest, char* src, size_t nbytes){

for(int i=0;i<nbytes;i++)
{
	*dest=*src;
	*dest++;
	*src++;
}
}


int main(){
	
	char buf1[10]="madam";
	char buf2[10]="me";
	int ret;

	my_mem_cpy(buf2,buf1,5);
	printf("%s",buf2);
	
	return 0;
}
