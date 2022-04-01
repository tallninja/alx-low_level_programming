#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum number of coins to make change
 * for an amount of money
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 * Return: 0 if executed successfully
 */

int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int minimum_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			minimum_coins++;
		}

		else if (cents >= 10)
		{
			cents -= 10;
			minimum_coins++;
		}

		else if (cents >= 5)
		{
			cents -= 5;
			minimum_coins++;
		}

		else if (cents >= 2)
		{
			cents -= 2;
			minimum_coins++;
		}

		else
		{
			cents -= 1;
			minimum_coins++;
		}
	}

	printf("%d\n", minimum_coins);

	return (0);
}
