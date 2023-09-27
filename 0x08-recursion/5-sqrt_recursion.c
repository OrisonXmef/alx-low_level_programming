#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root for.
 * @i: The current candidate for the square root.
 *
 * Return: The natural square root of n, or -1 if it doesn't have a natural
 * square root.
 */
int _sqrt_helper(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Helper function for calculating the square root recursively.
 * @n: The number to calculate the square root for.
 * @i: The current candidate for the square root.
 *
 * Return: The natural square root of n, or -1 if it doesn't have a natural
 * square root.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

