#include <stdio.h>
 //^      * this sign we call value at
int main()
{
    int *ptr;//^ pointer location ( in memory i.e stack )suppose 500
    int x; //^ variable x has location 100
 
    ptr = &x;//^ pointer saves address of variable x i.e inside pointer 100
    *ptr = 0;
 
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
 
    *ptr += 5;
    printf(" x  = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
 
  //^ printf(" check *ptr = %d\n", (*ptr)++);// to this by urself
(*ptr)++;//^ post increment ==> value at(ptr)++ ==>value at(100)++ ==>5++ == 6
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
 
    return 0;
}