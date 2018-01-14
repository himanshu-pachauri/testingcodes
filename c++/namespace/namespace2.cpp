#include<iostream>
using namespace std;
namespace first{
int value=1000;

}
int main()
{
int value=100;
cout<<"Value from namespace\n"<<first::value<<endl;
cout<< value<<endl;

}
