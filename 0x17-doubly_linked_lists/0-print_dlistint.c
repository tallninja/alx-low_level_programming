#include "lists.h"

/**
 * print_dlistint - prints all elements in dlistint_t list
 * @h: head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_nodes += 1;
		h = h->next;
	}

	return (num_nodes);
}
