#include<iostream>
using namespace std;
namespace ns1{
int value()
{
return 5;
}
}

namespace ns2{
const int x=100;
int value()
{
return 2*x;
}

}
int main()
{
int x=2;
cout<< x<<endl;
cout<<ns2::x<<endl;
cout<<ns1::value()<<endl;
cout<<ns2::value()<<endl;
return 0;

}
