#include <iostream>

#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main2() {
    for (int num = 100; num <= 999; num++) {
        int original_num = num;
        int sum_of_factorials = 0;

        while (original_num > 0) {
            int digit = original_num % 10;
            sum_of_factorials += factorial(digit);
            original_num /= 10;
        }

        if (num == sum_of_factorials) {
            printf("%d\n", num);
        }
    }

    return 0;
}
