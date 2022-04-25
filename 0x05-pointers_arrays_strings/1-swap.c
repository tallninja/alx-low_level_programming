#include "main.h"

/**
* swap_int - swap values of two integers
* @a: first integer
* @b: second integer
* Return: nothing
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
