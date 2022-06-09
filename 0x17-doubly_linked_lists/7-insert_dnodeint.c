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
	dlistint_t *new_node = NULL, *temp = NULL;
	unsigned int i = 0, last_idx = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	
	if (idx == 0)
		return(add_dnodeint(h, n));

	temp = *h;
	while (temp != NULL)
		last_idx += 1, temp = temp->next;
	temp = *h;

	if (idx > last_idx)
		return (NULL);

	if (idx == last_idx)
		return (add_dnodeint_end(h, n));

	while (temp->next != NULL)
	{
		if (i == idx)
		{
			new_node->n = n;
			new_node->next = temp;
			new_node->prev = temp->prev;
			(temp->prev)->next = new_node;
			temp->prev = new_node;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
