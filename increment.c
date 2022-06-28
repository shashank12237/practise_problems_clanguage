#include<stdio.h>
int main()
{
    int a=10;
    int b;
    b=a++ + ++a;
    printf("%d\n",a);
    // printf("%d:  %d: %d %d :  %d \n:",b,a++,a,++a,a++);
   printf("%d %d ",a++,++a);
return 0;

}