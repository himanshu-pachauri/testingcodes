#include<stdio.h>
#include<stdlib.h>
#include<sqlite3.h>
static int callback(void *data,int argc,char **argv,char **az)
{
int i;
fprintf(stderr,"%s",(const char *)data);
for(i=0;i<argc;i++)
{
printf("%s = %s\n",az[i],argv[i]?argv[i]:"NULL");
}
printf("\n");
return 0;
}

int main()
{
sqlite3 *db;
char *Errmsg=0;
char *sql="DELETE from COMPANY where ID=2;"
		"SELECT * from COMPANY";
const char  *data="Callback function  called: ";
int rc=sqlite3_open("test.db",&db);
if(rc)
{
fprintf(stderr,"cant open database %s\n",sqlite3_errmsg(db));
}
else{
fprintf(stderr,"Databases open successfully..\n");
}
rc=sqlite3_exec(db,sql,callback,(void *)data,&Errmsg);
if(rc!=SQLITE_OK)
{

fprintf(stderr,"SQL error :%s \n",Errmsg);
sqlite3_free(Errmsg);

}
sqlite3_close(db);
fprintf(stdout,"Operation Done Successfully...\n");

return 0;


}
