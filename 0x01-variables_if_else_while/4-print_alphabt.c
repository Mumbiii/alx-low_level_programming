#include <stdio.h>

/**
 * main - Print all the letters except q and e
 * Return: Always 0(success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar(10);
	return (0);
}
