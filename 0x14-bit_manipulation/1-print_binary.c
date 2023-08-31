#include "main.h"

/**
 * print_binary - A function that prints the binary representation
 * of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	/* create a mask with the leftmost bit set to 1 */
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	/* Initialize a flag to skip leading zeros */
	int found_one = 0;

	/* loop through each bit of the number */
	while (mask > 0)
	{
		/* check if the current bit is set (1) */
		if (n & mask)
		{
			found_one = 1;
			_putchar('1');
		}
		else if (found_one)
		{
			_putchar('0');
		}
		/* Right-shift the mask to check the next bit */
		mask >>= 1;
	}

	/* If the number is 0, print '0' */
	if (!found_one)
	{
		_putchar('0');
	}
}

