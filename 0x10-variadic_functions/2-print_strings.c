#include "variadic_functions.h"

/**
 * print_strings - function to print numbers
 * @seperator: output formatter
 * @n: number of arguments
 *
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list abc;
	unsigned int i;
	char *string;

	if (n == 0)
		return;

	va_start(abc, n);
	/* attempts to check seperator for NULL prompted the need for nested */
	/* if and duplicate code - Checker failed - Find alternative */
	if (seperator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			string = va_arg(abc, char *);
			printf("%s", string);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			string = va_arg(abc, char *);
			if (i == n - 1)
				printf("%s", string);
			else
				printf("%s%s", string, seperator);
		}
	}
	printf("\n");
	va_end(abc);
}
