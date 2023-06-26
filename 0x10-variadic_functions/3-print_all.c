#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - A function that prints anything
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;

	va_start(args, format);

	while (*ptr != '\0')
	{
		if (*ptr == 'c')
		{
			char arg = va_arg(args, int);

			printf("%c ", arg);
		}
		else if (*ptr == 'i')
		{
			int arg = va_arg(args, int);

			printf("%d ", arg);
		}
		else if (*ptr == 'f')
		{
			double arg = va_arg(args, double);

			printf("%f ", arg);
		}
		else if (*ptr == 's')
		{
			char *arg = va_arg(args, char *);

			if (arg == NULL)
				printf("(nil) ");
			else
				printf("%s ", arg);
		}

		ptr++;
	}

	va_end(args);
	printf("\n");
}
