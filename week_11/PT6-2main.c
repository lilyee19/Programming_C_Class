#include <stdio.h>

void main(void) {
	FILE *fp = NULL;
	char str[12];
	fp = fopen("C:\\Users\\SM-PC\\Desktop\\sample.txt", "r");
	if (fp == NULL)
		printf("Unable to open the file\n");
		
	while(fgets(str, 12, fp)!= NULL)
		printf("%s", str);
	
	fclose(fp);
}
