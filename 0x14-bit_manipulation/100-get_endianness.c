#include "main.h"

/**
 * get_endianness - checks the endianess
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *) &num;

	return (*c == 1); /* if true LE else BE */
}
