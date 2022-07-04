#include<stdio.h>
int main()
{
    //* to calculate face value of 4digit number
    int a,b,c,d,e,f,g;
    printf("enter the digit \n");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=c%10;
    e=c/10;
    f=e%10;
    g=e/10;
printf("the face value of digits are thousand's place :%d  \n",g);
printf("the face value of digits are hundred's place :%d \n",f);
printf("the face value of digits are ten's place :%d  \n",d);
printf("the face value of digits are one's place :%d \n",b);
    //* place values
    printf("the place value of digits are %d %d %d %d \n",b*1000,d*100,f*10,g);
    //* reverse of digit
    printf("the reverse digit is %d %d %d %d \n",b,d,f,g);
    //* sum of digits
    printf("the sum of digits is %d:",b+d+f+g);
return 0;
}