#include "main.h"

/**
 * _pow - calculates a number raised by exponent
 * @num: number
 * @exp: exponent
 * Return: number^exponent
 */

int _pow(int num, int exp)
{
	int result = 1;

	if (exp == 0)
		return (result);

	while (exp > 0)
		result *= num, exp--;

	return (result);
}

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary number
 * Return: converted integer or 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, num = 0, len = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num += (b[i] - '0') * _pow(2, (len - (i + 1)));
	}

	return (num);
}
