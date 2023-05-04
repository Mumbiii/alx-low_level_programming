#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: the size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x", (unsigned char)b[i + j]);
			}
			else
			{
				printf("  ");
			}
			if (j % 2)
			{
				printf(" ");
			}
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%c", isprint(b[i + j]) ? b[i + j] : '.');
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}
	if (size <= 0)
	{
		printf("\n");
	}
}
