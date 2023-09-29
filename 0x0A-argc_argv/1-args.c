#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Suppress unused variable warning */

	printf("%d\n", argc - 1);
	return (0);
}
