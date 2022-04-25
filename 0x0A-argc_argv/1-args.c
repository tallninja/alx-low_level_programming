#include <stdio.h>

/**
 * main - prints the number of command line
 * arguments passed to it
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 * Return: 0 if executed successfully
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
