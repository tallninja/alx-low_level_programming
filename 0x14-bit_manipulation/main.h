#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>

/**
 * _pow - calculates a number raised by exponent
 * @num: number
 * @exp: exponent
 * Return: number^exponent
 */

int _pow(int num, int exp)
{
    int result = 1;

    if (exp == 0)
        return (result);

    while (exp > 0)
        result *= num, exp--;

    return (result);
}

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);

#endif
