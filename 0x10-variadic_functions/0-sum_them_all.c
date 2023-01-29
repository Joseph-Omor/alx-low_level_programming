#include <stdarg.h>

/**
 * sum_them_all - funtion that sums up its variable arguments
 * @n: stands as number of arguments to sum
 *
 * Return: 0 if n == 0 and sum if summed up correctly
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ab;
	int sum;
	unsigned int i;


	if (n == 0)
		return (0);

	va_start(ab, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ab, int); /* va_arg returns the value of each
					   argument passed and adds it to value at sum */
	}
	va_end(ab);
	return (sum);
}

