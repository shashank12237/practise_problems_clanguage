//* Assignment operator
/*
*  = assignment
*  += or -= ==> addition/subtraction assignment
*  *= or /= ==> multiplication/division assignment
*  %= or &= ==> modulus/AND assignment
*  ^= or ||= ==> exclusive OR (XOR)/ AND assignment
*  <<= or >>= ==> BITWISE SHIFT LEFT /BITWISE SHIFT RIGHT assignment
*/
#include<stdio.h>
int main()
{
    int num1,num2,num3,num4;
    num1=10;//* assign value 10 to variable num1
    printf("%d\n",num1);//* 10
    num1=0;//^ reassigned num1 value i.e 0
    printf("%d\n",num1);//* 0
    printf("%d\n",num2);//* Garbage value cz nothing is assigned to variable num2
    num2=0;//* initialising num2 with value 0
    num3=0;//* initialising num3 with value 0
    num1=num2=num3=0;
    printf("num1:: %d\n",num1);//* 
    printf("num2:: %d\n",num2);//* 
    printf("num3:: %d\n",num3);//* 
    num1=3;
    num2=4;
    num3=5;
    num1+=num2+=num3+=1;
    printf("%d\n",num1);//* 13
    printf("%d\n",num2);//* 10
    printf("%d\n",num3);//* 6
    //^ we can write a single print f statement
printf("num1: %d  num2: %d num3: %d\n",num1,num2,num3);//*num1: 13 num2: 10 num3: 6 
printf("num1:\t %d   num2:\t %d num3: \t%d\n",num1,num2,num3);
printf("num1:\t %5d   num2:\t %6d num3: \t%7d\n",num1,num2,num3);
printf("num1:\t %.5d   num2:\t %.6d num3: \t%0.7d\n",num1,num2,num3);
    return 0;
}