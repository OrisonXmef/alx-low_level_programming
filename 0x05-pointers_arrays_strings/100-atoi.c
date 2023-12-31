#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: a pointer to a string
 *
 * Return: the converted integer value
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	 if (s[i] == '-')
	 {
		 sign = -1;
		 i++;
	 }
	 else if (s[i] == '+')
	 {
		 i++;
	 }
	 while (s[i] >= '0' && s[i] <= '9')
	 {
		 result = result * 10 + (s[i] - '0');
		 i++;
	 }

    return (result * sign);
}
