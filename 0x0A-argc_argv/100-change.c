#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change for an amount.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 if successful, 1 for errors.
 */
int main(int argc, char *argv[])
{
	int count = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int i;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
