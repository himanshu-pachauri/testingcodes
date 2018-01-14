#include<iostream>
using namespace std;
int main()
{
try{
throw "this is not happening";

}
catch (double x)
{
cout<<"Exception caught from double"<<endl;

}
catch (int a)
{
cout<<"Exception caught from int"<<endl;
}
catch(char c)
{
cout<<"defaults exceptio  caught from char c"<<endl;


}
catch(const char *c)
{
cout<<"defaults exceptio  caught from char* c"<<c<<endl;


}

catch(...)
{
cout<<"defaults exceptio  caught"<<endl;

}
cout<< "Program Excecution complete..\n";


return 0;

}
