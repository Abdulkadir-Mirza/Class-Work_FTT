#include<stdio.h>
#include<unistd.h>
#include<signal.h>


void sighand(int no){
	printf("I am in signalhandler\n");
}


int main(){
	sigset_t s_set;
	signal(2,sighand);
	sigemptyset(&s_set);
	sigaddset(&s_set,2);
	perror("sig2");
	sigaddset(&s_set,4);
	perror("sig4");
	sigaddset(&s_set,9);
	perror("sig9");
	printf("PID: %d\n",getpid());
	sigprocmask(SIG_BLOCK|SIG_SETMASK,&s_set,NULL);
	perror("sigmask");
	printf("Send me signal one and see the effect now\n");
	sleep(20);
	sigprocmask(SIG_UNBLOCK,&s_set,NULL);	
	printf("After sleep of 20, signals are unblocked\n");

}

