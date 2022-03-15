#include <stdio.h>
#include "main.h"

/**
* print_times_table - prints all natural numbers from n to 98
* Return: nothing
*/
void print_times_table(int n)
{
	int row, col;
	
	if ((n <= 15) && (n >= 0))
	{	
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				int product = row * col;

				if (product < 10 && col > 0)
					printf("  ");
				else if (product < 100 && col > 0)
					printf(" ");
				
				printf("%d", product);
				
				if (col < n)
				{
					printf(", ");
				}
			}
			
			printf("\n");
		}
	}
}
