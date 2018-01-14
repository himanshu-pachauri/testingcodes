#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<signal.h>
void catch_ctlv(int sig_num)
{printf("caught signal CTRL+C\n");
	printf("%d",sig_num);
	
	fflush(stdout);
	return;
	
	
	}
int main()
{
signal(SIGINT,catch_ctlv);
printf("Go ahead ,Make my day!");
pause();
return 0;
	
	
	}
