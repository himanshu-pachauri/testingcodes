#include<stdio.h>
#include<stdlib.h>

#include<sqlite3.h>
static int callback(void *data,int argc,char **argv,char **azColName)
{
int i=0;

fprintf(stderr,"%s:",(const char *)data);
for(i=0;i<argc;i++)
{
printf("%s = %s\n",azColName[i], argv[i] ?  argv[i] : "NULL");
}
printf("\n");
return 0;
}

int main(int argc,char *argv[])
{
int rc;

sqlite3* db;
const char *data="Callback fuction called";
char *zErrMsg=0;
rc=sqlite3_open("test.db",&db);
if(rc)
{
fprintf(stderr,"can't open database %s\n",sqlite3_errmsg(db));
return 0;
}
else 
{
fprintf(stderr,"database opened successfully..\n");


}
char *sql="SELECT * from COMPANY";
rc=sqlite3_exec(db,sql,callback,(void *)data,&zErrMsg);
if(rc!=SQLITE_OK)
{
fprintf(stderr,"SQL error: %s\n",zErrMsg);
sqlite3_free(zErrMsg);
}
else {
fprintf(stdout,"Operation done Successfully...\n");
}
sqlite3_close(db);
return 0;




}
