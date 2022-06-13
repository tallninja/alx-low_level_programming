#include "main.h"

/**
 * _strstr - finds the first occurence of the substring needle
 * in the string haystack
 * @haystack: haystack
 * @needle: needle
 * Return: pointer to the substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[i])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}

	return (NULL);
}
