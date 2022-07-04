#include<stdio.h>
int main()
{
int a,b,c,d;
a = (2 , 3);//* selects rightmost when bracket is used
b = (5 , ++a);

c=1,2,3,4;//* select leftmost when bracket is not used
d=1,4;
printf(" a = %d b = %d", a, b);
printf("\n c  = %d d = %d", c, d);
return 0;
}