#include<stdio.h> 

int main( )
{
    // int ans;
    // int a = 1; 
    // int b = 0;
    // int c = 3; 

    // ans = a++ && b++ || c++;
    // //    (a++ && b++)  || c++;
    // //    (T++ && F++)  || 
    // //         F        || T++ 
    // //              T
    
    // printf("a = %d b=%d c=%d ans=%d",a,b,c,ans);   

    // int ans;
    // int a = 0; 
    // int b = 1;
    // int c = 0; 

    // ans = a++ && b++ || c++;
    // //    (a++ && b++) || c++
    // //    (F++ && XX) || 
    // //         F  ||  F++
    // //            F    
    
    
  //  printf("a = %d b=%d c=%d ans=%d",a,b,c,ans);   

    // int a = 1; 
    // int b = 1;
    // int c = 0; 
    // int ans; 

    // ans = a++ || b++ || c++; 
    // //    T++ || XXXXXX
    // //      T 
    // printf("a = %d b=%d c=%d ans=%d",a,b,c,ans);   

    // int a = 1; 
    // int b = 1;
    // int c = 0; 
    // int ans; 

    // ans = a++ && b++ && c++; 
    // //    T++ && T++ && F++
    // //      T    && F++ 
    // //         F   
    
    // printf("a = %d b=%d c=%d ans=%d",a,b,c,ans);   


     int a = 0; 
     int b = 2; 
     int c = 3; 
     int ans; 

    ans = a++ || b++ && ++c && a++ || b++; 
    //    a++ || (b++ && ++c) && a++ || b++;
    //    F++ || (T++ && ++T) && ?? 
    //    F++ ||    T  &&  T++  || ?? 
    //    F++ ||    T  || ?? 
    //      T || XXX
    //        T  

    printf("a = %d b=%d c=%d ans=%d",a,b,c,ans);   










}