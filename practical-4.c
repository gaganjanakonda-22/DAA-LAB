#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }

    if (num > 20) {
        printf("Error: Number too large. Standard integers overflow above 20!.\n");
        return 1;
    }

    unsigned long long fact = factorial(num);
    printf("The factorial of %d is: %llu\n", num, fact);

    return 0;
}
