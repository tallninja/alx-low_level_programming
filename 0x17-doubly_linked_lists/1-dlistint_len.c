#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int num_elements = 0;

	while (h)
	{
		num_elements += 1;
		h = h->next;
	}

	return (num_elements);
}
