#include <stdio.h>

void main(void) {
	FILE *fp = NULL;
	char w1[12];
	char w2[12];
	char w3[12];
	
	printf("input a word:");
	scanf("%s", &w1);
	printf("input a word:");
	scanf("%s", &w2);
	printf("input a word:");
	scanf("%s", &w3);
	
	fp = fopen("C:\\Users\\SM-PC\\Desktop\\sample.txt", "w");
	if (fp == NULL)
	{
		printf("Unable to open the file\n");
		return;
	}
	fprintf(fp, "%s\n%s\n%s\n", w1, w2, w3);
	fclose(fp);
}
