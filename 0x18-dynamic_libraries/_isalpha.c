#include "main.h"

/**
 * _isalpha - check if character is alphabet
 * @c: character
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
