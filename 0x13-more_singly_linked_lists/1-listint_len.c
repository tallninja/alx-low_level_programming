#include "lists.h"

/**
 * listint_len - returns the number of elements
 * in a linked list
 * @h: linked list
 * Return: number of elements in h
 */

size_t listint_len(const listint_t *h)
{
	unsigned int num_elements = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		num_elements++;
	}

	return (num_elements);
}
