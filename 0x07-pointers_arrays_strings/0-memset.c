#include "main.h"

/**
* _memset -  function fills the first n
* bytes of the memory area pointed to by
* s with the constant byte b
* @s: pointer to memory
* @b: constant to fill the memory area
* @n: number of bytes
* Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
