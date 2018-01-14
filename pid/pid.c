#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
pid_t pid,ppid;
gid_t gid;
if((pid=getpid())<0)
{
printf("Error in getting pid of this process\n");
}
else printf("PID of the process is %d\n",pid);
if((ppid=getppid())<0)
{ 
printf("Error in getting ppid of this process\n");
}
else printf("PPID of the process is %d\n",ppid);



if((gid=getgid())<0)
{ 
printf("Error in getting gid of this process\n");
}
else printf("GID of the process is %d\n",gid);









}
