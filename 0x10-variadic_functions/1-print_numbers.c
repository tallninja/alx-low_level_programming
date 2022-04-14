#include "variadic_functions.h"

/**
 * print_numbers - prints numbers seperated by a seperator
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_ptr;

	va_start(arg_ptr, n);

	for (i = 0; i < n - 1; i++)
	{
		if (seperator == NULL)
			printf("%d", va_arg(arg_ptr, int));
		else
			printf("%d%s", va_arg(arg_ptr, int), seperator);
	}

	printf("%d\n", va_arg(arg_ptr, int));

	va_end(arg_ptr);
}
