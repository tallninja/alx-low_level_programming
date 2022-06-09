#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head);
		}
		free(head);
	}
}
