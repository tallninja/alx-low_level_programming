#include "main.h"

/**
* print_alphabet - prints the alphabet, in lowercase, followed by a new line
* Return: nothing
*/
void print_alphabet(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		_putchar(chr);
	}
	_putchar('\n');
}
