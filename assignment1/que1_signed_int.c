
/*
1. Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.
*/
//* signed int
#include<stdio.h>
int main()
{
// int a,b,sum,diff,pro;
signed int a,b,sum,diff,pro;
printf("enter a \n");
scanf("%d",&a);
printf("enter b \n ");
scanf(" %d",&b);
sum=a+b;
diff=a-b;
pro=a*b;
printf("sum is %d \n",sum);
printf("difference is %d \n",diff);
printf("product is %d\n",pro);

    return 0;
}