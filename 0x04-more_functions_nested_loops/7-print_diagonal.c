#include "main.h"

/**
* print_diagonal - draws a diagonal line
* @n: number of times the character \ should be printed
* Return: nothing
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
	}
}
