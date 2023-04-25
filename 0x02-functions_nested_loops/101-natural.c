#include <stdio.h>

/**
 * main -  list all the natural numbers below 10
 * that are multiples of 3 or 5, we get 3, 5, 6 and 9
 * Return: Always 0
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
