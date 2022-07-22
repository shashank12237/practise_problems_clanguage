#include<stdio.h>
int main( )
{
    // jump statments 

    // break,continue,return,goto

    int i; 
  
    // if(i==4)   //continue statement not within a loop
    //   continue;  

    for(i=1;i<=10;i++)
    {
        if(i%2==0)
          continue; 
       printf("%d ",i);//1 3 5 7 9     
    }

    
    return 0; 
}