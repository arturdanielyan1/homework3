#include <stdio.h>

int ex12() {

	char input[300];
	char ch;
	int n = -1;
	while ((ch = getchar()) != '\n') {
		n++;
		input[n] = ch;
	}
	n++;
	input[n] = '\0';

	char words[150][300];
	int wordIndex = 0;
	int letterIndex = -1;
	for (int i = 0; i < n; i++) {
		char current = input[i];
		if (current != ' ') {
			words[wordIndex][++letterIndex] = current;
		}
		else {
			words[wordIndex][++letterIndex] = '\0';
			letterIndex = -1;
			if (i >= 1 && input[i - 1] != ' ') {
				wordIndex++;
			}
		}
	}
	words[wordIndex][++letterIndex] = '\0';

	for (int i = 0; i <= wordIndex; i++) {
		printf(words[i]);
		if (i < wordIndex) {
			printf(" ");
		}
	}

	printf("\n");
	return 0;
}