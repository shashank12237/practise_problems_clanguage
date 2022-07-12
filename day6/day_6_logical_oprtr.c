#include<stdio.h> 

int main( )
{   
    //* Logical operator 
    //*  && (logical and ) ||(logical or)  !(logical not)

    //^ NOTE: non-zero including negative is considered as true 
    //^  0 ==> false 

    /*
         *    2,3,4,5,11,12,-3,-4 ==> true 

          *   0 ==> false 
             
    */

    printf("%d\n", 2 && 3 );
    //           T && T 
    //             T ==>1   

    printf("%d\n", -2 && 3 );
    //            T && T ==> T

    printf("%d", 0 && 3 ); //* F ==> 0    
    //*          F   XXX
    // *           F
    //*            0
    printf("%d", 10 && 0 ); //* F ==> 0   
     //*          T    T
    // *            T
    //*             1 
    
      printf("%d\n", 10 || 11 ); //* True 1
       //*          T     XXX
    // *               T
    //*                1
      printf("%d \n", 10 || 0 ); //  *True 1
       //*            T     XXX
    // *               T
    //*                1
      printf("%d \n", 0 || 11 ); //  *True 1
       //*            F    T
    // *               T
    //*                1
      printf("%d \n", 0 || 0 ); //  *False 0 
       //*          F      F
    // *               F
    //*                0

    //^ ! ==> logical not ==> True ==> !True ==> False 
    //^  False ==> !False ==> True 

    printf("%d \n",!10); //* false 0 
    // 10 ==> True ==> !True ==> false 

    printf("%d \n",!0); //* True 1  
    // 0 ==> false ==> !False ==> True ==> 1 

    printf("%d",!!-22);
    /*
        !!T  => !  !T == > ! F ==> True ==> 1  

    */



    return 0; 
}

/*
         ^   && ( logical AND) 
      *  T  T   => T ( 1 )
      *  F  T   => F ( 0 )
      *  T  F   => F ( 0 )
      *  F  F   => F ( 0 )

        ^ || ( logical OR )

      * F  F   => False     
      * F  T   ==>True
      * T  T   ==>True
      * T  T   ==>True
       
       ^ Logical NOT !
       * F ==> True
       * T ==> False
*/