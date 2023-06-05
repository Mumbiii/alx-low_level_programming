#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * in a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * @idx: The index of the list where the new node should be added.
 * @n: The value to be assigned to the n member of the new node.
 *
 * Return: If the function fails or the index is invalid, return NULL.
 *         Otherwise, return the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current = *head;
	listint_t *new_node;

	if (head == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
