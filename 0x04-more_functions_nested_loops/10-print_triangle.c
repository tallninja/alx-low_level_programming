#include "main.h"

/**
* print_triangle - prints a triangle
* @size: size of the triangle
* Return: nothing
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = i; j < size - 1; j++)
		{
			_putchar(' ');
		}

		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
