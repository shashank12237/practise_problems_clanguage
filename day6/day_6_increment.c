//* its a compiler based 
#include<stdio.h> 

int main( )
{
    int ans; 
    int a  = 1; 
    ans = a++,a++,a++; 
    /*
        * ans=a++,a++,a++
        * assignment oprtr gets priority than comma
        * so leftmost a++ assigned to ans
        * a++==> post increment so 1 is assigned to ans
        * ans=1 <== o/p
        * then a becomes 2
    */
    printf("ans =%d\n",ans); //* ans=1
    printf("a =%d\n",a); //* a=4
    /*
        * ans=a++,a++,a++
        * a++=1++==>2(first a++)
        * a++=2++==>3(second a++)
        * a++=3++==>4(third a++)
        * therefore a=4
    */
   //^ preincrement
   int b;
   b=1;
  //& int result = ++b,++b,++b;//* invalid init cz comma behaves as seprator here
  int result;
  result = ++b,++b,++b; 
   printf("result =%d\n",result); //* result=2
   /*
       * result=++b,++b,++b
       * first ++b assigned to result
       * ++b is preincrement 
       * therefore ++b==>++1==>2
       * result =2
   */
    printf("b =%d\n",b); //* b=4
    /*
       *  1st ++b ==>2
       *  2nd ++b==>++2==>3
       * 3rd ++b==>++3==>4

    */
    return 0; 
}