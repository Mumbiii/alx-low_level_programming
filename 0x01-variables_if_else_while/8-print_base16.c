#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, followed by a new line
 * Return: Always 0(success)
 */

int main(void)
{
	char m = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(m);
		m++;
	}
	m = 'a';
	for ( i= 0; i < 6; i++)
	{
		putchar(m);
		m++;
	}
	putchar(10);
	return (0);
}


