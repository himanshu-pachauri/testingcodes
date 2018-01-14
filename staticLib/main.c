#include<stdio.h>
#include"foo.h"
int main()
{
printf("THis is shared library function\n");
foo();
foo();
return 0;


}
