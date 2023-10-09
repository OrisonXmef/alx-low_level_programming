#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function serves as the entry point of the program.
 * It prints the name of the source file it was compiled from.
 *
 * Return: 0 on success.
 */

int main(void)
{
	printf("Compiled from file: %s\n", __FILE__);

	return (0);
}
