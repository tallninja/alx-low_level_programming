#include "function_pointers.h";

/**
 * _strlen - calculates the length of a string
 * @str: the string
 * Return: length of the given string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	len += 1;

	return (len);
}
