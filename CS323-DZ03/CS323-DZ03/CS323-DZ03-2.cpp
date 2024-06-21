#include <stdio.h>
#include <string.h>

int countOccurrences(char* s, char ch) {
    int count = 0;

    while (*s != '\0') {
        if (*s == ch) {
            count++;
        }
        s++;
    }

    return count;
}

int main() {
    char s[100];
    char ch;

    printf("Unesite string: ");
    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    printf("Unesite znak: ");
    scanf_s("%c", &ch);

    int count = countOccurrences(s, ch);

    printf("Broj pojavljivanja znaka '%c' u stringu '%s' je: %d\n", ch, s, count);

    return 0;
}