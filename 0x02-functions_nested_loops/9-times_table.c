#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: nothing
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			int product = col * row;

			if (product > 9 && col == 0)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				if (col != 0)
				{
					_putchar(' ');
				}
				_putchar(product + '0');
			}

			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
