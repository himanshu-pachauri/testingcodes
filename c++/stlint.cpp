#include<iostream>
#include<map>
#include<string>
#include<utility>
using namespace std;
int main()
{
map<int,string> employe;
employe[52535]="ramesh";
employe[12334]="Himanshu";
employe[1993]="Rajdeep";
employe[10023]="diksha";
employe[1]="komal";
cout<<"size of employe[52535]"<<employe[52535]<<endl;
cout<<"map size :"<<employe.size()<<endl;
for(map<int,string>::iterator ii=employe.begin();ii!=employe.end();++ii)
{

cout<<(*ii).first<<":"<<(*ii).second<<endl;
}
cout<<"Reverse order\n";
for(map<int,string>::reverse_iterator ii=employe.rbegin();ii!=employe.rend();++ii)
{

cout<<(*ii).first<<":"<<(*ii).second<<endl;

}
return 0;











}
