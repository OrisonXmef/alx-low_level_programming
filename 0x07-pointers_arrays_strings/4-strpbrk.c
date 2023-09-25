#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing bytes to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;  /* Reset the pointer to the beginning of accept */

		while (*a)
		{
			if (*s == *a)
			{
				return (s);  /* Match found, return the pointer to s */
			}
			a++;
		}
		s++;  /* Move to the next character in s */
	}
	return (NULL);  /* No match found, return NULL */
}
