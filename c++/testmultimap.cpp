#include<iostream>
#include<map>
using namespace std;
int main()
{
multimap<string,int> m;
m.insert(pair<string,int>("A",1));
m.insert(pair<string,int>("B",2));
m.insert(pair<string,int>("C",3));
m.insert(pair<string,int>("B",4));
m.insert(pair<string,int>("B",5));
m.insert(pair<string,int>("A",6));
cout<<"Number of elements of A: "<<m.count("A")<<endl;
cout<<"Number of elements of B: "<<m.count("B")<<endl;
cout<<"Number of elements of C: "<<m.count("C")<<endl;

cout<<"Elements in m"<<endl;

for(multimap<string,int>::iterator it=m.begin();it!=m.end();it++)
{
cout<<"["<<(*it).first<<" ,"<<(*it).second<<" ]"<<endl;


}
pair<multimap<string,int>::iterator,multimap<string,int>::iterator> ppp;
ppp=m.equal_range("B");
cout<<"Range of \" B \"  elements "<<endl;
for(multimap<string ,int >::iterator it2=ppp.first;it2!=ppp.second;++it2)
{

cout<<"["<<(*it2).first<<" ,"<<(*it2).second<<" ]"<<endl;


}







}
