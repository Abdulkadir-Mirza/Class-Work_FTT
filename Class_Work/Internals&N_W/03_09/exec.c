#include<stdio.h>
#include<unistd.h>

int main(){
	printf("Statement 1");
	//execl("/bin/ls","ls","-lh",NULL);
	//ls -lh
	
	/*execl("/bin/cat","cat","fork.c",NULL);
	//will execute cat fork.c; NULL represents end of string
	*/

	execl("/home/akm/fork","",NULL);
	printf("Statement 2");
	return 0;
}
