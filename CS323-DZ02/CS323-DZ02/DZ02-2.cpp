#include <stdio.h>

int minimum(int a, int b, int c) {
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
}

int isTriangle(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        return 1;
    }
    else {
        return 0; 
    }
}

int main() {
    int a, b, c;

    printf("a, b, c: ");
    scanf_s("%d %d %d", &a, &b, &c);

    int min_value = minimum(a, b, c);
    printf("najmanja je: %d\n", min_value);

    if (isTriangle(a, b, c)) {
        printf("moze\n");
    }
    else {
        printf("ne moze\n");
    }

    return 0;
}
