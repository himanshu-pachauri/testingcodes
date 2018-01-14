#include<iostream>
#include<vector>
using namespace std;
int main()
{std::vector<int> first;
std::vector<int> second (2,100);
std::vector<int> fourth (second.begin(),second.end());
std::vector<int> third(second);
int myint[]={1,5,2};
std::vector<int> fifth (myint,myint+sizeof(myint)/sizeof(int));

cout<<"DISPLAY content of fifth\n";
	for(std::vector<int>::iterator it=fifth.begin();it!=fifth.end();++it)
	{std::cout<<(*it)<<' '<<"\n";
		
		
		}
cout<<"DISPLAY content of second\n";
		
			for(std::vector<int>::iterator it=fourth.begin();it!=fourth.end();++it)
	{std::cout<<(*it)<<' '<<"\n";
		
		
		}
return 0;
	
	
	
	}
