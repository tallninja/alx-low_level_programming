#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 * Return: 0 if executed successfully and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *op_codes = (char *)&main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%.2hhx", op_codes[i]);

		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
