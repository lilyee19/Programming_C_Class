#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo( int a, int b )
{
	int result;
	result = a + b;
	return result;
}

int square( int n )
{
	return (n*n);
}

int get_max( int x, int y )
{
	if (x > y)
	{
		return x;
	}
	else 
	{
		return y;
	}
}

int main(void) {
	
	int num1, num2;
	int sumr, squarer, maxr;
		
	printf("Enter the integers: ");
	scanf("%i %i", &num1, &num2);
	
	sumr = sumTwo(num1, num2);
	squarer = square(num1);
	maxr = get_max(num1, num2);
	
	printf("Result - Sum: %i, Square: %i, Max: %i\n", sumr, squarer, maxr);
}
