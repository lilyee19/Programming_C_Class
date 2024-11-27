#include <stdio.h>
#include <stdlib.h>

struct student{
	int     ID; 
	char	name[10];
	double	grade;
};

void main(void) {
	struct student s = {24, "SI", 4.0};
	
	printf("input the ID: ");
	scanf("%d", &s.ID);
	
	printf("input the name: ");
	scanf("%s", &s.name);
	
	printf("input the grade: ");
	scanf("%lf", &s.grade);
	
	printf("ID: %d\n", s.ID);
	printf("name: %s\n", s.name);
	printf("grade: %f\n", s.grade);
	
}
