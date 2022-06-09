#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position 
 * @h: head
 * @idx: index
 * @n: data
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		free(new_node);
		return (add_dnodeint(h, n));
	}

	new_node->n = n;
	current = *h;
	for (i = 0; i != idx; i++)
	{
		current = current->next;
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	new_node->next = current;
	new_node->prev = current->prev;
	current->prev->next = new_node;

	if (new_node->next != NULL)
		current->next->prev = new_node;
	return (new_node);
}
