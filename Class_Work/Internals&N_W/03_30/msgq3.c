
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
	int qid;
	struct msqid_ds buf;
	qid = msgget(55, IPC_CREAT|0755);
	printf("QID = %d\n", qid);
	msgctl(qid,IPC_STAT,&buf);
	printf("Details of the message queue:\n");
	printf("No. of messages in the message queue: %hi\n",buf.msg_qnum);
	printf("No of bytes in q: %d\n",buf.msg_cbytes);
	printf("Max no of bytes in q: %hi\n",buf.msg_qbytes);
	return 0;
}
