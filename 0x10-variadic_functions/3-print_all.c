#include "variadic_functions.h"

/**
 * print_all - A function that prints everything
 * @format: type of argument passed to the function
 */
void print_all(const char *const format, ...)
{
	int i, j, first;
	char c;
	va_list args;

	/* Array of format printers */
	FormatPrinter formatPrinters[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);
	first = 1;

	for (i = 0; format[i]; i++)
	{
		c = format[i];

		if (!first)
		{
			printf(", ");
		}

		for (j = 0; formatPrinters[j].format; j++)
		{
			if (formatPrinters[j].format == c)
			{
				formatPrinters[j].printer(args);
				break;
			}
		}

		first = 0;
	}
	printf("\n");
	va_end(args);
}

/**
 * print_char - prints character arguments
 * @args: variable argument passed to function
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints integer arguments
 * @args: variable argument passed to function
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints float arguments
 * @args: variable argument passed to function
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints string arguments
 * @args: variable argument passed to function
 */
void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
}


