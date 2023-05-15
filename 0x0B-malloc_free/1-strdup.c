#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: input string
 *
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	size_t length;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	length = strlen(str);
	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);
	return (duplicate);
}
