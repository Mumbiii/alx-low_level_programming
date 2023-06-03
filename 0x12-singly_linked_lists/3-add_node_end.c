#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: A pointer to the head pointer of the list
 * @str: String to be duplicated
 * Return: The address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t count = 0;
	list_t *temp = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	while (str[count])
	{
		count++;
	}

	new_node->len = count;
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
