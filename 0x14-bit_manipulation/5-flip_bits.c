#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res;
	int i;

	xor_res = n ^ m;
	i = 0;

	while (xor_res > 0)
	{
		i = i + (xor_res & 1);

		xor_res >>= 1;
	}

	return (i);
}
