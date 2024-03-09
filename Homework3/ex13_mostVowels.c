#include <stdio.h>

int ex13() {

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

    int vowelNumbers[150] = { 0 };
    int mostVowels = 0;
    for (int i = 0; i <= wordIndex; i++) {
        int currentLength = 0;
        while (words[i][currentLength] != '\0') currentLength++;

        for (int j = 0; j < currentLength - 1; j++) {
            vowelNumbers[i] += isVowel(words[i][j]);
            if (mostVowels < vowelNumbers[i]) {
                mostVowels = vowelNumbers[i];
            }
        }
    }

    for (int i = 0; i <= wordIndex; i++) {
        if (vowelNumbers[i] == mostVowels) {
            printf("%s ", words[i]);
        }
    }

    printf("\n");
    return 0;
}

int isVowel(char c) {
    switch (c) {
        case 'a':
            return 1;
        case 'e':
            return 1;
        case 'i':
            return 1;
        case 'o':
            return 1;
        case 'u':
            return 1;
        case 'A':
            return 1;
        case 'E':
            return 1;
        case 'I':
            return 1;
        case 'O':
            return 1;
        case 'U':
            return 1;
        default:
            return 0;
    }
}