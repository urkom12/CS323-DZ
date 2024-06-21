// CS323-DZ04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <string.h>

void Izbaci(char* s, char ch) {
    char* p = s;
    char* q = s;

    while (*p != '\0') {
        if (*p != ch) {
            *q = *p;
            q++;
        }
        p++;
    }
    *q = '\0';
}

int main2() {
    char s[100];
    char ch;

    printf("string: ");
    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    printf("znak: ");
    scanf_s(" %c", &ch);

    Izbaci(s, ch);

    printf("novi string posle brisanja '%c': %s\n", ch, s);

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
