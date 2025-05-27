#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main() {
    key_t key = ftok("shmfile", 65);  // create same key
    int shmid = shmget(key, 1024, 0666);  // get shared memory

    char *str = (char *) shmat(shmid, (void*)0, 0);  // attach to shared memory

    printf("Data read from memory: %s\n", str);

    shmdt(str);  // detach from shared memory
    shmctl(shmid, IPC_RMID, NULL);  // destroy shared memory

    return 0;
}
