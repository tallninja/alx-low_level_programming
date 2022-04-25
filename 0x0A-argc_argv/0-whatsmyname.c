#include <stdio.h>

/**
* main - prints the name of the program
* @argc: number of command line arguments
* @argv: array containing command line arguments
* Return: 0 if executed successfully
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
