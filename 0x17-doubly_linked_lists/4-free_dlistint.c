#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		head = current;
		free(head);
		current = current->next;
	}
	free(current);
}
