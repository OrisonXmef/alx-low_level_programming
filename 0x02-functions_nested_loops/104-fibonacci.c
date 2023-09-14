#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 122;
	int i;
	unsigned int term1 = 1;
	unsigned int term2 = 3;

	printf("%u, %u", term1, term2);

	for (i = 1; i < x; i++)
	{
		unsigned int Currentterm = term1 + term2;

		printf(", %u", Currentterm);
		term1 = term2;
		term2 = Currentterm;
	}
	printf("\n");
	return (0);
}
