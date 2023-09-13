#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 50;
	int i;
	unsigned long int *fib = (unsigned long *)malloc(n * sizeof(unsigned long));
	if (fib == NULL)
	{
            perror("Memmory allocation failed");
            return (1);
	}
	fib[0] = 1;
	fib[1] = 2;
	
	for (i = 2; i < n; i++)
	{
        fib[i] = fib[i - 1] + fib[i - 2];
        }

        for (i = 0; i < n; i++)
	{
        printf("%lu", fib[i]);
	if (i < n - 1)
        {
		printf(", ");   
	}
	}
	printf("\n");
	free(fib);
	return (0);
}
