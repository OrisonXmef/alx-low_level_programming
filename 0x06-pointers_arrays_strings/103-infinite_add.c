#include <stdio.h>
#include <string.h>
/**
 * print_buffer - Prints the content of a buffer in a specific format.
 * @b: The buffer to be printed.
 * @size: The number of bytes to print from the buffer.
 exadecimal values and ASCII representations.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x1 = 0, x2 = 0, op, bg, dr1, dr2, add = 0;

	while (*(n1 + x1) != '\0')
			x1++;
	while (*(n2 + x2) != '\0')
		x2++;
	if  (x1 >= x2)
		bg = x1;
	else
		bg = x2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	x1--, x2--, size_r--;

	dr1 = *(n1 + x1) - '0';
	dr2 = *(n2 + x2) - '0';

	while (bg >= 0)
	{
		op = dr1 + dr2 + add;
		
		if (op >= 10)
			add = op / 10;

		else
			add = 0;

		if (op > 0)
		*(r + bg) = (op % 10) + '0';

		else
			*(r + bg) = '0';
		
		if (x1 > 0)
			x1--, dr1 = *(n1 + x1) - '0';

		else
			dr1 = 0;
		if (x2 > 0)
			x2--, dr2 = *(n2 + x2) - '0';
		else
			dr2 = 0;
		bg--, size_r--;
		}
	if (*r == '0')
		return (r + 1);
	else
		return (r);
}
