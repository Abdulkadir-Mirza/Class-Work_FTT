
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
	struct msgb v;
	int id;
	id = msgget(55, IPC_CREAT|0755);
	printf("ID = %d\n", id);
	v.mtype = atoi(argv[1]);
	strcpy(v.data, argv[2]);
	msgsnd(id, &v, strlen(v.data)+1, 0);
	return 0;
}
