#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, i;
	int sum = 0;
	
	printf("Enter a number: ");
	scanf("%i", &n);
	
	for (i = 1; i <= n; i++) {
		sum += i;
	}
	
	printf("The result is %i", sum);
	
	return 0;
}
