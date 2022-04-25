#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using
 * malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: size in bytes of ptr
 * @new_size: size of new memory block
 * Return: pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			*((char *)new_ptr + i) = *((char *)ptr + i);
	}

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			*((char *)new_ptr + i) = *((char *)ptr + i);
	}

	free(ptr);

	return (new_ptr);
}
