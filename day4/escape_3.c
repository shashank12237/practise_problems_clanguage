//* Carriage Return \r ==> moves cursor to start of current line
#include<stdio.h>
int main()
{

printf("kello\rh\n");
//*   \r moves cursor at begining i.e at position k
//*    then k is replaced by h and final o/p==> hello     

printf("OK 34 Batch\rOM\n");
//*   \r moves cursor at begining i.e at position O
//*    then O is replaced by O 
//*    then cursor shift forward i.e at position K 
//*     and replace K by M final o/p==> OM 34 Batch
printf("KM 34 Batch\rOL\bM\n");
//*   \r moves cursor at begining i.e at position K
//*    then K is replaced by O 
//*    then cursor shift forward i.e at position M
//*     and replace M by L ==> OL
//*     Now cursor shift to space between l and 3
//*     now \b push cursor back to L 
//*    and then replace L by M and hence finl o/p ==> OM 34 Batch
    return 0;
}