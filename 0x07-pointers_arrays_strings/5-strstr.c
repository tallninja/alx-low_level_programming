#include "main.h"
#include <stddef.h>

/**
* _strstr - locates a substring
* @haystack: sting containing the substring
* @needle: the substring looking for
* Return: pointer to the first occurence
*/

char *_strstr(char *haystack, char *needle)
{
	char *occurence = NULL;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			int j = 0;

			occurence = haystack;

			while (*needle != '\0')
			{
				if (*needle != haystack[j])
				{
					occurence = NULL;
					break;
				}

				needle++;
				j++;
			}
		}

		haystack++;
	}

	return (occurence);
}
