#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number to generate the times table for
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, results;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{ 
				results = i * j;
				if (j == 0)
					printf("%d", results);
				else
					printf("%d", results);

				if (j < n)
				{
				       	if (results < 10)
						printf(", ");
					else if (results < 100)
						printf(", ");
					else 
						printf(", ");
				}
				else 
					printf("\n");
			}
		}
	}
}
