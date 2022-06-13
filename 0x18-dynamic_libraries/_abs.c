#include "main.h"

/**
 * _abs - calcualtes the absolute value of a number
 * @n: number
 * Return: the absolute value
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
