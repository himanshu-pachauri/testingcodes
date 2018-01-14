#include<stdio.h>
int main()
{
const int a=10;
int *ptr=(int *)&a;
printf("Initial Value of a is %d\n",a);
printf("Initial Value of a is %d\n",*ptr);
*ptr=100;
printf(" Value of a is %d\n",a);








}
