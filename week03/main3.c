#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char c1;
	char c2;

	printf("enter a character : ");
	scanf("%c", &c1);
	
	c2 = c1 + 1;
	
	printf("the next character of %c (%i) is %c (%i)\n", c1, c1, c2, c2);
	
	return 0;
}
