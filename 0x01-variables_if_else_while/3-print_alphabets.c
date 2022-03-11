#include <stdio.h>

/**
* main - prints the alphabet in lowercase, and then in uppercase
* Return: 0 after successful execution
*/
int main(void)
{
	for (char chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
	}
	for (char chr = 'A'; chr <= 'Z'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
