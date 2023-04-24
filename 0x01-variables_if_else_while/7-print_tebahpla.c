#include <stdio.h>

/**
 * main - entry point
 * Description: prints reverse alphabet with putchar
 * Return: always 0(success)
 */

int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
	{
		putchar(m);
	}
	putchar(10);
	return (0);
}
