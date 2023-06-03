#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @str: string to be duplicated
 * @head: A pointer to the head pointer of the list
 * Return: The address of the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t count = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}
	while (str[count])
		count++;

	new_node->len = count;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
