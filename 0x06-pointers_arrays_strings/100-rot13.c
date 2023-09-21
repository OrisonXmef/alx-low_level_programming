#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using ROT13
 * @str: the input string
 * Return: a pointer to the resulting encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char alpha_upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha_lower[] = "abcdefghijklmnopqrstuvwxyz";

	while (*ptr)
	{
		char *lower = alpha_lower;
		char *upper = alpha_upper;

		if (*ptr >= 'a' && *ptr <= 'z')
		{
			while (*lower)
			{
				if (*ptr == *lower)
				{
					*ptr = (lower - alpha_lower + 13) % 26 + 'a';
					break;
				}
				lower++;
			}
		}
		else if (*ptr >= 'A' && *ptr <= 'Z')
		{
			while (*upper)
			{
				if (*ptr == *upper)
				{
					*ptr = (upper - alpha_upper + 13) % 26 + 'A';
					break;
				}
				upper++;
			}
		}
		ptr++;
	}
	return (str);
}
