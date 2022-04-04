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
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
