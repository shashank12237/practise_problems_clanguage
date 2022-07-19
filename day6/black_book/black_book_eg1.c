#include<stdio.h>
int main()
{
// int a=4,b=8,c,d;
// c=++a;
// d=b++;
// printf("a = %d b = %d c = %d d = %d",a,b,c,d);
// printf("\n %d",d);
//* black book que 4
// int a =3,b=6;
// printf("%d\n",a=b);
// printf("%d \n",a=!b);
//* que 5
// int a=-10,b=3,c=0,d;
//      d=a++ || ++b && c++;
// //*  d= -10++|| ++b && c++
// //*  d= T    || XXXXXXXXX
// //* d=1
// printf("a %d b %d c %d d %d \n",a,b,c,d);
// a=-10,b=3,c=0,d;
//      d= c++ && ++b||a++ ;
// //*  d=0++&&++3 ||-10++
// //*  d= F&&XX   ||T 
// //* d= F||T
// //* d= T
// //* d=122q
// printf("a %d b %d c %d d %d",a,b,c,d);
//* ques 6
int x=-1;
printf("x=%u\n",x>>1);
printf("x=%u\n",x);
/*
* The left shift and right shift operators should not be used for negative numbers. 
*The result of is undefined behaviour if any of the operands is a negative number. 
* For example results of both 1 >> -1 and 1 << -1 is undefined

*/
printf("x=%x\n",x);
printf("x=%x\n",x<<4);
printf("x=%d\n",(unsigned)-x);
printf("x=%d\n",(unsigned)x>>1);
char a =255;
char b= 127;
b=~b;
a=a^b;
printf("%d %d \n",a,b);
printf("%d\n",1|3%2);
// printf("x=%d\n",++4);error
int y=10;
int z;
z=~y;
printf("x=%d\n",z);
 unsigned int k=-10;
// printf("%d   ",(unsigned)k);
printf("%u",k);
    return 0;
}