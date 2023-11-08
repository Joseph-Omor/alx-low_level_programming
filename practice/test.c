#include <stdio.h>

/**
 * print_numbers - prints numbers of a variadic function
 * @count: last fixed argument
 */
void print_numbers(int count, ...)
{
	va_list args;
	va_start(args, count);

	for (int i = 0; i < count; i++)
	{
		int num = va_arg(args, int);
		printf("%d ", num);
	}

	va_end(args);
}

int main(void)
{
	print_numbers(5, 1, 2, 3, 4, 5);
	return (0);
}
