#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
char* var=argv[1];
printf("Hello WOlrd");
printf("%s\n",getenv(var));




}
