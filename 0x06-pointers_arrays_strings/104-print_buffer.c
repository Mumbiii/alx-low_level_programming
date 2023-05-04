#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: the size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int n, i, j;

	n = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (n < size)
	{
		j = (size - n < 10 ? size - n : 10);
		printf("%08x: ", n);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + n + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + n + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		n += 10;
	}
}
