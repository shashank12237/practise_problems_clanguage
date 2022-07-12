#include<stdio.h> 

int main( )
{
    //* Relational operator 
    //* > , < , >= , <= , != , == 
    //* 0 or 1 
    //* 0==> false  1 ==> true 
    /*
       * 1>2  ==> 0 False  
       *  2>1  ==> 1 True  
    */

     printf("%d \n ",11 > 10); //^ TRUE ==> 1
     printf("%d \n",11 < 10); // ^ FALSE  ==> 0    

    printf("%d \n",10==12); //^ False ==> 0   

      printf("%d \n",10!=12); //^ TRUE ==> 1 
      //!= ==> not equal to    

      printf("%d \n",10<=12); //^ TRUE ==> 1   

       printf("%d",10>=12); 
    return 0; 
}