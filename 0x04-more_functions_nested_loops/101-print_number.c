#include "main.h"

/**
* print_number - prints an integer
* @n: integer to be printed
* Return: nothing
*/

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
	{
		m = n;
	}

	if (n / 10)
	{
		/* Recursion */
		print_number((m / 10));
	}

	_putchar((m % 10) + '0');
}
