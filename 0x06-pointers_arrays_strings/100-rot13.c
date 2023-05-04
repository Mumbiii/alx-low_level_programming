#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: encoded string
 */
char *rot13(char *s)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;
	int i;

	while (*s)
	{
		for (i = 0; alph[i]; i++)
		{
			if (*s == alph[i])
			{
				*s = rot[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
