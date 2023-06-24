#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line
 * @n: integer used for count
 * @separator: string for formatting
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		if (separator == NULL || i == n - 1)
		{
			printf("%d", va_arg(args, int));
		}
		else
			printf("%d%s", va_arg(args, int), separator);
		i++;
	}
	printf("\n");
}
