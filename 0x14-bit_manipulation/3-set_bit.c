#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 *
 * @n: A pointer to an unsigned long integer.
 * @index: The index position to change, starting from 0.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, size, value;

	size = sizeof(unsigned long int) * 8 - 1;
	if (index > size)
		return (-1);

	value = 1UL;
	mask = value << index;
	*n = (*n | mask);

	return (1);
}
