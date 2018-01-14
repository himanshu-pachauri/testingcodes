#include<stdio.h>
int main()
{int k=0;
k=setenv("name","Helo",1);
if(k)
{
printf("error in setting variable");
}
else{ printf("variabl is set name=Helo\n");
printf("%s\n",getenv("name"));	


}
while(1)
{




}
}
