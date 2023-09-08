#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
putchar('0'); // Print the first digit
for (int i = 1; i < 10; i++) {
putchar(','); // Print the separator
putchar(' '); // Print the space
putchar(i + '0'); // Print the next digit
}
putchar('\n'); // Print a new line
return (0);
}
