#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==5)//i=5
        continue;//it send i value for increment so in o/p 5 is missing
        else
        printf("%d\n",i);
    }
    return 0;
}
