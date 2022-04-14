#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @arg_ptr: pointer to the function argument
 */

void print_char(va_list arg_ptr)
{
	printf("%c", va_arg(arg_ptr, int));
}

/**
 * print_int - prints an integer
 * @arg_ptr: pointer to the argument
 */

void print_int(va_list arg_ptr)
{
	printf("%d", va_arg(arg_ptr, int));
}

/**
 * print_float - prints a floating point number
 * @arg_ptr: pointer to the argument
 */

void print_float(va_list arg_ptr)
{
	printf("%f", va_arg(arg_ptr, double));
}

/**
 * print_string - prints a string
 * @arg_ptr: pointer to the argument
 */

void print_string(va_list arg_ptr)
{
	char *str = va_arg(arg_ptr, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of argument typer passed
 * to the function
 */

void print_all(const char *const format, ...)
{
	int i, j;
	va_list arg_ptr;
	char *seperator = "";

	arg_t format_specifiers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}};

	va_start(arg_ptr, format);

	j = 0;
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (format_specifiers[i].code != '\0')
		{
			if (format_specifiers[i].code == format[j])
			{
				printf("%s", seperator);
				format_specifiers[i].print_func(arg_ptr);
				seperator = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(arg_ptr);
}
