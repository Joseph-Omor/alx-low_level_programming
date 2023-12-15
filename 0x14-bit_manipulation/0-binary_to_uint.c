#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if chars in b is not 0 or 1 or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		/* Checks is string is NULL */
		return (0);
	}

	while (*b)
	{
		if (*b == '0')
		{
			/* Shift the current result to the left (multipy by 2) & adds 0 */
			result = result << 1;
		}
		else if (*b == '1')
		{
			/* Shift the current result to the left & adds 1 */
			result = (result << 1) | 1;
		}
		else
		{
			/* Invalid character found, return 0 */
			return (0);
		}
		b++; /* Move to the next character in the string */
	}
	return (result);
}

