#include<stdio.h>

int main(int argc,char *argv[]){

int i;
printf("File name: %s\n",argv[0]);
printf("TOtal number of arguments passed: %d\n",argc);
printf("Arguments passed:\n");
for(i=1;i<argc;i++)
	printf("%s\n",argv[i]);
printf("\n");
return 0;
}
