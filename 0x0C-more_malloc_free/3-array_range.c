#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value included
 * @max: maximum value included
 * Return: Pointer to the array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, nel;

	if (min > max)
		return (NULL);

	nel = (max - min) + 1;

	arr = malloc(nel * sizeof(int));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < nel; i++)
		arr[i] = min + i;

	return (arr);
}
