#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int term1 = 1;
	unsigned long int term2 = 2;
	unsigned long int currentterm = 0;
	unsigned long int total = 0;

	while (term1 <= 4000000)
	{
		if (term1 % 2 == 0)
		{
			total += term1;
		}
		currentterm = term1 + term2;
		term1 = term2;
		term2 = currentterm;
	}
	printf("%lu\n", total);
	return (0);
}
