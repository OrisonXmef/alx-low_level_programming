#include <stdio.h>
#include <math.h>

int main(void)
{
	long int number = 612852475143;
	long int largest_prime = -1;

	while (number % 2 == 0)
	{
		largest_prime = 2;
		number /= 2;
	}
	
	for(long int i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largest_prime = i;
			number /= i;
		}
	}
	
	if (number > 2)
	{
		largest_prime = number;
	}
	printf("%ld\n", largest_prime);
	return (0);
}
