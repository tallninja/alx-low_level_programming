#include "lists.h"

/**
 * free_listint2 - sets the head to NULL
 * @head: head
 */

void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}

	**head = NULL;
}
