#include <stdio.h>

/**
* main - print lowercase alphabet in reverse order
* Return: 0 after successful execution
*/
int main(void)
{
	char chr;

	for (chr = 'z'; chr >= 'a'; chr--)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
