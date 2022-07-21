#include<stdio.h>
int main()
{
    //* p/m for lockdown if num of active increases by 1000
    int count;
    printf("enter the number of active infected person");
    scanf("%d",&count);
    if(count>=1000)
    // {
    //     printf("impose lock down \n");
    // }
    // else
    // {
    //     printf("No lock down \n");
    // }
    printf("impose lock down \n");
    
    else
     printf("No lock down \n");
/*
    * if(count>=1000)
    *printf("impose lock down \n");
    *printf("take care \n");
    * else 
    *printf("No lock down \n");
^  o/p==>   error: 'else' without a previous 'if'
^  else is without if statement cz { printf("take care \n");}
^ is considered as a separated statement 
^ only the next line to if condition is taken as if block whwn we r not using any
^ parenthesis 
* the correct is given as follows 
*/
//* correct way below:
// if(count>=1000)
// {
// printf("impose lock down \n");
// printf("take care \n");
// }
// else 
// printf("No lock down \n");
//     return 0;
}