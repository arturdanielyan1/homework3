#include <stdio.h>
#include <stdbool.h>

int ex7() {

	char input[300];
	char ch;
	int n = -1;
	while ((ch = getchar()) != '\n') {
		input[++n] = ch;
	}
	input[++n] = '\0';
	

	for (int i = 0; i < n; i++) {
		bool duplicateFound = false;
		for (int j = 0; j < n; j++) {
			if (input[i] == input[j] && i != j) {
				duplicateFound = true;
				break;
			}
		}
		if (!duplicateFound) {
			putchar(input[i]);
			duplicateFound = false;
		}
	}

	printf("\n");

	return 0;
}