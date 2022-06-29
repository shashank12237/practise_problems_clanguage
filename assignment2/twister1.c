
#include<stdio.h>
int main( void )
{
char num1='A';
short int ch=101;
double num2=10.24;

int value =sizeof(num1)+sizeof(ch)+sizeof(num2);
	 //         1  +  2 + 8 --> 11  		

printf("value=%-8d", value); // 11 

int Value =sizeof(1)+sizeof('A')+sizeof(1.2);
	//  4 + 4 + 8 // 16 

	//a+=b
	// a = a + b 
		
Value+= sizeof(10.2F);
// Value = Value + sizeof(10.2f)
// 	     16   + 4 // 20 	
printf("Value=%-8d", Value);
// 			20
printf("Result=%-8.2f",value + Value /8.0f);
//			11   + 20/8.0 --> 13.5
return 0;
}

