#include <stdio.h>
#include <stdbool.h>

int ex11() {

    char input[300];
    int spaceIndexes[300];
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
        int currentLength = 0;
        while (words[i][currentLength] != '\0') currentLength++;

        int lastIndex = currentLength - 1;
        bool symmetrical = true;
        for (int j = 0; j < lastIndex / 2; j++) {
            if (words[i][j] != words[i][lastIndex - j]) {
                symmetrical = false;
                break;
            }
        }
        if (symmetrical) printf("%s\n", words[i]);
    }

    printf("\n");
    return 0;
}