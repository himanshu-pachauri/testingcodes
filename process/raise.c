#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<signal.h>
#include<errno.h>
void usr1_handler(int sig_num)
{printf("Parent (%d) got SIGUSR1\n",getpid());
	return ;
	
	}
int main()
{pid_t ret;
	int x;
	int status,role=-1;
	ret=fork();
	if(ret>0)
	{printf("Parent Process:This is parent process %d\n",getpid());
		x=signal(SIGUSR1,usr1_handler);
		if(x==SIG_ERR)
			{printf("Error occured..\n");
				exit(0);
				
				}
		role=0;
		sleep(1);
		pause();
		sleep(1);
		printf("Parent Awaiting child exit\n");
		
		ret=wait(&status);
		
		}
		else if(ret==0)
{printf("Child Process :This is child process %d\n",getpid());
	role=1;
	sleep(1);
	printf("child : sending SIGUSR1 to pid of %d\n",getpid());
	kill(getpid(),SIGUSR1);
sleep(2);
}		
else {
	printf("PArent error trying to create fork %d \n",errno);

	}
	printf("%s : exiting",((role==0)?"Parent\n":"Child\n"));
	return 0;	
	
	
	
	
	}
