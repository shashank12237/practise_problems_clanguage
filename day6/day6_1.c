//* assignment operator
#include<stdio.h>
int main()
{
    int num=3;
    printf("%d\n",num);
    //* num+2; will not make any impact on ansr 
    //* cz it is not assigned so ans of num will remain 3
    printf("%d\n",num);

    /*
      *      On left side of assignment opr 
       *     there should be a variable 
        *    variable ==> modifiable
         *   modifilable Lvalue  
    */
  //*  2=3;//error: lvalue required as left operand of assignment
    return 0;
}