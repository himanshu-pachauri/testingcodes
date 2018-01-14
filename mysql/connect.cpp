#include<stdio.h>
#include<sqlite3.h>
int main()
{
sqlite3 *db;
char *zrrormsg=0;
int rc;
rc =sqlite3_open("test.db",&db);
if(rc)
{fprintf(stderr,"can't open databases... %s\n",sqlite3_errmsg(db));
return 0;	
	}
	else
	{
		fprintf(stdout,"opened database successfully..\n");
		}
	
	sqlite3_close(db);
printf("sql closed\n");
	
	}
