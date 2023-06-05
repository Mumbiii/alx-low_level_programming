#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 * index in a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if the node was successfully deleted, or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current, *prev;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	current = *head;
	prev = NULL;

	while (current != NULL && count < index)
	{
		prev = current;
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}
