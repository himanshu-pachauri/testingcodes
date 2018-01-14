#include<iostream>
#include<exception>
using namespace std;
struct myexception: public exception{
const char * what() const throw(){

return "my c++  exception\n";

}


};

int main()
{
try {

throw myexception();

}
catch( myexception &e){

std::cout<<"my Exception caught\n";
std::cout<<e.what();

}
catch (exception &e)

{

}



}
