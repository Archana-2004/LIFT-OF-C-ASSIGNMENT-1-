#include <stdio.h>

void factorial(int n, int *result);

int main() {
    int num, fact = 1;
    int *ptr = &fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial(num, ptr);

    printf("Factorial of %d is %d\n", num, *ptr);

    return 0;
}

void factorial(int n, int *result) {
    int i;

    for (i = 1; i <= n; i++) {
        *result *= i;
    }
}
