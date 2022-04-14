#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @seperator: printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_ptr;

	va_start(arg_ptr, n);

	for (i = 0; i < n - 1; i++)
	{
		char *str = va_arg(arg_ptr, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (seperator)
			printf("%s", seperator);
	}

	printf("%s\n", va_arg(arg_ptr, char *));

	va_end(arg_ptr);
}
