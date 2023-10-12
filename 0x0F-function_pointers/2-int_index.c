#include <stddef.h>

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A pointer to a function used for comparison.
 *
 * Return: The index of the first elment for which cmp return a non-zero value,
 * or -1 if no element match the criteria or if size is les than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
