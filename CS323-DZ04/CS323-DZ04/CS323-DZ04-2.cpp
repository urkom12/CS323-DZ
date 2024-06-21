#include <stdio.h>
#include <ctype.h>
#include <string.h>

void ConvertAndRemove(char* s) {
    char* p = s;
    char* q = s;

    while (*p != '\0') {
        if (isdigit(*p)) {
            p++;
        }
        else {
            if (isupper(*p)) {
                *q = tolower(*p);
            }
            else {
                *q = *p;
            }
            q++;
            p++;
        }
    }
    *q = '\0';
}

int main() {
    char s[1000];

    printf("string: ");
    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    ConvertAndRemove(s);

    printf("novi string: %s\n", s);

    return 0;
}
