#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 * Return: Always 0(success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar(10);
	return (0);
}
