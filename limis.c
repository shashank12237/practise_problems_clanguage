//* we will see limits of various data types
#include<stdio.h>
#include<limits.h>
int main()
{
printf("max limit of signed int = %d\n",INT_MAX);
printf("min limit of signed int = %d\n",INT_MIN);
printf("max limit of unsigned int = %u\n",UINT_MAX);
//* printf("min limit of unsigned int = %u\n",UINT_MIN); invalid 
//*UINT_MIN not defined cz by default unsigned start from 0
printf("max limit of signed CHAR = %d\n",SCHAR_MAX);
printf("max limit of signed CHAR = %u\n",SCHAR_MAX);
// * printf("max limit of signed CHAR = %c\n",SCHAR_MAX);dont do cz shows a different symbol 
printf("min limit of signed CHAR = %d\n",SCHAR_MIN);
printf("max limit of UNsigned CHAR = %u\n",UCHAR_MAX);
printf("max limit of UNsigned CHAR = %d\n",UCHAR_MAX);
printf("max limit of UNsigned short int = %d\n",USHRT_MAX);
printf("max limit of signed short int = %d\n",SHRT_MAX);
printf("mIN limit of signed short int = %d\n",SHRT_MIN);

    return 0;
}