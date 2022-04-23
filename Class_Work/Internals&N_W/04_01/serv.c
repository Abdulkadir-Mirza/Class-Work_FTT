#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<sys/shm.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

#define KEY 199
#define SHM_SIZE 0x1000

void togglecase(char *buf,int cnt);

union semun {
               int              val;    /* Value for SETVAL */
               struct semid_ds *buf;    /* Buffer for IPC_STAT, IPC_SET */
               unsigned short  *array;  /* Array for GETALL, SETALL */
               struct seminfo  *__buf;  /* Buffer for IPC_INFO
                                           (Linux-specific) */
};


union semun sem_union;


int main(){

	int sem_id,shmid;
	int i,j;
	char *pShm;
	struct sembuf sem_op;	
	
	sem_id=semget(KEY,1,0666|IPC_CREAT);
	if(sem_id<0)
	{
		printf("Could not create Semaphore\n");
		return (1);
	}
	printf("\nSemaphore ID: %d\n",sem_id);

	//sem_union.val=1;
	if(semctl(sem_id,0,SETVAL,0)<0)
		printf("error\n");
	
	shmid=shmget(KEY,SHM_SIZE,0666|IPC_CREAT);//Creating a shared memory segment
	if(shmid<0)
	{
		printf("Could not create Shared segment\n");
		return (2);
	}

	pShm=shmat(shmid,NULL,0);//Attaching memory

	if(!pShm)
	{
		printf("Could not attach Shared memory segment\n");
		return (3);
	}	

	while(1)
	{
	sem_op.sem_num=0;
	sem_op.sem_op=-1;
	sem_op.sem_flg = SEM_UNDO;

	semop(sem_id,&sem_op,1);

	printf("Got the Semaphore\n");
	strcpy(pShm+256,pShm);
	togglecase(pShm+256,strlen(pShm+256));
	printf("Processed to request message and placed response\n");
	
	sem_op.sem_num=1;
	sem_op.sem_op=1;
	sem_op.sem_flg = 0;
	
	semop(sem_id,&sem_op,1);

	}

	
return 0;

}

void togglecase(char *buf, int cnt)
{
	int i;
	for(i=0;i<cnt;i++)
	{
		if((buf[i]>='A') && (buf[i]<='Z'))
			buf[i]+=0x20;
		else if((buf[i]>='a') && (buf[i]<='z'))
			buf[i]-=0x20;
	}

}


