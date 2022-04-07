#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 * Return: 0 if executed successfully (1 otherwise)
 */

int main(int argc, char *argv[])
{
	int i, j;
	unsigned long product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	product = atol(argv[1]) * atol(argv[2]);

	printf("%lu\n", product);

	return (0);
}
