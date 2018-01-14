#include<iostream>
using namespace std;
template<typename T>
void fun(T a)
{
static int i=10;
cout<<"value of a is "<<a<<std::endl;
cout<<"value of i is "<<++i<<std::endl;
return ;

}

int main()
{
fun<int>(1);
fun<double>(1.95);
fun<string>("string");
fun<int>(12);
fun<double>(5.5);
	fun<string>("string1");

return 0;





}
