#include <stdio.h>
#include <stdlib.h>
/**
 * Print the opcodes of a given memory region.
 *
 * @param start Pointer to the start of the memory region.
 * @param size  Number of bytes to print.
 */
void print_opcodes(unsigned char *start, int size);
/**
 * The main function reads the number of bytes and prints opcodes.
 *
 * @param argc Number of command-line arguments.
 * @param argv Array of command-line argument strings.
 * @return 1 f de numba f argmt s incoret 2 f de numba f byt s negtv 0 n suces.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	printf("the opcodes should be printed in hexadecimal, lowercase\n");
	printf("each opcode is two char long\n");
	printf("listing ends with a new line\n");
	print_opcodes((unsigned char *)main, num_bytes);
	return (0);
}
/**
 * print_opcodes - Prints the opcodes of a given memory region.
 *
 * @start: Pointer to the start of the memory region.
 * @size: Number of bytes to print.
 */
void print_opcodes(unsigned char *start, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%02x", start[i]);
	}
	printf("\n");
}
