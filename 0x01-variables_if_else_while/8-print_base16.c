#include <stdio.h>

/**
* main - prints all the numbers of base 16 in lowercase
* Return: 0 after successful execution
*/
int main(void)
{
	char chr;

	for (chr = '0'; chr <= '9'; chr++)
	{
		putchar(chr);
	}

	for (chr = 'a'; chr <= 'f'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
