#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{pid_t myfork;
	pid_t myforkpid,mypid;
	
	myfork =fork();
	printf("myfork is %d\n",myfork);
	int a=0;
	mypid=getpid();
	printf("address of a =%p\n",&a);
	printf("my a is %d\n" ,++a);
	
	printf("my a is %d\n" ,++a);
	printf("my a is %d\n" ,++a);
	printf("mypid is %d\n",mypid);
	
//	
	
	return 0;
	}
