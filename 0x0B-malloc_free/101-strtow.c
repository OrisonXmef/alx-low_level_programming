#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_whitespace - Check if a character is a whitespace character.
 * @c: The character to check.
 *
 * Return: 1 if the character is whitespace, 0 otherwise.
 */
int is_whitespace(char c)
{
	return (c == ' ');
}

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int word_count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_whitespace(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			word_count++;
		}
		str++;
	}
	return (word_count);
}

/**
 * safe_strdup - Safely duplicate a string.
 * @str: The input string to duplicate.
 *
 * Return: A newly allocated string containing a duplicate of str.
 *         NULL on memory allocation failure.
 */
char *safe_strdup(char *str)
{
	char *dup_str = strdup(str);

	if (dup_str == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(EXIT_FAILURE);
	}
	return (dup_str);
}

/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * Return: A dynamically allocated array of strings (words) terminated by NULL.
 * NULL is returned if str is NULL, empty, or if memory allocation fails.
 */
char **strtow(char *str)
{
	char **words;
	int i;
	char *token;
	int num_words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	num_words = count_words(str);

	if (num_words == 0)
	{
		return (NULL);
	}

	words = (char **)malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}
	i = 0;
	token = strtok(str, " ");

	while (token != NULL)
	{
		words[i] = safe_strdup(token);
		i++;
		token = strtok(NULL, " ");
	}
	words[i] = NULL;

	return (words);
}
