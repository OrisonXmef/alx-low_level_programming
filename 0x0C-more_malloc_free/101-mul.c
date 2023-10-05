#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <gmp.h>

/**
 * multiply - Multiplies two positive integers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication.
 */
void multiply(const char *str1, const char *str2)
{
	mpz_t num1, num2, result;

	mpz_init(num1);
	mpz_init(num2);
	mpz_init(result);

	mpz_set_str(num1, str1, 10);
	mpz_set_str(num2, str2, 10);

	mpz_mul(result, num1, num2);

	gmp_printf("%Zd\n", result);

	mpz_clear(num1);
	mpz_clear(num2);
	mpz_clear(result);
}

/**
 * is_positive_number - Checks if a string is a positive number.
 * @str: The string to check.
 *
 * Return: 1 if it's a positive number, 0 otherwise.
 */
int is_positive_number(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	multiply(argv[1], argv[2]);
	return (0);
}

