#include<iostream>
#include<queue>
int main()
{
std::queue<int>foo,bar;
foo.push(100);foo.push(200);
foo.push(300);
bar.push(1000);
bar.push(2000);
std::cout<<"foo Size: "<<foo.size()<<std::endl;
std::cout<<"bar Size: "<<bar.size()<<std::endl;
std::cout<<"After swapping\n"<<std::endl;
std::swap(foo, bar);
//foo.swap(bar);
std::cout<<"foo Size: "<<foo.size()<<std::endl;
std::cout<<"bar Size: "<<bar.size()<<std::endl;
return 0;




}
