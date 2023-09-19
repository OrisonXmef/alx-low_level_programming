#include "main.h"

/**
 * my_strcpy - copies a string (including '\0') from src to dest
 * @dest: a pointer to the destination buffer
 * @src: a pointer to the source string
 * Return: a pointer to dest
 */
char *my_strcpy(char *dest, const char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
