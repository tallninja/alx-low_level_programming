#include "main.h"

/**
* _strlen - calculates the length of a string
* @s: pointer to the first character of the string
* Return: length of string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
