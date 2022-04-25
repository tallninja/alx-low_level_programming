#include "lists.h"

/**
 * free_node - frees space accupied by linked list
 * @node: node
 */

void free_node(list_t *node)
{
	free(node->str);
	free(node);
}

/**
 * free_list - frees a linked list
 * @head: pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free_node(head);
		head = next_node;
	}
}
