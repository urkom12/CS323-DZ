// CS323-DZ03.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 1000
#define MAX_VALUE 9999

int main2() {
    int array[ARRAY_SIZE];
    int i, max_element;

    srand(time(0));

    for (i = 0; i < ARRAY_SIZE; i++) {
        array[i] = rand() % (MAX_VALUE + 1);
    }

    max_element = array[0];

    for (i = 1; i < ARRAY_SIZE; i++) {
        if (array[i] > max_element) {
            max_element = array[i];
        }
    }

    printf("Najveci element u nizu je: %d\n", max_element);

    return 0;
}

