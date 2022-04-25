#include "lists.h"

/**
 * list_len - calculates the number of elements
 * in a linked list
 * @h: linked list
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->next == NULL)
		return (1);

	return (1 + list_len(h->next));
}
