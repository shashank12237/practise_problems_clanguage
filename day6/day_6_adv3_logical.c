#include<stdio.h> 

int main( )
{
    // int ans;
    // int a = 1; 
    // int b = 1;
    // int c = 1; 

    // ans = a || b && c;
    // //    a       ||      (b && c) 
    // //    L-side  ||      R-side  
    // //      T     ||    XXXX    
    
    
    
    // printf("a = %d b=%d ans = %d",a,b,ans);   
   
    // int ans;
    // int a = 1; 
    // int b = 1;
    // int c = 1; 

    // ans = a || b++ && c++;
    // //    a       ||      (b++ && c++) 
    // //    L-side  ||      R-side  
    // //      T     ||    XXXX    
    
    
    
    // printf("a = %d b=%d c=%d ans=%d",a,b,c,ans);   
   
    // int ans;
    // int a = 0; 
    // int b = 1;
    // int c = 3; 

    // ans = a++ || b++ && c++;
    // //    a    || (b++ && c++) 
    // //     F   || (T++ && T++ )
    // //     F   ||   T
    // //         T
    
    
    // printf("a = %d b=%d c=%d ans=%d",a,b,c,ans);   

    // int ans;
    // int a = 0; 
    // int b = 1;
    // int c = 3; 

    // ans = ++a || b++ && c++;
    // //    a    || (b++ && c++) 
    // //    T   || XXXX
    // //     T   ||   XXX
    // //         T
    
    
    // printf("a = %d b=%d c=%d ans=%d",a,b,c,ans);   

    int ans;
    int a = 0; 
    int b = 0;
    int c = 3; 

    ans = a++ || b++ && c++;
    //    a++ || (b++ && c++) 
    //    F++ || (F++ && XXX )
    //    F++ ||   F
    //        F    

    
    printf("a = %d b=%d c=%d ans=%d",a,b,c,ans);   


   
   
    return 0; 
}