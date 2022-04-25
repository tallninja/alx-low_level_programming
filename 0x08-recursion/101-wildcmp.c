#include "main.h"
#include <stdio.h>
/**
 * wildcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if string are same and 0 otherwise.
 **/
int wildcmp(char *s1, char *s2)
{
	char delim = '\0';
	int a, b, c;
	char *S1 = s1 + 1, *S2 = s2 + 1;

	if (*s1 == delim && *s2 == delim)
		return (1);

	if (*s1 == delim && *s2 == '*')
	{
		b = wildcmp(s1, S2);
		return (b);
	}

	if (*s1 == *s2)
	{
		a = wildcmp(S1, S2);
		return (a);
	}

	if (*s2 == '*')
	{
		c = (wildcmp(s1, S2)) || (wildcmp(S1, s2));
		return (c);
	}

	return (0);
}
