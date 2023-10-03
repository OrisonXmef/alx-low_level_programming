#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The argument count.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 * Each argument is separated by a newline character in the concatenated string
 */

char *argstostr(int ac, char **av)
{
	int total_len;
	int i, j, k = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_len++;
		total_len++;
	}
	result = malloc(sizeof(char) * (total_len + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			result[k++] = av[i][j];
		result[k++] = '\n';
	}
	result[k] = '\0';

	return (result);
}
