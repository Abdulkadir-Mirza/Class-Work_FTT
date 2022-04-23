#include<stdio.h>
#include<signal.h>

void sighand(int no){
	printf("I am in signalhandler\n");
}


int main(){
	sigset_t s_set;//group of signals
	signal(2,sighand);//SIgnal handler for signal no. 2
	sigemptyset(&s_set);//INitializing the sigset_t structure
	sigaddset(&s_set,2);//Adding signal no. 2 to signal group
	perror("sig2");
	sigaddset(&s_set,4);
	perror("sig4");
	
	sigprocmask(SIG_BLOCK|SIG_SETMASK,&s_set,NULL);//Blocking all signals in sigset_t structure
	perror("sigmask");
	printf("Send me signal one and see the effect now\n");
	getchar();//Blocked signals will not be executed while signal is blocked
	//Signal pending is kernel holding the signal and delivering later.
	getchar();
	sigprocmask(SIG_UNBLOCK,&s_set,NULL);	
	printf("Now signals are unblocked\n");
	while(1);
	

}



