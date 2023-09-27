/**
 * is_divisible - Helper function to check if n is divisible by a divisor.
 * @n: The number to check for divisibility.
 * @divisor: The potential divisor to check.
 *
 * Return: 1 if n is divisible by divisor, 0 otherwise.
 */

int is_divisible(int n, int divisor)
{
	if (n == divisor)
	{
		return (1);
	}

	if (n % divisor == 0 || n == 1)
	{
		return (0);
	}
	return (is_divisible(n, divisor + 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if @n is a prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_divisible(n, 2));
}
