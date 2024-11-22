#include <stdio.h>

void main(void) {
	FILE *fp = NULL;
	char c;
	fp = fopen("C:\\Users\\SM-PC\\Desktop\\sample.txt", "r");
	if (fp == NULL)
		printf("Unable to open the file\n");
		
	while((c=fgetc(fp))!= EOF)
		putchar(c);
	
	fclose(fp);
}
