#include <stdio.h>
#include <string.h>

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
	const char *file = __FILE__;
	const char *name = strrchr(file, '/');

	file = __FILE__;
	name = strrchr(file, '/');
	if (name == NULL)
	{
		name = file;
	}
	else
	{
		name++;
	}
	printf("%s\n", name);

	return (0);
}
