#include<iostream>
#include<cstring>
#include<string>
#include<stdio.h>
int main()
{int i=0;
std::string Hello="HEllo WOlrd THis is mE ";
std::cout<<Hello<<std::endl;
char *str=new char [Hello.length()+1];
std::strcpy(str,Hello.c_str());
std::cout<<str<<std::endl;


for(i=0;i<10;i++)
{
printf("*");
}
printf("\n");
char *p=std::strtok(str," ");
while(p!=0)
{
std::cout<<p<<'\n';
p= std::strtok(NULL," ");
std::cout<<"\n"<<p<<std::endl;

}



delete[] str;
return 0;


}
