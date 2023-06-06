#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

	if (slow == fast)
	{
		printf("-> [%p] %d\n", (void *)slow, slow->n);
		break;
	}
	count++;
	}

	if (fast == NULL || fast->next == NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}
	return (count);
}
