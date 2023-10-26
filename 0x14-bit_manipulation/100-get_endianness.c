/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if the system is big-endian, 1 if it's little-endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endianCheck = (char *)&num;

	/* If the first byte of num is 1, the system is little-endian*/
	if (*endianCheck == 1)
		return (1); /* Little-endian*/
	else
		return (0); /* Big-endian*/
}

