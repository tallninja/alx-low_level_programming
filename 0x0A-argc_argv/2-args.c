#include <stdio.h>

/**
 * main - prints all the command line
 * arguments passed to it
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 * Return: 0 if executed successfully
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
