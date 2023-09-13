#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
int main(void)
{
	unsigned long int term1 = 1;
	unsigned long int term2 = 2;
	unsigned long int currentterm = 0;
	unsigned long int total = 0;

	while (term1 <= 4000000)
	{
		if (term1 %2 == 0) 
		{ 
			sum += term1;
		}
		currentterm = term1 + term2; 
		term1 = term2; 
		term2 = currentterm;
	}
	printf("%lu\n", sum);
	return 0;
}
