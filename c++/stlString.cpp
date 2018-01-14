#include<iostream>
#include<map>
#include<string>
#include<utility>
using namespace std;
int main()
{
map<string,int> salary;
salary["Himanshu"]=10000;
salary["yogi"]=17000;
salary["vyom"]=15000;
cout<<endl;
salary.insert(std::pair<string,int>("David D.",19000));
salary.insert(std::pair<string,int>("yogiD",19000));

cout<<"vyom"<<salary["vyom"]<<endl;
for(map<string,int> ::iterator ii=salary.begin();ii!=salary.end();ii++)
{
cout<<(*ii).first<<": "<<(*ii).second<<endl;



}









}
