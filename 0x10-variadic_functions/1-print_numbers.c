#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers
 * @seperator: output formatter
 * @n: number of arguments
 *
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ab;
	unsigned int i;
	int value;

	if (n == 0)
		return;

	va_start(ab, n);
	if (seperator == NULL)
	{
		for (i = 0; i < n; i++)
			{
				value = va_arg(ab, int);
				printf("%d", value);
			}

	}
	else
	{
		for (i = 0; i < n; i++)
			{
				value = va_arg(ab, int);
				if (i == n - 1)
					printf("%d", value);
				else
					printf("%d%s", value, seperator);
			}
	}
	printf("\n");
	va_end(ab);
}
