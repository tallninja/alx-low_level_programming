#include "lists.h"

/**
 * sum_listint - return the sum of all the data
 * of a linked list
 * @head: head
 * Return: sum of values
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	if (head == NULL)
		return (sum);

	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
