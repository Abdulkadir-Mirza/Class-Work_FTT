#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>


#define KEY 55

union semun {
               int              val;    /* Value for SETVAL */
               struct semid_ds *buf;    /* Buffer for IPC_STAT, IPC_SET */
               unsigned short  *array;  /* Array for GETALL, SETALL */
               struct seminfo  *__buf;  /* Buffer for IPC_INFO
                                           (Linux-specific) */
           }argument;
argument.val=1;

int main(){
	int id;

	id=semget(KEY,1,0666|IPC_CREAT);

	if(id<0)
	{
		fprintf(stderr,"Unable to obtain Semaphore\n");
		exit(0);
	}



}
