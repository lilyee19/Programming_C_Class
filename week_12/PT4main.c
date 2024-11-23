#include <stdio.h>

int main(void) {
	int i;
	int grade[5];
	int sum;
	
	for(i=0;i<5;i++)
	{
		printf("Input value - grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	sum = 0;
	for(i=0;i<5;i++)
	{
		printf("grade[%i] = %d\n", i, *(grade+i));
		sum += *(grade+i);
	}
	printf("average: %i\n", sum/5);
	
	return 0;
}
