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
	unsigned int size, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = 1;

	for (i = 0; s1[i] != '\0'; i++)
		size++;

	for (j = 0; s2[j] != '\0'; j++)
		size++;

	str = malloc(size * sizeof(char));
	i = 0;

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	j = 0;

	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		j++;
		i++;
	}

	return (str);
}
