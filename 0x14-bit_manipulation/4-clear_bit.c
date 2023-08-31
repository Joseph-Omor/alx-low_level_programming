#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 * @n: argument
 * @index: given index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Calculate the number ob bits in an unsigned long int */
	unsigned int num_bits = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	/* Check if the provided is within bounds */
	if (index >= num_bits)
	{
		return (-1);
	}
	/* Create a mask to clear the bit at the given index */
	mask = ~(1UL << index);

	/* Use bitwise AND operation to clear the bit */
	*n &= mask;

	return (1);
}
