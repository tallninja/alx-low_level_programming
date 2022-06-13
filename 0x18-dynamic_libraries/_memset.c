#include "main.h"

/**
 * _memset - fill the first n bytes of memory with a constant byte
 * @s: string
 * @b: bytes to fill
 * @n: number of bytes to fill
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (s == NULL)
		return (NULL);

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
