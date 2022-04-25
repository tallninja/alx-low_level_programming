#include <stdio.h>

/**
* main - prints the alphabet in lowercase
* Return: 0 after successful execution
*/
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
