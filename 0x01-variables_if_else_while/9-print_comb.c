#include <stdio.h>

/**
* main - prints all possible combinations of single-digit numbers
* Return: 0 after successful execution
*/
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);

		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
