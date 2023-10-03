#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
        int j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;

	while (s2[len2] != '\0')
	{
		len2++;
	}
	result = (char *)malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';
	return (result);
}
