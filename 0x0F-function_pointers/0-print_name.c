#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: pointer to the name
 * @f: pointer to function f;
 */

void print_name(char *name, void (*f)(char *))
{
	char *str;

	str = malloc(sizeof(char) * _strlen(name));

	if (str == NULL)
		return;

	f(_strcpy(name, str));
}
