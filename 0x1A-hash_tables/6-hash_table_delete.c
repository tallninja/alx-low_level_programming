#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr = NULL, *temp = NULL;
	unsigned int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			temp = curr;
			free(temp->key);
			free(temp->value);
			curr = curr->next;
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
