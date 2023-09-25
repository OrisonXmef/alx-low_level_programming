#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found. If c is '\0', returns a pointer to de
 * null terminator of the string s.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);  /* Return pointer to the null terminator for empty string */
	}
	return (NULL);  /* Character not found */
}
