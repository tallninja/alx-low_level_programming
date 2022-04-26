#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head
 * Return: head node vale
 */

int pop_listint(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return (0);

	node = *head;
	*head = node->next;

	return (node->n);
}
