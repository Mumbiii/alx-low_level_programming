#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase, and
 * Description: then in uppercase followed by a new line
 * Return: always 0(success)
 */

int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar(10);
	return (0);
}
