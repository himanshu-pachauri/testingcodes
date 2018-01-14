#include<stdio.h>
#include<stdlib.h>
#include<syslog.h>
int main(int argc ,char **argv)
{
syslog(LOG_INFO," main argument number %d\n",argc);
printf("%d\n",argc);
syslog(LOG_INFO,"%s\n",argv[0]);
printf("%s\n",argv[0]);

return 0;


}
