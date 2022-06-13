#include "main.h"

/**
 * _strspn - calculates length in bytes of the initial segment
 * of s which consists entirely of bytes in accept
 * @s: string
 * @accept: accept
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, length = 0, stop = 1;

	if (s == NULL || accept == NULL)
		return (0);

	while (s[i] != '\0')
	{
		j = 0, stop = 1;
		while (accept[j] != '\0')
		{
			if (s[j] == accept[j])
			{
				stop = 0, length++;
				break;
			}
			j++;
		}
		if (stop)
			return (length);
		i++;
	}

	return (length);
}
