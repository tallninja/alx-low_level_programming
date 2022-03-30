#include "main.h"

/**
* _pow_recursion - calculates value
* of x raised to the power oy y
* @x: the number
* @y: the exponent
* Return: x^y
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, (y - 1)));
}
