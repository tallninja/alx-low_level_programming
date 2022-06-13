#include "main.h"

/**
 * _strcpm - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if string are equal, 0 if not
 */

int _strcmp(char *s1, char *s2)
{
	unsigned int i = 0;

	if (s1 == NULL || s2 == NULL)
		return (0);

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}

	if (s1[i] != s2[i])
		return (0);

	return (1);
}
