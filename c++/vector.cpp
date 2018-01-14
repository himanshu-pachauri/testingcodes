#include<iostream>
#include<vector>
using namespace std;

int main()
{std:: vector<int > myvector;
int myint;
std::cout<<"Please enter some integer values\n";
do {

std::cin>>myint;
myvector.push_back(myint);

}while(myint);
std::cout<<"size of myvector is"<<int(myvector.size())<<endl;
return 0;





}
