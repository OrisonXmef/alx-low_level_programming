#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer in a specific format.
 * @b: The buffer to be printed.
 * @size: The number of bytes to print from the buffer.
 *
 * Description: This function prints the content of the buffer @b in a
 * specific format. It displays 10 bytes per line, along with their
 * hexadecimal values and ASCII representations.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");
			if (j % 2 == 1)
				printf(" ");
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] >= 32 && b[i + j] <= 126)
					printf("%c", b[i + j]);
				else
					printf(".");
			}
		}
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
