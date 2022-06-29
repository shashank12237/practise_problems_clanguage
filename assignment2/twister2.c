#include<stdio.h>
int main(void)
{
int value1=0x32;
int value2=064;
int value3 = 0x8 + 016 + 128 - value1 + value2;
printf("value1=%d \t", value1 ); // decimal rep of 0x32(hex) 
printf("value2=%d \t", value2 ); // decimal rep if 064(oct)  
printf("value3=%d \n", value3 ); // 
return 0;
}