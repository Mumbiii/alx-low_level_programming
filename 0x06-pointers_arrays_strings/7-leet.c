#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be modified
 * Return: modified string
 */
char *leet(char *str)
{
	int i, j;
	char *letters = "aAeEoOtTlL";
	char *leet_s = "4433007711";

	i = 0;
	while (str[i])
	{
		j = 0;
		while (letters[j])
		{
			if (str[i] == letters[j])
				str[i] = leet_s[j];
			j++;
		}
		i++;
	}
	return (str);
}
