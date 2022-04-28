#include "main.h"

/**
 * get_endianness - checks the endianess
 * Return: 1 if little endian 0 if big endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *) &num;

	return (*c == 1); /* if true LE else BE */
}
