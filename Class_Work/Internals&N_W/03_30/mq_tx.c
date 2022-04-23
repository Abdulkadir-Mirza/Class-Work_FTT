
#include <stdio.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <sys/msg.h>
#include <stdlib.h>

struct msgb {
long mtype;
char data[512];
};

int main(int argc, char *argv[]) 
{
	struct msgb v,u;
	int id;
	struct msqid_ds buf;
	id = msgget(55, IPC_CREAT|0755);
	printf("ID = %d\n", id);
	v.mtype = atoi(argv[1]);
	u.mtype = atoi(argv[1]);
	strcpy(v.data, argv[2]);
	msgsnd(id, &v, strlen(v.data)+1, 0);
	strcpy(u.data, argv[3]);
	msgsnd(id, &u, strlen(u.data)+1, 0);

	printf("QID = %d\n", id);
	msgctl(id,IPC_STAT,&buf);
	printf("Details of the message queue:\n");
	printf("No. of messages in the message queue: %hi\n",buf.msg_qnum);
	printf("No of bytes in q: %d\n",buf.msg_cbytes);
	printf("Max no of bytes in q: %hi\n",buf.msg_qbytes);
	return 0;
}
