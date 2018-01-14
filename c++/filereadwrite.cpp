#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
using namespace std;
int  main(int argc ,char **argv)
{
string line;


ifstream myfile;
ofstream  myfile2;

for(int i=1;i<argc;i++)
{
char *p=argv[i];
myfile.open(p);
myfile2.open(strcat(argv[i],".bkp"));

if(myfile.is_open())
{

cout<<"file opened--------------------------"<<argv[i]<<" \n";
while(getline(myfile,line))
{
myfile2<<line<<'\n';

}





myfile2.close();
myfile.close();
cout<<"file close successfully-------------------\n";

}
else {
cout<<"error in opening a file\n ";

}

}
return 0;




}
