#include "main.h"

/**
 * _strchr - returns a pointer to the first occurence of the character
 * c in the string s
 * @s: string
 * @c: character
 * Return: pointer to the first occurence of c in s
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

	return (NULL);
}
