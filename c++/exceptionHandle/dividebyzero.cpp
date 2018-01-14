#include<iostream>
using namespace std;
double divide(int a,int b)
{

if(b==0)
{
throw "divided by zeros";
}
else {
return a/b;
}
}
int main()
{
int a,b;
cout<<"Enter a ,b :";
cin>>a>>b;
try{
int z=divide(a,b);
cout<<"result:"<<z<<endl;

}catch(const char *msg)
{
cerr<<msg<<endl;
}
return 0;





}
