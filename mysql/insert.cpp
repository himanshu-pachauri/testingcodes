#include<stdio.h>
#include<sqlite3.h>
#include<stdlib.h>
static int callback(void *Notused,int argc,char **argv,char **azColName)
{
int i=0;
for(i=0;i<argc;i++)
{
printf("%s=%s\n",azColName[i],argv[i]?argv[0]:"NULL");
}
printf("\n");
return 0;
}
int main()
{sqlite3 *db;
char *zErrMsg=0;
int rc;
char *sql;
rc=sqlite3_open("test.db",&db);
if(rc)
{
fprintf(stderr,"Can't open database %s\n",sqlite3_errmsg(db));
return 0;
}
else 
{
fprintf(stderr,"database opened successfully..\n");
}
sql = "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) " \
"VALUES (1, 'Paul', 32, 'California', 20000.00 ); " \
"INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) " \
"VALUES (2, 'Allen', 25, 'Texas', 15000.00 ); " \
"INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY)" \
"VALUES (3, 'Teddy', 23, 'Norway', 20000.00 );" \
"INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY)" \
"VALUES (4, 'Mark', 25, 'Rich-Mond ', 65000.00 );";

rc=sqlite3_exec(db,sql,callback,0,&zErrMsg);
if(rc!=SQLITE_OK)
{fprintf(stderr,"Sql error: %s",zErrMsg);
sqlite3_close(db);

return 0;
}
else
fprintf(stdout,"database updated successfully...\n");
sqlite3_close(db);
return 0;










}
