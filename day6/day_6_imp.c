#include<stdio.h> 

int main( )
{
    
    int a; 
    a = printf("hello world");
    //* execute printf and gives Hello world as o/p
    printf("%d",a); 
    //* since a is a int type variable 
    //* so it will have only integer value
    //* it means it will count number of words
    //* in string h e l l o space w o r l  d 
    //*           1 2 3 4 5 6     7 8 9 10 11
    //* o/p==>11

    // int x; 
    // int num = 10; 
    // x = printf(" %10d ",num); 
    // printf(" %d",x); 

    // int b; 
    // b = printf("\b\t\r\nhello");
    // printf("%d",b); 


    return 0; 
}

