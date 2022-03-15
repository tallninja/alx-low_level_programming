#include <stdio.h>

/**
* main - prints the sum of all the multiples of 3 or 5 below 1024
* Return: 0 if executed successfully
*/
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}

	printf("%d\n", sum);
	return (0);
}
