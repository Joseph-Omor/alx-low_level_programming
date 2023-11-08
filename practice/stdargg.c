// C program to demonstrate strarg methods

#include <stdio.h>
#include <stdarg.h>

// Variadic function to add numbers 
int AddNumbers(int n, ...)
{
	int Sum = 0;

	// Declaring pointer to the argument list
	va_list ptr;

	// Initializing argument to the list pointer
	va_start(ptr, n);


	for (int i = 0; i < n; i++)
	{
		/* Accessing current variable and pointing to next one */
		Sum += va_arg(ptr, int);

	}

	/* Ending argument list traversal */
	va_end(ptr);

	return (Sum);
}
