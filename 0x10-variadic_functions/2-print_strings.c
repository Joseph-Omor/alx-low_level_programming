#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings
 * @separator: string to be printed between strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	const char *str;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		/* Get the next argument */
		str = va_arg(args, const char *);

		if (str == NULL)
		{
			/* Print (nil) if the string is NULL */
			printf("(nil)");
		}
		else
		{
			/* Print the string */
			printf("%s", str);
		}

		if (i < n - 1 && separator != NULL)
		{
			/* Print the separator if not the last string */
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
