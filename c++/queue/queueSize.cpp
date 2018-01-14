#include<iostream>
#include<queue>
int main()
{
std::queue<int> myqueue;
std::cout<<"0. size"<<myqueue.size()<<std::endl;
for(int i=0;i<=10;i++)
{
myqueue.push(i);
}
std::cout<<"1. size"<<myqueue.size()<<std::endl;
myqueue.pop();
std::cout<<"2. size"<<myqueue.size()<<std::endl;
return 0;

}
