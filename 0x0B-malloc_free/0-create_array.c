#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: initaialize the array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	arr[i + 1] = '\0';

	return (arr);
}
