#include<stdio.h> 

int main( )
{
    // jump statments 

    // break,continue,return,goto

    int i = 4; 

    //if(i==4) //break statement not within loop or switch
      // break; 

    for(i=1;i<=5;i++)
    {
        printf("Inside the loop %d\n",i); //1 2 3   

        if(i==3)
          break; 
    
    }
    printf("\n Outside the loop %d",i); // 3 

    return 0; 
}