#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using ROT13
 * @str: the input string
 * Return: a pointer to the resulting encoded string
 */
char *rot13(char *str)
{
	char *start = str;
	char rot13_table[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			*str = rot13_table[*str - ((*str >= 'a') ? 'a' : 'A')];
		}
		str++;
	}
	return (start);
}
