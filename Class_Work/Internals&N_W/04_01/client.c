#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/shm.h>
#include <string.h>

#define KEY 199
#define MSG_LEN 256
#define SHM_SIZE 0x1000
#define RESP_MSG_START 256

union semun {
int val;
struct semid_ds *buf;
unsigned short *array;
struct seminfo *__buf;
};
union semun s;

int main() {
int semid, shmid;
char *pshm;
struct sembuf smop;
semid = semget(KEY, 1, 0666);
if(semid < 0) {
printf("Couldnt create semaphore\n");
return 1;
}
else { printf("Semaphore id %d\n", semid); }
shmid = shmget(KEY, SHM_SIZE, 0666);
if(shmid < 0) {
printf("Couldnt create shared mem segment\n");
return 2;
}
pshm = shmat(shmid,NULL,0);
if(!pshm) {
printf("Could not attach shared mem segment\n");
return 3;
}
while(1) {
printf("Client: Enter some request message to send to server\n");
fgets(pshm, MSG_LEN, stdin);
smop.sem_num = 0;
smop.sem_op = 1;
smop.sem_flg = 0;
semop(semid, &smop, 1);
smop.sem_num = 1;
smop.sem_op = -1;
smop.sem_flg = 0;
semop(semid,&smop,1);
puts(pshm+RESP_MSG_START);
}
return 0;
}
