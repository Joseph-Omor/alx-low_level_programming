#include "main.h"

/**
 * count_set_bits - A helper function for the flip_bits
 * @n: number passed as argument
 *
 * Return: count of bits
 */
unsigned int count_set_bits(unsigned long int n)
{
	unsigned int count = 0;

	while (n > 0)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}

/**
 * flip_bits - A function that returns the number of bits you would need
 * to flip to get another one number to another.
 * @n: number
 * @m: other number
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;

	return (count_set_bits(xor_result));
}
