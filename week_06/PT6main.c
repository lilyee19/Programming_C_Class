#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	
	int n;
	int tri = 0;
	int answer = 50;
		
	do
	{
	  printf("Guess a number: ");
	  scanf("%i", &n);
	  tri++;
		
	  if (n > answer)
	  {
	    printf("High!\n");
	  }
	  else if (n < answer){
		printf("Low!\n");
	  }	
	} while (n != answer);
	
	printf("Congratulation! Trials: %i\n", tri);
	return 0;
}
