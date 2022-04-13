#include "function_pointers.h"

/**
 * _strcpy - creates a copy of a string
 * @src: the string to be copied
 * @dest: the copy of the string
 * Return: the copy of the string
 */

char *_strcpy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = src[i];

	return (dest);
}
