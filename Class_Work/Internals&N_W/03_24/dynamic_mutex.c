//Locks,Thread synchronization
/*Types of locks: semaphore,spinlock,mutex,atomic*/
//Mutex dynamic lock
//Simple Mutex lock when tries to lock and lock is not avaibale will go into Wait Queue until the lock is freed
//uSING Trylock we can check if the lock is avaibale it will acquire it and return 0 on success
//otherwise the code will exit from acquiring with lock and continue with the next codes.
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>



#define mutex_lock pthread_mutex_lock
#define mutex_unlock pthread_mutex_unlock
#define mutex_trylock pthread_mutex_trylock



inline void* print(void *arg);



//Static mutex
pthread_mutex_t lock;
int main()
{
//thread id
pthread_t t1, t2;
//create thread
pthread_mutex_init(&lock,NULL);
pthread_create(&t1, NULL, print, "KK");
pthread_join(t1,NULL);
return 0;
}



void* print(void *arg) {
int a = mutex_trylock(&lock);
//Mutex lock returns 0 on success
printf("Mutex locked: %d\n",a);
char *s = (char *) arg;
printf("%s\n",s);
mutex_unlock(&lock);
return NULL;
}
