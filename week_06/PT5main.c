#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b;
	char opr;
	
	printf("Enter the calculation: ");
	scanf("%i %c %i", &a, &opr, &b);
	
	switch(opr) {
		case 43:
			printf("= %i", a+b);
			break;
			
		case 45:
			printf("= %i", a-b);
			break;
			
		case 42:
			printf("= %i", a*b);
			break;
			
		case 47:
			printf("= %i", a/b);
			break;
			
		default:
			printf("Put another operater.");
			break;
		}
		
		return 0;
}
