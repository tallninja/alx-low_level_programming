#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase
* Return: nothing
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char chr;

		for (chr = 'a'; chr <= 'z'; chr++)
		{
			_putchar(chr);
		}
		_putchar('\n');
	}
}
