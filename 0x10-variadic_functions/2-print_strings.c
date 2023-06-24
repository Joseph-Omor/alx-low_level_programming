#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - A function that prints strings, followed by a new line
 * @n: number of strings
 * @separator: string for formatting
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, n);

	while (i < n)
	{
		str = va_arg(args, char *);
		if (str != NULL)
		{
			printf("%s", str);
			if (i != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("(nil)");
			if (i != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
