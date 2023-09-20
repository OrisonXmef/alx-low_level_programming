#include "main.h"
#include <stdio.h>

/**
 * puts2 prints every other character of a string, starting with the first line
 * @str: a pointer to a string (array of characters)
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
