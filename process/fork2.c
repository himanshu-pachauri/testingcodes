#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<errno.h>
int gi=10;
int main()
{

pid_t ret;
int status ,i;
int role=-1;
ret=fork();
if(ret>0)
{printf("Parent: this is the parent process (pid %d)",getpid());	
	
	for(i=0;i<10;i++)
	{printf("%p\n",&i);
		printf("Parent at count =%d\n",i);
		printf("parent global variable =%d\n",gi);
	sleep(1);
			}
	
	ret=wait(&status);
		role =0;
}
else if(ret==0)
{printf("child: this is child process (pid %d)",getpid());
	for(i=10;i>0;i--)
	{printf("%p\n",&i);
		printf("Child global variable =%d\n",gi++);

		printf("Child at count =%d\n",i);
	sleep(1);
			}
			role=1;
			
	}

else {
	printf("Parent Error trying to fork() (%d)\n",errno);
	printf("%s : Exiting..\n",((role==0)?"Parent":"Child"));
	}

return 0;
}
