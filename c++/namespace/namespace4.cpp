#include<iostream>
using namespace std;
namespace x{
class y{


public:
void display()
{
cout<< "this is x::y.display() funtion\n";

}


};

}

int main()
{x::y obj;
obj.display();

}
