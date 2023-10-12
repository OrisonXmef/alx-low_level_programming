#include <stdio.h>
/**
 * array_iterator - Execute a function on each element of an array.
 * @array: The integer array.
 * @size: The size of the array.
 * @action: A pointer to the function to be applied to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	
}
/**
 * print_int - Print an integer.
 * @x: The integer to be printed.
 */
void print_int(int x)
{
	printf("%d\n", x);
}

