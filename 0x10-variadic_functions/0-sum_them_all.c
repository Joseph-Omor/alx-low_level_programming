#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: last required argument
 *
 * Return: the sum of all its variable arguments or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int num, sum;
	unsigned int i;

	i = 0;
	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	/* Initialize the argument list */
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		/* get the next argument */
		num = va_arg(args, int);
		sum += num;
	}

	/* clean up the argument list */
	va_end(args);
	return (sum);
}
