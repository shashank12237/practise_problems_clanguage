#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==5)//i=5
        break;//it send control to utside for loop and prints hello world
        else
        printf("%d\n",i);
    }
    printf("Hello world \n");
    return 0;
}
