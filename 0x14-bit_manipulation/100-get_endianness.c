#include "main.h"

/**
 * get_endianess - checks the endianess
 */

int get_endianness(void)
{
	int num = 1;
	int *num_ptr = &num;

	return (*((char *)num_ptr) == 1); /* if true LE else BE */
}
