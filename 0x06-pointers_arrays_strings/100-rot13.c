#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13 substitution.
 * @s: The input string to be encoded.
 *
 * Return: A pointer to the resulting encoded string.
 */

char *rot13(char *s)
{
	int i = 0, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
