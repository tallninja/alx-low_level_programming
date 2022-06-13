#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string
 * @accept: string to search for
 * Return: pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	if (s == NULL || accept == NULL)
		return (NULL);

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}

	return (NULL);
}
