#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;

	hash_table = malloc(sizeof(void *) * size);
	if (hash_table == NULL)
		return (NULL);
	return (hash_table);
}
