#include <stdio.h>

int main() {
    char s[100];
    int i = 0;
    char ch;

    // Read characters until newline or array is full
    while ((ch = getchar()) != '\n' && i < 99) {
        s[i++] = ch;
    }
    s[i] = '\0';  // Null-terminate the string

    printf("%d", i);  // i is the length of the string

    return 0;
}
