#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<stdlib.h>
#include<unistd.h>

union semun {
               int              val;    /* Value for SETVAL */
               struct semid_ds *buf;    /* Buffer for IPC_STAT, IPC_SET */
               unsigned short  *array;  /* Array for GETALL, SETALL */
               struct seminfo  *__buf;  /* Buffer for IPC_INFO
                                           (Linux-specific) */
};

int get_release(void);
int get_semaphore(void);
struct sembuf sem_op;
union semun sem_union;

int sid;
int main(){
	int i;
	sleep(3);
	
	sid=semget((key_t)10,1,0666|IPC_CREAT);
	printf("\nSemaphore ID: %d\n",sid);

	sem_union.val=1;
	if(semctl(sid,0,SETVAL,sem_union)<0)
		printf("error\n");
	
	for(int i=0;i<5;i++)
	{
	get_semaphore();
	printf("\n%d : got the semaphore\n",getpid());
	sleep(1);
	get_release();
	printf("\n%d : released the semaphore\n",getpid());
	sleep(1);
	}

	if(semctl(sid,0,IPC_RMID,NULL)<0)
		printf("Failed to delete the semaphore\n");

	else
		printf("Semaphore deleted\n");
return 0;

}

int get_semaphore(void)
{
	sem_op.sem_num=0;
	sem_op.sem_op=-1;
	sem_op.sem_flg = SEM_UNDO;

	if(semop(sid,&sem_op,1)<0){
	printf("Failed\n");
	return -1;
	}

}

int get_release(void)
{
	sem_op.sem_num=0;
	sem_op.sem_op=1;
	sem_op.sem_flg = SEM_UNDO;

	if(semop(sid,&sem_op,1)<0){
	printf("Failed\n");
	return -1;
	}

}
