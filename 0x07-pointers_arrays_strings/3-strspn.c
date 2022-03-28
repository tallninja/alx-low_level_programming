#include "main.h"

/**
* _strspn - gets the length of a prefix
* substring
* @s: string segment
* @accept: substring
* Return: length of the substring
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;
		int stop = 1;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				length++;
				stop = 0;
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
