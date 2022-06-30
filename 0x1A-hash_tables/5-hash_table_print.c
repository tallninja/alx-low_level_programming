#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *curr = NULL;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			printf("%s'%s': '%s'", sep, curr->key, curr->value);
			sep = ", ";
			curr = curr->next;
		}
	}
	printf("}\n");
}
