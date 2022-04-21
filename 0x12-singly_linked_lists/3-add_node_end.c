#include "lists.h"

/**
 * add_node_end - adds a new node to the end of a list
 * @head: head of the list
 * @str: value of the node
 * Return: pointer to the last node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	char *n_str;

	if (str == NULL)
		return (NULL);

	n_str = strdup(str);
	if (n_str == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = n_str;
	node->len = strlen(n_str);
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL) /* loop until end of the list */
			last_node = last_node->next;

		last_node->next = node;
	}

	return (node);
}
