/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The string containing characters to match.
 *
 * Return: The number of bytes in the initial segment of s that consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 1;  /* Flag to indicate if a character is found in accept */

	while (*s && found)
	{
		char *a = accept;  /* Reset the pointer to the beginning of accept */

		found = 0;  /* Reset the found flag */
	while (*a)
	{
		if (*s == *a)
		{
			found = 1;  /* Character found in accept */
			break;
		}
		a++;
	}

	if (found)
	{
		count++;
		s++;
	}
	}
	return (count);
}
