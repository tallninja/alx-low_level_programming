#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 * Return: 0 if executed successfully
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;
	unsigned long int sum = 0;

	while (a < 4000000)
	{
		if ((a % 2) == 0)
		{
			sum += a;
		}

		c = a + b;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);

	return (0);
}
