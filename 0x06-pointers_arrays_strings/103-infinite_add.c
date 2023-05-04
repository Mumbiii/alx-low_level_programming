#include "main.h"
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - adds two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 *
 * Return: pointer to the result or 0 if it can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, lenr, carry, sum, i, j;

	len1 = strlen(n1);
	len2 = strlen(n2);

	if (len1 > size_r || len2 > size_r)
		return (0);

	lenr = len1 > len2 ? len1 : len2;
	if (lenr + 1 > size_r)
		return (0);

	r[lenr] = '\0';
	carry = 0;

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--, lenr--)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i] - '0';

		if (j >= 0)
			sum += n2[j] - '0';

		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
		{
			carry = 0;
		}

		r[lenr - 1] = sum + '0';
	}
	if (carry)
	{
		if (lenr < 2)
			return (0);
		r[lenr - 2] = '1';
		return (r + lenr - 2);
	}
	return (r + lenr - 1);
}
