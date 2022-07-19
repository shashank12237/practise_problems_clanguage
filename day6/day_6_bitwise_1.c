/*
* bitwise operator 
* covert the nuber in b/y then perform oprtns on bit level
*  & ==> bitwise AND
* | ==> bitwise OR
* ^ ==> bitwise XOR
* ~ ==> bitwise NOT
* << ==> left shift
* >> ==> right shift

*/
#include<stdio.h>
int main()
{
    int a=10,b=5;
    int res_and=0;
    res_and = a&b;
    printf("AND == %d\n",res_and);
    printf(" AND = %d\n", 5&6);

 int res_or=0;
    res_or = a|b;
    printf("OR == %d\n",res_or);
     printf(" OR = %d\n", 18|6);

     int res_xor=0;
    res_or = a^b;
    printf("XOR == %d\n",res_or);
     printf(" XOR = %d\n", 18^6);
     int res_not=0;
    int res_not_2=0;
    res_not = ~a;
    res_not_2=~b;
    printf("NOT == %d\n",res_not);
     printf(" NOT = %d\n",res_not_2 );
     printf(" NOT = %d\n", ~5);
     printf("%d\n",a&b&&b+1||0||b++);
     printf("%d\n",b);

     //^ bitwise shift left <<: syntax: var1 << var2
     int res_left=0;
      res_left=a<<b;
      printf("left shift =%d \n",res_left);//*640
      
      //* 0 0 0 0 1 0 1 0 ==>10
      //* 10 left shift by 5 bits 10<<5
     //*1 0 1 0 0 0 0 0==> in decimal 512 + 128 =640 
     int res_right=0;
      res_right=a>>b;
      printf("right shift =%d \n",res_right);//*0
       printf("right shift =%d \n",10>>2);//*0

    return 0;
}