#include<stdio.h>
int main()
{
  int i=1; 
    while(i++<=5);//* while loop is eneded here only
    //* i++  work as condition checker as well as increment 
    //* while(1++ <= 5);true i updated to 2  
    //* works as increment now 2++==>3
    //* while(3++ <= 5);true i updated to 4
    //* 4++==>5
    //* //* while(5++ <= 5);true i updated to 6
    //* 6++==>7
    //* while(7++ <= 5);false ; exit while loop with i=7      

    {
        printf("%d",i); // 7 
         
    }
    printf("\n Outside the loop : %d\n",i); // 7  
    
     int k=1,j=1; 

     while(k<5,j<=10)//* j is dominating here cz (right,left)==> always left selected 
     {
         printf("%d\t%d \n",k,j); 
         k++,j++; 
     }   

return 0;
}