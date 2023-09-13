#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    int n = 50;
    int i;
    unsigned long long int fib[n];

    fib[0] = 1;
    fib[1] = 2;

        for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
	for (i = 0; i < n; i++) {
        printf("%llu", fib[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }

    printf("\n");

    return (0);
}
