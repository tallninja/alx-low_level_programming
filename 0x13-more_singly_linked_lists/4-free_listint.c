#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *next_node;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
