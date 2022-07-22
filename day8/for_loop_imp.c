#include<stdio.h>
int main()
{

//* 1 st important

    int i = 1; 
    for(  ; i<=5 ; i++)
    {
        printf("%d \n",i);  //1 2 3 4 5     
    }
    printf(" outside \n: %d ",i);//6


//* 2nd 
 int j = 1; 

    for(  ; j<=5 ; )
    {
        printf("%d ",j);  //1 2 3 4 5 
        j++;     
    }
    printf("\n outside : %d ",j);

    //* 3rd
    
    // int k = 1; 
    // for(  ;  ; )
    // {
    //     printf("%d ",k);  //*1 2 3 4 5 ....infinite 
    //        k++;  
    // }
    // printf("\n outside : %d ",k);
    //*1 2 3 4 5 ....infinite loop cz no cond given where to stop
    return 0;
}
