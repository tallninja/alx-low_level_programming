#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - creates a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string to be copied
 * Return: pointer to the new allocated space
 */

char *_strdup(char *str)
{
	char *new_str;
	unsigned int size, i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	size = 0;

	while (str[i] != '\0')
		size++, i++;

	size++;
	new_str = malloc(size * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		new_str[j] = str[j];

	return (new_str);
}
