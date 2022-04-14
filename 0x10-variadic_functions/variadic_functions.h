#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

/**
 * struct arg - contains the code for the
 * argument trype and the corresponding
 * print function
 * @code: character code
 * @print_func: function to print the argument
 */

typedef struct arg
{
	char code;
	void (*print_func)(va_list);
} arg_t;

#endif
