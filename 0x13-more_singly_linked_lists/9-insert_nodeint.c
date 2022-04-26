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
	unsigned int i = 0;
	size_t len;

	if (*head == NULL)
		return (NULL);

	len = listint_len(*head);
	if (idx > len)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	node = *head;
	while (node != NULL && i < idx - 1)
		node = node->next, i++;

	if (node != NULL)
	{
		new_node->next = node->next;
		node->next = new_node;
	}
	else
	{
		new_node->next = NULL;
		node->next = new_node;
	}

	return (new_node);
}
