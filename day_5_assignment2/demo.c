#include<stdio.h>
int main()
{
    char c='A';
    printf("%c",'c');//* c
    printf("\n%d",'c');//* 99
     printf("\n%d",c);//* 65
     printf("\n%c",c);//* A
      printf("\n%d",sizeof(c));//^ 1
      printf("\n%d",sizeof('c'));//^ 4
    return 0;
}