#include<stdio.h>
int main()
{
int k=1;
switch(k++)
{
// default : printf("0");
// case 1: printf("2");//2
// case 2:printf("2");//2
// case 3*0: printf("1");//1
//* o/p 221
//default : printf("0");
case 1:case 2: printf("2");//*2
case 3*0: printf("1");//*1

}
return 0;
}