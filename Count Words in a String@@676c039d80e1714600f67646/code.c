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
        // If current character is a space and next is not a space or newline, it's a new word
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n' && str[i+1] != '\0') {
            words++;
        }
    }

    // If the first character is not '\n', there is at least one word
    if (str[0] != '\n') {
        words++; // add 1 for the first word
    }

    printf("Number of words: %d\n", words);

    return 0;
}
