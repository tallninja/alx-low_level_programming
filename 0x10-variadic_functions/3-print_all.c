#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @valist: valist
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - prints an int
 * @valist: valist
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - prints a float
 * @valist: valist
 */
void print_float(va_list valist)
{
	printf("%.6f", va_arg(valist, double));
}

/**
 * print_string - prints an string
 * @valist: valist
 */
void print_string(va_list valist)
{
	char *s;

	s = va_arg(valist, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints arguments type char, int, string, float
 * @format: a list of types of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char *const format, ...)
{
	int i, j = 0;
	va_list args;
	char *separator = "";

	char_type chars[] = {{'c', print_char},
						 {'i', print_int},
						 {'f', print_float},
						 {'s', print_string},
						 {'\0', NULL}};

	va_start(args, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (chars[i].letter != '\0')
		{
			if (chars[i].letter == format[j])
			{
				printf("%s", separator);
				chars[i].func(args);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(args);
	printf("\n");
}