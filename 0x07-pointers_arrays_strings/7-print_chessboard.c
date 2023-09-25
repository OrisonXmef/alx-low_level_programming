#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard represented by an 8x8 character array
 * @a: The 8x8 character array representing the chessboard.
 *
 * This function prints the chessboard configuration to the standard output.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
