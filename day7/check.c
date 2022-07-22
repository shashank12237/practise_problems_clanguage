// #include <stdio.h>
// int main(void)
// {
// int a,b,c;
// 	a=printf("\t \"SunBeam\" - \t'IT Park' \t");// 26
// 	printf("\n%d",a);
		
	
// b=printf("\t \'Pune\' \t"); // 10 
// printf("\n%d",b);

// c=printf("\n a = %d",a)+ ++b;
// printf("\n %d",c);
// 	return 0;
// }
#include <stdio.h>
int main(void)
{
// int a,b,c;
// a=printf("\t \"SunBeam\" - \t'IT Park' \t");
// b=printf("\t \'Pune\' \t");
// c=printf("\n a = %d",a)+ ++b;
// printf(" c = %d",c);

// int i;
// for ( i = 1 ;++i <= 5 ; printf ("%d", i )) ;
// {
//     printf(" %d ",i);

// }
// printf(" %d ",i);

//* int i = 1, j = 1 ;
//* for ( ; j ; printf ("%d %d\n",i,j))
//* j=i++ <= 5 ;

// int i=1;
// for(;i++;)
// printf("hello \n");

// int x = 3 , z ;
// z = x++ + ++x;
// printf ("x = %d z = %d" , x , z );

int x = 3 , z ;
z = ++x*++x*++x;
printf ("x = %d z = %d" , x , z );


return 0;
}