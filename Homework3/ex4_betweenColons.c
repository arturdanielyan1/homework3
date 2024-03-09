#include <stdio.h>

int ex4() {

	char ch;
	int n = -1;
	while ((ch = getchar()) != '\n') {
		if (n >= 0) n += isDigit(ch); // a colon was found before
		if (ch == ':') {
			if (n > 0) { // was counting symbols
				printf("%d\n", n);
			}
			n = 0; // restart counting
		}
	}

	printf("\n");
	return 0;
}

int isDigit(char c) {
	return (c >= '0' && c <= '9') ? 1 : 0;
}