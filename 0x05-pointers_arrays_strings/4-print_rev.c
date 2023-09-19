#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: a pointer to a string (array of characters)
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	while (length > 0)
	{
		s--;
		putchar(*s);
		length--;
	}
	putchar('\n');
}
