#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an
 * unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	char digit;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		digit = *b;
		if (digit == '0' || digit == '1')
		{
			result = (result << 1) + (digit - '0');
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (result);
}
