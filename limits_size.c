//* we will see limits and size of different data-types
#include<stdio.h>
#include<limits.h>
int main()
{
    signed int num1=10;
unsigned int num2=10;
short int num3=20;
long int num4=30;
double d1=12.33;
float f1=12.3;
long long l1=44.55;
long l2=44;
char ch='A';
printf("  size of signed int=%d ",sizeof(num1));
printf("\n");
printf(" size of unsigned int=%d ",sizeof(num2));
printf("\n");
printf(" size of short int=%d ",sizeof(num3));
printf("\n");
printf(" size of long int=%d ",sizeof(num4));
printf("\n");
printf("size of double= %d ",sizeof(d1));
printf("\n");
printf(" size of float= %d",sizeof(f1));
printf("\n");
printf(" size of long long=%d ",sizeof(l1));
printf("\n");
printf(" size of long=%d ",sizeof(l2));
printf("\n");
printf(" size of char=%d ",sizeof(ch));
return 0;
}