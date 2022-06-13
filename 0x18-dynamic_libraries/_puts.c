#include "main.h"

/**
 * _puts - writes a string to stdout
 * @s: string
 * Return: Nothing
 */

void _puts(char *s)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}
