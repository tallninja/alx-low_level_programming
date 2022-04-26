#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: list
 * @idx: index
 * @n: data/value
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *node;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	node = *head;
	while (i < idx)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
		i++;
	}

	new_node->next = node->next;
	node->next = new_node;

	return (new_node);
}
