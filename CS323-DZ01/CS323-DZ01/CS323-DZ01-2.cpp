#include <stdio.h>

int main() {
    float feet, meters;
    const float conversion_factor = 0.305;

    printf("Unesite broj stopa: ");
    scanf_s("%f", &feet);

    meters = feet * conversion_factor;

    printf("%.2f stopa je %.2f metara\n", feet, meters);

    return 0;
}