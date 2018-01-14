#include<iostream>
using namespace std;
namespace ns1
{
void display();

class geek{
public:
void display();

};



}

void ns1::display()
{
cout<<"THis is ns1::display()"<<endl;

}
void ns1::geek::display()
{
cout<<"THis is ns1::geek::display()"<<endl;

}
int main()
{
ns1::geek obj;
obj.display();
ns1::display();
return 0;

}
