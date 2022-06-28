//* unsigned int
//* NOTE==>for ubnsigned dont give -ve numbers cs it will give error
#include<stdio.h>
int main()
{
unsigned int a,b,sum,diff,pro;
printf("enter a \n");
scanf("%u",&a);
printf("enter b \n ");
scanf(" %u",&b);
sum=a+b;
diff=a-b;
pro=a*b;
printf("sum is %d \n",sum);
printf("difference is %u \n",diff);
printf("product is %u \n",pro);
// unsigned int a;
// printf("enter a ");
// scanf("%u",&a);
// printf("a is %u",a);
//* o/p enter a -20
//* a is 4294967276
    return 0;
}
