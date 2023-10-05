#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value to include.
 * @max: The maximum value to include.
 *
 * Return: Pointa to the newly crated array or NULL on failure or if min > max.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
