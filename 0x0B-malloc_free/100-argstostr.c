#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer number of arguments
 * @av: double pointer
 * Return: a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *new_string;
	int i = 0, j = 0, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}
	size++;
	new_string = malloc(sizeof(char) * (size + ac));
	size = 0;

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			new_string[size] = av[i][j];
			size++;
		}

		new_string[size] = '\n';
		size++;
	}
	return (new_string);
}
