#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for
 * any of a set of bytes
 * @s: the srting to be searched
 * @accept: occurence string
 * Return: pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no byte
 * is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		int j;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
