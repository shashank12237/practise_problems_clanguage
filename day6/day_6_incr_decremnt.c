#include<stdio.h>

int main ( )
{
    /*
            Increment / decrement operator 

        increment ==> ++  ==> increment by 1  
        decrement ==> -- ==> decrement by  1   

    */

    // int ans; 
    // int num = 2; 
    // ans = num; 
    // printf("ans = %d num = %d",num,ans); // 2 2  


    // int ans; 
    // int num = 2; 
    // ans = ++num; // incrment opr ==> preincrement 
    // // ++num ==> num = num + 1 

    // printf("ans = %d num = %d",num,ans); // 3 3   

    int ans; 
    int num = 2; 
    ans = num++; // incrment opr ==> postincrement 
    // num++ ==> num = num + 1 

    printf("num = %d ans = %d",num,ans); //* num = 3 ans = 2

    // int ans; 
    // int num = 2; 
    // ans = --num; // Decrement opr ==> predecrment 
    // --num ==> num = num - 1 

    //printf("num = %d ",num); // 1  
    //printf("ans = %d ",ans); // 1  



    
    // int ans; 
    // int num = 2; 
    // ans = num--; // Decrement opr ==> postdecrment 
    // // num-- ==> num = num - 1 

    // printf("ans = %d ",ans); //2 
    // printf("num = %d ",num); //1  

return 0;

}