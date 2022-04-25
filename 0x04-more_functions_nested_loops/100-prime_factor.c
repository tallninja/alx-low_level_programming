#include <stdio.h>

/**
* main - prints the largest prime factor of 612852475143
* Return: 0 if executed successfully
*/

int main(void)
{
	long int num = 612852475143;
	long int largest_prime_factor = 0;
	long int i;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			if (i > largest_prime_factor)
				largest_prime_factor = i;

			num = num / i;
		}
	}

	if (num > largest_prime_factor)
		largest_prime_factor = num;

	printf("%ld\n", largest_prime_factor);

	return (0);
}
