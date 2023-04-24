#include <stdio.h>

/**
 * main - prints numbers from 0 to 10
 * Return: always 0(success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar(10);
	return (0);
}
