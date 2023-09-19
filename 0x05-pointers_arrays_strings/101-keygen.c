#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12
/**
 * _atoi - converts a string to an integer
 * @s: a pointer to a string
 *
 * Return: the converted integer value
 */

int main(void)
{
	const char charset[] = "abcdefghijklmstuxyzABCDEFGHIJKLMNOPQRSTUVWXYZ3456789";
	char password[PASSWORD_LENGTH + 1];
	int charset_length = sizeof(charset) - 1;

	srand((unsigned int)time(NULL));
	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		int index = rand() % charset_length;

		password[i] = charset[index];

	}
	password[PASSWORD_LENGTH] = '\0';
	printf("Generated Password: %s\n", password);
	return (0);
}
