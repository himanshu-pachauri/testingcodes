#include<stdio.h>
//#include<unistd.h>
//#include<errno.h>
#include<sys/shm.h>
#include<sys/ipc.h>
int main()
{int shmid,status;
	int *a,*b;
	int i;
	shmid=shmget(IPC_PRIVATE,2*sizeof(int),0777|IPC_CREAT);
	if(fork()==0)
	{/*Child process*/
		printf("Child process..\n");
		b=(int *)shmat(shmid,0,0);
	for(i=0;i<10;i++)
	{sleep(1);
		printf("\t\t\t Child Process Reads: %d  %d \n",b[0],b[1]);
		}
		shmdt(b);
		
		
		}
	
	else{
		printf("Parent Process ..\n");
		a=(int *)shmat(shmid,0,0);
		a[0]=0;a[1]=1;
		
	for(i=0;i<10;i++)
	{sleep(1);
		a[0]=a[0]+a[1];
		a[1]=a[0]+a[1];
		
		printf("\t Parent Process Writes: %d %d\n",a[0],a[1]);
		}
		
		
		
		
		
		
		}
	wait(&status);
	
	shmdt(a);
	shmctl(shmid,IPC_RMID,0);
	
	
	
	
	
	
	return 0;
	}
