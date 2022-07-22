#include<stdio.h> 

int main( )
{

        int rank; 

        START: 
        printf("Enter the rank"); 
        scanf("%d",&rank); //6  

        if(rank>=1 && rank<=5)
            goto LABEL; 
        else 
            goto START;


    LABEL: 
    printf("Excellent rank all the best"); 


            return 0;
}           