#include <stdio.h>

/**
 * main - Entry point for the FizzBuzz program
 *
 * Description:
 * The program prints numbers from 1 to 100, replace multiples of 3 with "Fizz"
 * multiples of 5 with "Buzz," and multiples of both 3 and 5 with "FizzBuzz."
 *
 * Return:
 * 0 (Success) - This program returns 0 upon successful execution.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
