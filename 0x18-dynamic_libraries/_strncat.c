#include "main.h"

/**
 * _strncat - concatenate a piece of string from src to dest
 * @dest: destination
 * @src: source
 * @n: number of chars to concatenate
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	if (src == NULL || dest == NULL || n > _strlen(src))
		return (NULL);

	while (dest[i] != '\n')
		i++;
	while (j < n)
	{
		dest[i] = src[j];
		i++, j++;
	}
	dest[i] = '\0';

	return (dest);
}
