#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints the second half of a string followed by a new line
 * @str: a pointer to a string (array of characters)
 */
void puts_half(char *str)
{
	int length = 0;
	int half;

	while (str[length] != '\0')
	{
		length++;
	}
	half = (length + 1) / 2;
	while (str[half] != '\0')
	{
		putchar(str[half]);
		half++;
	}
	putchar('\n');
}
