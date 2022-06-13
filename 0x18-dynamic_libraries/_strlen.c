#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
	unsigned int len = 0;

	if (s == NULL)
		return (0);
	while (s[len] != '\0')
		len++;

	return (len);
}
