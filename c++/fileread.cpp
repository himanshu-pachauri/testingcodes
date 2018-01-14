#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int  main(int argc ,char **argv)
{
string line;


ifstream myfile;


for(int i=1;i<argc;i++)
{
char *p=argv[i];
myfile.open(p);

if(myfile.is_open())
{

cout<<"file opened--------------------------"<<argv[i]<<" \n";
while(getline(myfile,line))
{
cout<<line<<'\n';

}






myfile.close();
cout<<"file close successfully-------------------\n";

}
else {
cout<<"error in opening a file\n ";

}

}
return 0;




}
