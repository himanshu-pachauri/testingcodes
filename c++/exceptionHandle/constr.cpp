#include<iostream>
using namespace std;
class test{

public:
test(){
cout<<"constructor called of test"<<endl;;

}

~test(){

cout<<"destructor called"<<endl;
}
};
int main()
{
cout<<"Beforre try\n";
try{
test t1;
cout<<"In thry block\n";
throw 10;


}
catch(int a)
{
cout<<"In catch Block\n";



}
cout<<"out of catch block()";
return 0;


}
