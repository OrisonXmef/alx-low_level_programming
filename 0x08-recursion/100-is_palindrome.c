#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int i, j;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		while (s[i] == ' ')
		{
			i++;
		}
		while (s[j] == ' ')
		{
			j--;
		}
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
