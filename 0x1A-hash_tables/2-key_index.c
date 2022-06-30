#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: key
 * @size: size of the array of the hash table
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
