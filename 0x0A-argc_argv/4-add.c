#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds multiple numbers
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 * Return: 0 if executed successfully
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
