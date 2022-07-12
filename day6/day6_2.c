//& short-hand and unary operators
#include<stdio.h>
int main()
{
int num1,num2,num3;
num1=0;
num1+=5;
//* num1=num1+5==>0+5==>num1=5
printf("%d\n",num1);//* 5
num1+=5;
//* num1=num1+5==>since num1 value frm above is 5 therefore==>5+5=10
printf("%d\n",num1);//*10
num1%=3;
//* num1=num1%3==>10%3==>1 
printf("%d\n",num1);//* 1
num1*=55;
//* num1=num1*55==>1*55=55.
printf("%d\n",num1);//*55

//* unary operator
num2=0;//* initialize num2
num2=+10;
printf("%d\n",num2);//* +10==>10
num2=-10;
printf("%d\n",num2);//* -10
//* num2=*10; errorcz unary multiplication division and modulus not possible
    return 0;
} 