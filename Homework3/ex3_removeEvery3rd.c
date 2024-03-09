#include <stdio.h>

int ex3() {

	char ch;
	int n = 0;
	while ((ch = getchar()) != '\n') {
		n++;
		if (n % 3 != 0) putchar(ch);
	}
	
	putchar('\n');
	return 0;
}