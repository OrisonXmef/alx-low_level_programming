#include "main.h"

/**
 * _strncpy - copies a string from src to dest, up to n characters
 * @dest: the destination string
 * @src: the source string to copy
 * @n: the maximum number of characters to copy from src
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{*dest = '\0';
		dest++;
		n--;
	}
	return (result);
}
