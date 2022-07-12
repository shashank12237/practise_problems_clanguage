//* comma operator
#include<stdio.h> 

int main( )
{   
    // , ==> comma operator 

    //int a = 1;// Yes ==> valid 

    //int a = 1,2,3; // NOT OK ==> not valid  

    int a; 
    //a = 1;  // Yes ==> valid  
      
    a = 1,2;
    printf("%d\n",a);
    /*
        1.=  2., 
    */
     a = 11,22,33;  
     printf("%d\n",a);

     a = 100,printf("Hello"); 
     //* first goes on 100 
     //*then go on printf("") & execute printf statement
    //*and finally assign 100 to a
    //* cz a=100,printf("") 
    //*Here assignment operator has more priority then comma oprtr
    //* thats why 100 is assigned to a 
    //^ o/p Hello100
    printf("%d\n",a);

    a = (1,2); 
    printf("%d\n",a);
    //* parenthesis oprtr () 
    //*has more priority then assignment and comma oprtr 
    //* and in parenthesis oprtr  assosiativity is from left to right
    //* therefore, 2 is assigned to a
    //^ o/p==> a=2 

    a = (1,2,3); 
    printf("%d\n",a);//^ 3

    a = ( printf("Hi"),200);
    printf("%d\n",a);//^ Hi200
    /*
    * first prefrence given to parenthesis
    * inside (bracket)==> first printf is executed 
    * & since its a printf statement so it will print Hi
    * then 200 is assigned to a;
    * therefore ansr is Hi200
    */ 
    

    //int a = 1,2,3; // NOT OK 
    int b = (1,2,3);  // OK 
    printf("%d\n",b);//^ 3

   int c = ( (1,2) , 3 );
       //*  (   2 , 3  )
         //*      3   
    
   printf("%d",c);   

    return 0; 
}