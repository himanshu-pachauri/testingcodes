#include<iostream>
#include<fstream>
using namespace std;
int  main()
{ofstream myfile;
myfile.open("test.txt");
if(myfile.is_open())
{

cout<<"writing to a test.txt\n";

myfile<<"THis is test of writing text using cpp"<<endl;

cout<<"file has been written successfully.\n";


myfile.close();
cout<<"file close successfully";

}
else {
cout<<"error in opening a file\n ";

}

return 0;




}
