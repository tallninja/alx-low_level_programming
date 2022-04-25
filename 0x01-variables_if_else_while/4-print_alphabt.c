#include <stdio.h>

/**
* main - prints the alphabet in lowercase excepr q and e
* Return: 0 after successful execution
*/
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		if (chr != 'q' && chr != 'e')
		{
			putchar(chr);
		}
	}
	putchar('\n');
	return (0);
}
