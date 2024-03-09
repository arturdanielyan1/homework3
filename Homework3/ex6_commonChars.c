#include <stdio.h>
#include <stdbool.h>

int ex6() {

	char input1[300];
	char ch;
	int n1 = -1;
	while ((ch = getchar()) != '\n') {
		n1++;
		input1[n1] = ch;
	}
	n1++;
	input1[n1] = '\0';

	char input2[300];
	int n2 = -1;
	while ((ch = getchar()) != '\n') {
		n2++;
		input2[n2] = ch;
	}
	n2++;
	input2[n2] = '\0';
	

	int count = 0;

	for (int i = 0; i < n1; i++) {
		bool encountered1 = false;
		for (int j = 0; j < i; j++) {
			if (input1[j] == input1[i]) { // checking if a symbol has already been found in [input1] before
				encountered1 = true;
				break;
			}
		}
		if(!encountered1)
		for (int j = 0; j < n2; j++) {
			bool encountered2 = false;
			for (int k = 0; k < j; k++) {
				if (input2[k] == input2[j]) { // checking if a symbol has already been found in [input2] before
					encountered2 = true;
					break;
				}
			}
			if (input1[i] == input2[j] && !encountered2) count++;
		}
	}

	printf("%d\n", count);
}