#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: compares each element of the array with the
 * integer we are looking for
 * Return: index of the first element for which the
 * cmp function does not return 0 if no element matches
 * or size <= 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	/* if no element matches */
	return (-1);
}
