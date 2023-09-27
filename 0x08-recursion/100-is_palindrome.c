#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * _is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 * @start: The start index.
 * @end: The end index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int _is_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (_is_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (_is_palindrome(s, 0, len - 1));
}
