#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was
 * compiled from
 * Return: 0 if executed successfully, 1 otherwise
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
