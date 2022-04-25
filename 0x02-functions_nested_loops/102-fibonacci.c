#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers, starting with 1 and 2
* Return: 0 if executed successfully
*/
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("%lu\n", a);		

		c = a + b;
		a = b;
		b = c;
	}
}
