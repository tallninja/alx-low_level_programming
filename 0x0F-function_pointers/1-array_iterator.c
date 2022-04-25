#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function on each
 * element of an array
 * @array: array with the given elements
 * @size: size of the array
 * @action: the action performed on each element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
