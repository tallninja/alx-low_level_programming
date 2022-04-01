#include <stdio.h>

/**
* main - prints the name of the program
* @argc: number of command line arguments
* @argv: array containing command line arguments
* Return: 0 if executed successfully
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
