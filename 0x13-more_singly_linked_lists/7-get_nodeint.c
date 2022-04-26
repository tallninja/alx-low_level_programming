#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head
 * @index: index
 * Return: node at index if exists, NULL otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	node = head;
	while (n != index && node != NULL)
		n++, node = node->next;

	return (node);
}
