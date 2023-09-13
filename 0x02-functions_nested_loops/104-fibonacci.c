#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 98;
	int i;
	unsigned int T1 = 1;
	unsigned int T2 = 2;
	printf("%u, %u", T1, T2);
	
	for (i = 2; i < n; i++)
	{
		unsigned int Currentterm = T1 + T2;
		printf(", %u", Currentterm);
		T1 = T2;
		T2 = Currentterm;
	}
	printf("\n");
	return (0);
}
