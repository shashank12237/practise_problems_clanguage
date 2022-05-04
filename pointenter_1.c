#include <stdio.h>
#include<limits.h> //* for sizeof operator
int main()
{
	int arri[] = {1, 2 ,3};
	int *ptri = arri;

	char arrc[] = {1, 2 ,3};
	char *ptrc = arrc;

	printf("sizeof arri[] = %d ", sizeof(arri));
//* int type array : number of elements in array is 3(here) and each int has size 4 
//* size if arri[] is 3*4=12bytes
	printf("sizeof ptri = %d ", sizeof(ptri));
//* for 32 bit machine pointer size is 4 bytes,wheras for 64 bits it is 8 bytes

	printf("sizeof arrc[] = %d ", sizeof(arrc));
//* char has size 1 byte and here char arrc has 3 elements so its size is 3*1 = 3 bytes
	printf("sizeof ptrc = %d ", sizeof(ptrc));
 //* for 32 bit machine pointer size is 4 bytes,wheras for 64 bits it is 8 bytes
//^ The sizeof( ) operator is a unary operator
//^ used to find the memory occupied by its operand in bytes.
	return 0;
    //! question taken from geeks for geeks
}
