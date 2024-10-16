#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination( int n, int r ) 
{
	return ( factorial(n) / (factorial(n-r)*factorial(r)) );
}

int factorial( int x ) 
{
	int i;
	int res = 1;
	for (i=1; i<=x; i++)
	  res *= i;
	return res;
}

int get_integer( void )
{
	int num;
	printf("Enter the value: ");
	scanf("%i", &num);
	return num;
}

int main(void) {
	
	int num1, num2, fr;
	
	num1 = get_integer();
	num2 = get_integer();
	
	fr = combination(num1, num2);
	
	printf("The result of C(%i, %i) is %i.\n", num1, num2, fr);

}
