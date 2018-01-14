#include<iostream>
using namespace std;
template <class T,class U=char>
class A{
private:
T x;
U y;
public:
A(){
std::cout<<"Constructor Called \n";
}


};

int main()
{
A<char >a;

return 0;



}
