#include "main.h"

/**
 * print_binary - prints a binary representation of a number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	int i = 0, len = 0;
	unsigned long int temp = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (temp)
	{
		temp >>= 1;
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
