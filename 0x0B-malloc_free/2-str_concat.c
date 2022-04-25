#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int size = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (; s1[i] != '\0'; i++)
		size++;

	for (; s2[j] != '\0'; j++)
		size++;

	size++;

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}

	return (str);
}
