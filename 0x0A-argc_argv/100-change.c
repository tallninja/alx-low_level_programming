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
	int coins[] = {25, 10, 5, 2, 1};
	int cents, minimum_coins, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	minimum_coins = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && cents >= 0; i++)
	{
		while (coins[i] <= cents)
		{
			cents -= coins[i];
			minimum_coins++;
		}
	}
	printf("%d\n", minimum_coins);

	return (0);
}
