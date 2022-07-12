#include<stdio.h> 

int main( )
{
    int a,b,c; 

    a = (1,2,3); 
    // a = 3 

    // a = 3 
    b = ( ++a , ++a , ++a);
    // a = 6 
    // b = 6     

    c = ( b++ , b++ , b++); 

    printf("a = %d b = %d c =%d\n ",a,b,c); 

    return 0; 
}
/*
sir bina increment k value increment kaise ho ri h ,,plz explain again

++a ==> a = a + 1 

*/