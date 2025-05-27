#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<string.h>
int main(){
  key_t=ftok("shmfile",65);
int shmid=shmget(key,1024,0666|IPC_CREAT);

char *str=(char*)shmat(shmid,(void*)0,0);

printf("Write Data\n");
fgets(str,1024,stdin);
printf("Data is written%s\n",str);

shmdt(str);
return 0;
}
