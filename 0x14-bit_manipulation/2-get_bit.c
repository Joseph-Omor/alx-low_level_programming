#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @index: The index starting from 0
 * @n: integer argument
 *
 * Return: The value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Calculate the number of bits in an unsigned long int */
	unsigned int num_bits = sizeof(unsigned long int) * 8;
	unsigned long int mask;
	int bit_value;

	/* Check if the provided index is within bounds */
	if (index >= num_bits)
	{
		return (-1);
	}
	mask = 1UL << index;
	bit_value = (n & mask) ? 1 : 0;
	return (bit_value);
}
