#include<stdio.h>
#include<stdlib.h>
#include<sqlite3.h>
static int callback(void *data,int argc,char** argv,char **azmes)
{
int i=0;
fprintf(stderr,"%s :",(const char *)data);
for(i=0;i<argc;i++)
{

printf("%s = %s\n",azmes[i],argv[i]?argv[i]:"NULL");

}
printf("\n");
return 0;
}

int main()
{
int rc;
sqlite3* db;
char *sql="UPDATE COMPANY set SALARY=25000.00 where ID=1; "
		"SELECT * from COMPANY";
char *Errmsg=0;
rc=sqlite3_open("test.db",&db);
if(rc)
{

fprintf(stderr,"cant open database... %s\n",sqlite3_errmsg(db));
return 0;
}
else{
fprintf(stdout,"Database opened successfully\n");
}
rc=sqlite3_exec(db,sql,callback,(void *)"callback function is calles",&Errmsg);
if(rc!=SQLITE_OK)
{
fprintf(stderr,"SQL error: %s",Errmsg);
sqlite3_free(Errmsg);

}
fprintf(stdout,"Operation Done successfully..");
sqlite3_close(db);



return 0;
}
