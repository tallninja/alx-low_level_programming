#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search through
 * @c: character we are looking for
 * Return: pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		else if (*(s + 1) == c)
			return (s + 1);

		s++;
	}

	return (s + 1);
}
