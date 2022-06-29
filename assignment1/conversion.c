#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5,num6;
    printf("decimal to others::\n");
printf("enter the decimal digit u want to convert in octal\n");
scanf("%d",&num1);
printf("num1: %d in decimal is converted in octal:%o \n",num1,num1);
printf("enter the decimal digit u want to convert in hexadecimal\n");
scanf("%d",&num2);
printf("num2: %d in decimal is converted in hexadecimal:%x \n",num2,num2);
printf("hexa-decimal to others::\n");
printf("enter the hexadecimal digit u want to convert in decimal\n");
scanf("%x",&num3);
printf("num3: %x in hexadecimal is converted in decimal:%d \n",num3,num3);
printf("enter the hexa-decimal digit u want to convert in octal\n");
scanf("%d",&num4);
printf("num4: %x in hexa-decimal is converted in octal:%o \n",num4,num4);
printf("octal to others::\n");
printf("enter the octal digit u want to convert in decimal\n");
scanf("%o",&num5);
printf("num5: %o in octal is converted in decial:%d \n",num1,num1);
printf("enter the octal digit u want to convert in hexadecimal\n");
scanf("%o",&num2);
printf("num2: %oin octalis converted in hexadecimal:%x",num2,num2);
    return 0;
}