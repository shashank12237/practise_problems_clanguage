#include<stdio.h> 

int main( )
{
    int ans;
    int a = 1; 
    int b = 2; 
    
    ans = a++ || b; 
    //    T++ || XXXX
    //      T 

    printf("a = %d b=%d ans = %d\n",a,b,ans);   
    
    int ans1;
    int a1= 1; 
    int b1 = 2; 
    
    ans1 = a1++ || b1++; 
    //    T++ || XXXX
    //      T 

    printf("a1 = %d b1=%d ans1 = %d\n",a1,b1,ans1);   
    

    int ans2;
    int a2 = 0; 
    int b2 = 2; 
    
    ans2 = a2++ || b2++; 
    //    F++ || T++ 
    //      T  

    printf("a2 = %d b2=%d ans2 = %d\n",a2,b2,ans2);   
    
    int ans3;
    int a3 = 0; 
    int b3 = 2; 
    
    ans3 = ++a3 || b3++; 
    //     T  || XXXX
    //         T 
    
    printf("a3 = %d b3=%d ans3 = %d\n",a3,b3,ans3);   
    
    int ans4;
    int a4 = 0; 
    int b4 = 0; 
    
    ans4 = a4++ || b4++; 
    //    F++ || F++
    //        F   

    printf("a4 = %d b4=%d ans4 = %d",a4,b4,ans4);   
    


    return 0; 
}