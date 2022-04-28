#include "main.h"

/**
 * flip_bits -  returns the number of bits you would
 * need to flip to get from one number to another
 * @n: initial number
 * @m: target number
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, xor = n ^ m;

	while (xor)
	{
		if (xor & 1)
			count++, xor >>= 1;
		else
			xor >>= 1;
	}

	return (count);
}
