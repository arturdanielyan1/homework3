#include <stdio.h>

int ex1() {

	char ch;

	while ((ch = getchar()) != '\n') {
		if (ch == 'x') printf("yy");
		else putchar(ch);
	}

	printf("\n");
	return 0;
}