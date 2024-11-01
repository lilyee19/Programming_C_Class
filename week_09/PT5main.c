#include <stdio.h>
#include <stdlib.h>
static int all_files; /*error occurs since this variable works for this file only*/

extern void sub();

int main(void) {
	sub();
	printf("%d\n", all_files);
	return 0;
}
