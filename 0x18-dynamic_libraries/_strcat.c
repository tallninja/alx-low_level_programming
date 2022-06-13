#include "main.h"

/**
 * _strcat - concatenate a string to another string
 * @src: source
 * @dest: destination
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	unsigned int i = 0, j = 0;

	if (src == NULL || dest == NULL)
		return (NULL);

	while(dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++, j++;
	}
	dest[i] = '\0';

	return (dest);
}
