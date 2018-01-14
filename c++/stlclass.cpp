#include<iostream>
#include<map>
#include<utility>
using namespace std;
class AAA{
friend ostream& operator<<(ostream & ,const AAA &);
public :
int x,y,z;
AAA();
~AAA(){};
AAA(const AAA&);
AAA &operator=(const AAA &rhs);
int operator==(const AAA &rhs) const;
int operator<(const AAA &rhs) const;
};

AAA::AAA()
{
x=y=z=0;
}

AAA:: AAA(const AAA &copyin)
{
x=copyin.x;
y=copyin.y;
z=copyin.z;
}
ostream &operator<<(ostream &output,const AAA &aaa)
{
output<<aaa.x<<" "<<aaa.y<<" "<<aaa.z<<endl;
return output;

}

AAA&  AAA::operator=(const AAA &rhs){
this->x=rhs.x;
this->y=rhs.y;
this->z=rhs.z;

}

int AAA::operator==(const AAA &rhs) const
{
if(this->x != rhs.x) return 0;
if(this->y != rhs.y) return 0;
if(this->z != rhs.z) return 0;
return 1;

}
int AAA::operator<(const AAA &rhs) const
{ 
if(this->x == rhs.x && this->y == rhs.y && this->z < rhs.z) return 1;
if(this->x == rhs.x && this->y < rhs.y ) return 1;
if(this->x < rhs.x ) return 1;
return 0;

}

int main()
{
map<string,AAA> M;
AAA ablob;
ablob.x=10;
ablob.y=20;
ablob.z=4.2354;

M["C"]=ablob;

ablob.x=70;


M["B"]=ablob;

ablob.y=7;

M["D"]=ablob;

ablob.z=0;

for( map<string, AAA>::iterator ii=M.begin(); ii!=M.end(); ++ii)

   {

       cout << (*ii).first<<": "<<(*ii).second << endl;

   }



return 0;









}
