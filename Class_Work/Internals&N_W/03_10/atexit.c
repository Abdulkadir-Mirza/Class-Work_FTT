#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>


void K();
void KK();
void KKK();

int main(){

printf("Statement 1\n");
atexit(K);
atexit(KK);
atexit(KKK);
printf("Statement 2\n");

exit(0);

}

void K(){
printf("Exiting\n");
}
void KK(){
printf("Exiting KK\n");
}
void KKK(){
printf("Exiting KKK\n");
}
