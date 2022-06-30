#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr = NULL;
	unsigned int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			curr = ht->array[i];
			free(curr->key);
			free(curr->value);
			ht->array[i] = ht->curr[i]->next;
			free(curr);
		}
	}
	free(ht->array);
	free(ht);
}
