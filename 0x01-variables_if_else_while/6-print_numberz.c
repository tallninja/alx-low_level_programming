#include <stdio.h>

/**
 * main - prints numbers from 0 - 9 using putchar
 * Return: 0 after successful execution
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
