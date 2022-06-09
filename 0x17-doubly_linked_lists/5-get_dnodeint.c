#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head
 * @index: index
 * Return: node if exists, NULL if not
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = head;

	if (head == NULL)
		return (NULL);

	while (node != NULL)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
