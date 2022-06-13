#include "main.h"

/**
 * _memcpy - copy n bytes src to dest
 * @src: source
 * @dest: destination
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (dest == NULL || src == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
