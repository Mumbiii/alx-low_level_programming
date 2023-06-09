#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @src: pointer to the source string
 * @dest: pointer to destination string
 * Return: pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
