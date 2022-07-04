#include<stdio.h>
int main()
{
int digit,digit_1,digit_2,digit_3,quo_1,avg;
printf("enter the three digit number");
scanf("%d",&digit);
digit_1=digit%10;
quo_1=digit/10;
digit_2=quo_1%10;
digit_3=quo_1/10;
avg=(digit_1+digit_2+digit_3)/3;
printf("the average of digit is %d",avg);
return 0;
}
