#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: pointer to the string
* Return: nothing
*/

void print_rev(char *s)
{
	int j = 0;
	int i, length;

	while (s[j] != '\0')
	{
		j++;
	}

	length = j;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
