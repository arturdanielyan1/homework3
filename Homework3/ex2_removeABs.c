#include <stdio.h>

int ex2() {

	char input[300];
	char ch;
	int n = -1;
	while ((ch = getchar()) != '\n') {
		n++;
		input[n] = ch;
	}
	n++;
	input[n] = '\0';

	for (int i = 0; i < n; i++) {
		if (input[i] == 'a' && input[i + 1] == 'b') {
			i++;
		}
		else putchar(input[i]);
	}

	printf("\n");
	return 0;
}