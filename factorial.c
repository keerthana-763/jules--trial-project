#include <stdio.h>

/**
 * Calculates the factorial of a given non-negative integer using an iterative loop.
 *
 * @param n Non-negative integer.
 * @return Factorial of n as an unsigned long long, or 0 if n is negative (invalid input).
 */
unsigned long long factorial(int n) {
    if (n < 0) {
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %llu\n", n, factorial(n));
    }

    return 0;
}
