#include <stdio.h>
int main()
{
    
  if (sizeof(int) > -10)
    printf("YES\n");
  else
    printf("NO\n");
    
//  if (sizeof(4) >= sizeof(-10))
//       printf("YES");//yes
//   else
//     printf("NO");

//  if (sizeof(4) >= sizeof(char))
//       printf("YES");//yes
//   else
//     printf("NO");

 if (sizeof(4) >= -10)
      printf("YES\n");
  else
    printf("NO\n");//* no 
    /*
Explanation://* In C, when an integer value is compared with an unsigned int, 
//*the int is promoted to unsigned.
//* Negative numbers are stored in 2’s complement form 
//* and unsigned value of the 2’s complement form is much higher than the sizeof int
//* -10==> 10000000 000000000 00000000 00000110
//* 1's==> 01111111 111111111 11111111 11111001
//*                                          +1
//*--------------------------------------------
//*2's==>  01111111 111111111 11111111 11111010==> decimal 4294967290
//*--------------------------------------------    in unsigned int range

    */
  return 0;
}
