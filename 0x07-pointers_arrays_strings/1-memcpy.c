#include "main.h"

/**
* _memcpy - copies n bytes from
* memory area src to memory area dest
* @dest: destination address
* @src: source address
* @n: number of bytes
* Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
