#include <stdio.h>
#define OPENED '('
#define CLOSED ')'

int ex9() {

	char input[300];
	char ch;
	int n = -1;
	while ((ch = getchar()) != '\n') {
		n++;
		input[n] = ch;
	}
	n++;
	input[n] = '\0';

	int counter = 0;
	for (int i = 0; i < n; i++) {
		if (input[i] == OPENED) {
			counter++;
		} else if (input[i] == CLOSED) {
			counter--; 
		}
		if (counter < 0) {
			printf("FALSE\n");
			return 0;
		}
	}
	printf("%s\n", counter == 0 ? "TRUE" : "FALSE");
	return 0;
}