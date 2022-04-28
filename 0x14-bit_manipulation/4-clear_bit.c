#include "main.h"

/**
 * clear_bit - sets the value if a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index
 * Return: 1 if successful and -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
