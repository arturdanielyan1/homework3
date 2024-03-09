#include <stdio.h>
#include <stdbool.h>

int ex5() {

	char input[300];
	char ch;
	int n = -1;
	while ((ch = getchar()) != '\n') {
		n++;
		input[n] = ch;
	}
	input[n+1] = '\0';

	bool symmetrical = true;
	for (int i = 0; i < n / 2; i++) {
		if (input[i] != input[n - i]) {
			symmetrical = false;
			break;
		}
	}

	printf("%s\n", symmetrical ? "true" : "false");
}