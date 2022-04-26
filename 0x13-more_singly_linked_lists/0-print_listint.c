#include "lists.h"

/**
 * print_listint - prints all the elements of a
 * listint_t list
 * @h: list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int num_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
