#include "main.h"

/**
 * get_endianess - checks the endianess
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *) &num;

	return (*c == 1); /* if true LE else BE */
}
