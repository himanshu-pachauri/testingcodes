#include<iostream>
using namespace std;
int main()
{
cout<<"before try Block";
cout<<"\n";
try{
cout<<"Before thown executed";
cout<<"\n";
throw 10;
cout<<"After thrown not excecuted";
cout<<"\n";

}

catch( char *p)
{
cout<<"displaying error of 10";
cout<<"\n";
}
catch (...)
{
cout<<"Defualts Exception caught";
cout<<"\n";
}
cout<< "After catch excecution  value\n";

return 0;
}
