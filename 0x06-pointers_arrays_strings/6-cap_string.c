#include "main.h"
#include <stdbool.h>

/**
 * is_separator - checks if a character is a word separator
 * @c: the character to check
 * Return: true if c is a separator, false otherwise
 */

bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;
		for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}
	return (false);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: the input string
 * Return: a pointer to the resulting string
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	while (str[i] != '\0')
	{
		if (is_separator(str[i]) && str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
