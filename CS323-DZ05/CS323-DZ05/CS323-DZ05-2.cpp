#include <stdio.h>
#include <stdlib.h>

void mergeArrays(int* a, int* b, int* c, int n) {
    for (int i = 0; i < n; i++) {
        c[2 * i] = a[i];
        c[2 * i + 1] = b[i];
    }
}

int main2() {
    int n;
    printf("Unesite broj n (n < 20): ");
    scanf_s("%d", &n);

    int* a = (int*)malloc(n * sizeof(int));
    int* b = (int*)malloc(n * sizeof(int));
    int* c = (int*)malloc(2 * n * sizeof(int));

    printf("Unesite niz a duzine %d:\n", n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &a[i]);
    }

    printf("Unesite niz b duzine %d:\n", n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &b[i]);
    }

    mergeArrays(a, b, c, n);

    printf("Rezultujuci niz c naizmenicnim mesanjem elemenata nizova a i b:\n");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    free(a);
    free(b);
    free(c);

    return 0;
}
