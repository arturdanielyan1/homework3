#include <stdio.h>
#include <stdbool.h>

int ex8() {

    char input[300];
    char ch;
    int n = -1;
    while ((ch = getchar()) != '\n') {
        if (n >= 0) {
            bool duplicateFound = false;
            for (int i = 0; i <= n; i++) {
                if (input[i] == ch) {
                    duplicateFound = true;
                    break;
                }
            }
            if (!duplicateFound) input[++n] = ch;

        }
        else {
            input[++n] = ch;
        }
    }
    input[++n] = '\0';
    printf("%s", input);

    return 0;
}