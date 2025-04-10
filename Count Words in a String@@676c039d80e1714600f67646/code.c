#include <stdio.h>

int main() {
    char str[100];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Skip leading spaces
    while (str[i] == ' ') {
        i++;
    }

    for (; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n' && str[i+1] != '\0') {
            words++;
        }
    }

    if (str[0] != '\n') {
        words++; // add 1 for the first word
    }

    printf("%d", words);

    return 0;
}
