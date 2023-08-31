#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index
 * @n: value
 * @index: index starting from 0
 * Return: 1 if it worked, or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_bits = sizeof(unsigned long int) * 8;
	unsigned long int mask;
	/* Check if the provided index is within bounds */
	if (index >= num_bits)
	{
		return (-1);
	}

	/* create a mask to set the bit at the given index */
	mask = 1UL << index;
	/* Use bitwise OR operation to set the bit */
	*n |= mask;
	return (1);
}
