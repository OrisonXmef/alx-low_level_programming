#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i = 0;
	int start = 0;
	int end;

	if (len1 + len2 + 1 > size_r)
	{
		return (0); /*Result cannot be stored in r*/
	}
	while (len1 > 0 || len2 > 0 || carry > 0)
	{
		int digit1 = (len1 > 0) ? n1[len1 - 1] - '0' : 0;
		int digit2 = (len2 > 0) ? n2[len2 - 1] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		r[i] = (sum % 10) + '0';

		i++;
		len1--;
		len2--;
	}
	if (carry > 0)
	{
		r[i] = carry + '0';
		i++;
	}
	r[i] = '\0';

	end = i - 1;

	while (start < end)
	{
		char temp = r[start];

		r[start] = r[end];
		r[end] = temp;
		start++;
		end--;
	}
	return (r);
}
