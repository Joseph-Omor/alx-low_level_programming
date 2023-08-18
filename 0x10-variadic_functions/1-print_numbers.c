#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		/* Get the next argument */
		num = va_arg(args, int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL)
		{
			/* Print the separator if not the last number */
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
