#include<iostream>
using namespace std;
template<typename T>
class Array{
T* ptr;
int size;
public:
Array( T arr[],int s);
void print();
};
template<typename T>
Array<T>::Array(T arr[],int s)
{
ptr=new T[s];
size=s;
for(int i=0;i<size;i++)
{
ptr[i]=arr[i];
}

}
template<typename T>
void Array<T>::print()
{
for(int i=0;i<size;i++)
{
std::cout<<*(ptr+i)<<std::endl;
}

}
int main()
{
int arr[]={1,2,2,3,4};
Array<int>myArray(arr,5);
myArray.print();
return 0;

}
