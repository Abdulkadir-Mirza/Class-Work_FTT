#include<stdio.h>
#include<unistd.h>
#include<signal.h>

inline void abort_handler(int);

int main(){
if(signal(SIGABRT,abort_handler) == SIG_ERR) {
fprintf(stderr,"SIGABRT\n");
exit(1);
}
abort();
return 0;
}


void abort_handler(int a) {
fprintf(stderr,"SIGABRT\n");
exit(1);
}
