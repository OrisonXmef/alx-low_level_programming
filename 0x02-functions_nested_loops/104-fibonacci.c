#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 120;
	int i;
	unsigned int term1 = 1;
	unsigned int term2 = 2;

	printf("%u, %u", term1, term2);

	for (i = 0; i < x; i++)
	{
		unsigned int Currentterm = term1 + term2;

		printf(", %u", Currentterm);
		term1 = term2;
		term2 = Currentterm;
	}
	printf("\n");
	return (0);
}
