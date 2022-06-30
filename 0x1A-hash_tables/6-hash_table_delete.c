#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table.
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			node = ht->array[i];
			free(node->key);
			free(node->value);
			ht->array[i] = ht->array[i]->next;
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}
