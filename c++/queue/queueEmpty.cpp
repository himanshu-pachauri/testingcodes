#include<iostream>
#include<queue>
int main()
{
std::queue<int> myqueue;
int sum=0;
for(int i=0;i<=10;i++)
{

myqueue.push(i);
}

while(!myqueue.empty())
{
sum+=myqueue.front();
std::cout<<sum<<std::endl;
myqueue.pop();
}

std::cout<<"TOtal: "<<sum<<std::endl;
return 0;
}
