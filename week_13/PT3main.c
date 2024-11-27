#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4

struct student{
	int ID;
	int score;
};

void main(void) {
	struct student s[STUDENTNUM];
	int i, maxi;
	double sum;
	
	sum = 0;
	for(i=0;i<STUDENTNUM;i++)
	{
		printf("Input the ID: ");
		scanf("%d", &s[i].ID);
		
		printf("Input the score: ");
		scanf("%d", &s[i].score);
		
		sum += s[i].score;
	}
	
	maxi = 0;
	for(i=1;i<STUDENTNUM;i++)
	{
		if (s[i].score > s[maxi].score){
			maxi = i;
		}
	}
	
	printf("The average of the score: %f\n", sum/STUDENTNUM);
	printf("The highest score - ID: %d, score: %d\n", s[maxi].ID, s[maxi].score);
}
