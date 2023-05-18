#include"main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum values range
 * @max: maximum values range
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
