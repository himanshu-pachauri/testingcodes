//compile gcc -o process1 process1.c
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	pid_t mypid;
	pid_t myppid;
	gid_t mygid;
	uid_t myuid;
	mypid=getpid();
	myppid=getppid();
	myuid=getuid();
	mygid=getgid();
	
	printf("my pid = %d\n",mypid);
	printf("my ppid = %d\n",myppid);
	printf("my gid = %d\n",mygid);
	printf("my uid = %d\n",myuid);	
	return 0;
	
	}
