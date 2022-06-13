#include "main.h"

/**
 * _strcpy - copy a string from src to dest
 * @src: source
 * @dest: destination
 * Return: pointer to the destination
 */

char *_strcpy(char *dest, char *src)
{
	unsigned int i = 0;

	if (dest == NULL || src == NULL)
		return (NULL);
	
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
