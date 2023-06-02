#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: A pointer to the head or starting node of the linked list
 * Return: The number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current;

	if (h == NULL)
	{
		printf("[0](nil)");
		return (count);
	}
	current = h;

	while (current != NULL)
	{
		count++;
		printf("%s\n", current->str);
		current = current->next;
	}
	return (count);
}
