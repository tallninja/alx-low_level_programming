#include "main.h"

/**
 * set_bit - set bit to 1 at a given index
 * @n: pointer to the number
 * @index: index
 * Return: 1 if successful and -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	if (index > 63)
		return (-1);

	*n |= (1 << index);

	return (1);
}
