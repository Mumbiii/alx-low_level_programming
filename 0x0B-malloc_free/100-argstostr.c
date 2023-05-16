#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: result
 */

char *argstostr(int ac, char **av)
{
	int total_length;
	int i;
	char *result;
	int index;
	int arg_length;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = 0;

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]);

	total_length += ac;

	result = (char *)malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	index = 0;
	for (i = 0; i < ac; i++)
	{
		arg_length = strlen(av[i]);
		strncpy(result + index, av[i], arg_length);
		index += arg_length;
		result[index] = '\n';
		index++;
	}
	result[index] = '\0';

	return (result);
}
