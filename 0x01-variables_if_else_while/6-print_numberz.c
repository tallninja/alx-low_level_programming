#include <stdio.h>

/**
* main - prints numbers from 0 - 9 using putchar
* Return: 0 after successful execution
*/
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}