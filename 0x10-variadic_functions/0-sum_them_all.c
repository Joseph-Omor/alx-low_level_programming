#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - fuction that returns all its parameters
 * @n: integer used for count
 *
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list varg;
	unsigned int i, result = 0;

	i = 0;

	va_start(varg, n);
	while (i < n)
	{
		result = result + va_arg(varg, int);
		i++;
	}

	va_end(varg);

	return (result);
}
