#include <stdio.h>

/**
* main - prints all single digit numbers of base 10 starting from 0
* Return: 0 after successful execution
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
