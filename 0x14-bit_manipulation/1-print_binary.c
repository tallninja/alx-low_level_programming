#include "main.h"

/**
 * print_binary - prints a binary representation of a number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n)
	{
		if (n & 1)
			str[i] = '1';
		else
			str[i] = '0';

		n >>= 1;
		i++;
	}

	for (i = strlen(str); i >= 0; i--)
		_putchar(str[i]);
}
